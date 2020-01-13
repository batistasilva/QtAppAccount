/* 
 * File:   ProductSubCategory.h
 * Author: batista
 *
 * Created on 3 de Julho de 2013, 16:35
 */

#ifndef PRODUCTSUBCATEGORY_H
#define	PRODUCTSUBCATEGORY_H
#include <QtSql/qtsqlglobal.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "common/Util.h"
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class ProductSubCategory{
public:
    ProductSubCategory();
    virtual ~ProductSubCategory();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //
    
   /**
     * Get Next id from database table 
     * to add.
     * @param 
     * @return 
     */
    int getNextIdFromTable();

    
    /**
     * Add a new subcategory to 
     * database.
     * @return 
     */
    bool addNewSubCategory();
    /**
     * Remove a existing subcategory
     * from database. 
     * @return 
     */
    bool removeSubCategory();
    /**
     * Update a existing category 
     * from database
     * @return 
     */
    bool updateSubCategory();
    /**
     * Get Object with a Category
     * to Category_id or name
     * @return 
     */
    ProductSubCategory* getSubCategory(ProductSubCategory&);
    /**
     * Get all Category from database
     * @return 
     */
    QVector<ProductSubCategory*> getAllSubCategory();


    //

    QString getSubCatCode() const {
        return subCatCode;
    }

    void setSubCatCode(QString subCatCode) {
        this->subCatCode = subCatCode;
    }

    QString getSubCatDateChange() const {
        return subCatDateChange;
    }

    void setSubCatDateChange(QString subCatDateChange) {
        this->subCatDateChange = subCatDateChange;
    }

    QString getSubCatDateCreate() const {
        return subCatDateCreate;
    }

    void setSubCatDateCreate(QString subCatDateCreate) {
        this->subCatDateCreate = subCatDateCreate;
    }

    QString getSubCatDescrip() const {
        return subCatDescrip;
    }

    void setSubCatDescrip(QString subCatDescrip) {
        this->subCatDescrip = subCatDescrip;
    }

    int getSubCatId() const {
        return subCatId;
    }

    void setSubCatId(int subCatId) {
        this->subCatId = subCatId;
    }

    QString getSubCatShortDescrip() const {
        return subCatShortDescrip;
    }

    void setSubCatShortDescrip(QString subCatShortDescrip) {
        this->subCatShortDescrip = subCatShortDescrip;
    }

    bool isSubCatStatus() const {
        return subCatStatus;
    }

    void setSubCatStatus(bool subCatStatus) {
        this->subCatStatus = subCatStatus;
    }

 
    //
    
private:
    ProductSubCategory * prodsubcat;//subcategory
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;  
    //
private:
    int subCatId; // subcat_id integer NOT NULL DEFAULT nextval(('subcat_subcat_id_seq'::text)::regclass),
    QString subCatCode; //subcat_code text NOT NULL,
    bool subCatStatus;//subcat_active boolean NOT NULL DEFAULT true,
    QString subCatDescrip; // subcat_descrip text,
    QString subCatShortDescrip; //subcat_shortdescrip text, -- A Short Description for SubCategory
    QString subCatDateCreate;//subcat_date_create timestamp without time zone,
    QString subCatDateChange;//subcat_date_change timestamp without time zone,
};

/*
 CREATE TABLE subcategory
(
  
  
  
 
  
  
  
  CONSTRAINT subcat_pkey PRIMARY KEY (subcat_id),
  CONSTRAINT subcat_subcat_code_key UNIQUE (subcat_code),
  CONSTRAINT subcat_subcat_code_check CHECK (subcat_code <> ''::text)
)
 */


#endif	/* PRODUCTSUBCATEGORY_H */

