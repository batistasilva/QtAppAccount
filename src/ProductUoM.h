/* 
 * File:   ProductUoM.h
 * Author: batista
 *
 * Created on 9 de Julho de 2013, 22:33
 */

#ifndef PRODUCTUOM_H
#define	PRODUCTUOM_H
#include <qt5/QtSql/qsqlerror.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "common/Util.h"
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class ProductUoM {
public:
    ProductUoM();
    virtual ~ProductUoM();
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
     * Method to get ProductUom for a 
     * query.
     * @param vquery
     * @return ProductUoM
     */
    ProductUoM * getUomForQuery(QString vquery); 
    
    
    /**
     * Add a new Uom to 
     * database.
     * @return 
     */
    bool addNewUom();
    /**
     * Remove a existing Uom
     * from database. 
     * @return 
     */
    bool removeUom();
    /**
     * Update a existing Uom 
     * from database
     * @return 
     */
    bool updateUom();
    /**
     * Get Object with a Uom
     * to productuom_id or name
     * @return 
     */
    ProductUoM* getUom(ProductUoM &);
    /**
     * Get all uoms from database
     * @return 
     */
    QVector<ProductUoM*> getAllUoms();

    //

    QString getUomDateChange() const {
        return uomDateChange;
    }

    void setUomDateChange(QString uomDateChange) {
        this->uomDateChange = uomDateChange;
    }

    QString getUomDateCreate() const {
        return uomDateCreate;
    }

    void setUomDateCreate(QString uomDateCreate) {
        this->uomDateCreate = uomDateCreate;
    }

    QString getUomDescrip() const {
        return uomDescrip;
    }

    void setUomDescrip(QString uomDescrip) {
        this->uomDescrip = uomDescrip;
    }

    int getUomId() const {
        return uomId;
    }

    void setUomId(int uomId) {
        this->uomId = uomId;
    }

    QString getUomName() const {
        return uomName;
    }

    void setUomName(QString uomName) {
        this->uomName = uomName;
    }

    bool isUomStatus() const {
        return uomStatus;
    }

    void setUomStatus(bool uomStatus) {
        this->uomStatus = uomStatus;
    }

    bool isUomWeight() const {
        return uomWeight;
    }

    void setUomWeight(bool uomWeight) {
        this->uomWeight = uomWeight;
    }


    //

private:
    ProductUoM * produom;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;

private:
    int uomId; //uofm_id integer NOT NULL DEFAULT nextval(('uofm_uofm_id_seq'::text)::regclass),
    QString uomName; //uofm_name text NOT NULL,
    QString uomDescrip; //uofm_descrip text,
    bool uomStatus;//uofm_active boolean NOT NULL DEFAULT true,
    bool uomWeight;//uofm_item_weight boolean NOT NULL DEFAULT false,
    QString uomDateCreate;//uofm_date_create timestamp without time zone,
    QString uomDateChange;//uofm_date_change timestamp without time zone,
};


/*
CREATE TABLE unit_of_measure
(
  CONSTRAINT uofm_pkey PRIMARY KEY (uofm_id),
  CONSTRAINT uofm_uom_name_key UNIQUE (uofm_name),
  CONSTRAINT uofm_uom_name_check CHECK (uofm_name <> ''::text)
)
 */

#endif	/* PRODUCTUOM_H */

