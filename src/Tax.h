/* 
 * File:   Tax.h
 * Author: batista
 *
 * Created on 15 de Julho de 2013, 14:23
 */

#ifndef TAX_H
#define	TAX_H
#include <qt5/QtSql/qsqlerror.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class Tax {
public:
    Tax();
    virtual ~Tax();
    //
    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //
   /**
     * Add a new Tax to 
     * database.
     * @return 
     */
    bool addNewTax();
    /**
     * Remove a existing Tax
     * from database. 
     * @return 
     */
    bool removeTax();
    /**
     * Update a existing Tax 
     * from database
     * @return 
     */
    bool updateTax();
    /**
     * Get Object with a Tax
     * to tax_id or name
     * @return 
     */
    Tax * getTax(Tax &);
    /**
     * Get all taxs from database
     * @return 
     */
    QVector<Tax*> getAllTaxs();
    
    //
    int getTaxBasisTaxId() const {
        return taxBasisTaxId;
    }

    void setTaxBasisTaxId(int taxBasisTaxId) {
        this->taxBasisTaxId = taxBasisTaxId;
    }

    int getTaxClassId() const {
        return taxClassId;
    }

    void setTaxClassId(int taxClassId) {
        this->taxClassId = taxClassId;
    }

    QString getTaxCode() const {
        return taxCode;
    }

    void setTaxCode(QString taxCode) {
        this->taxCode = taxCode;
    }

    QString getTaxDescrip() const {
        return taxDescrip;
    }

    void setTaxDescrip(QString taxDescrip) {
        this->taxDescrip = taxDescrip;
    }

    int getTaxId() const {
        return taxId;
    }

    void setTaxId(int taxId) {
        this->taxId = taxId;
    }

    int getTaxTaxAuthId() const {
        return taxTaxAuthId;
    }

    void setTaxTaxAuthId(int taxTaxAuthId) {
        this->taxTaxAuthId = taxTaxAuthId;
    }
    
    //
private:
    Tax * tax;
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;
    
private:
    int taxId;//tax_id integer NOT NULL DEFAULT nextval(('"tax_tax_id_seq"'::text)::regclass)
    QString taxCode;//tax_code text NOT NULL
    QString taxDescrip;//tax_descrip text,
    int taxClassId;//tax_taxclass_id integer,
    int taxTaxAuthId;//tax_taxauth_id integer
    int taxBasisTaxId;//tax_basis_tax_id integer,
    
};

/*
 CREATE TABLE tax
(
  
  
  
  tax_sales_accnt_id integer, -- Deprecated column - DO NOT USE
  
  
  
)
 */


#endif	/* TAX_H */

