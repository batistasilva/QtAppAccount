/* 
 * File:   WareHouse.h
 * Author: batista
 *
 * Created on 5 de Julho de 2013, 13:50
 */

#ifndef WAREHOUSE_H
#define	WAREHOUSE_H
#include <QString>
#include <QByteArray>
#include <QVector>
#include <QtSql/QtSql>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class WareHouse {
public:
    WareHouse();
    virtual ~WareHouse();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    DirFile* getDir() const {
        return dir;
    }

    void setDir(DirFile* dir) {
        this->dir = dir;
    }

     
    /**
     * Add a new WareHouse to 
     * database.
     * @return 
     */
    bool addNewWarehouse();
    /**
     * Remove a existing WareHouse
     * from database. 
     * @return 
     */
    bool removeWarehouse();
    /**
     * Update a existing Warehouse 
     * from database
     * @return 
     */
    bool updateWarehouse();
    /**
     * Get Object with a Warehouse
     * to Warehouse_id or name
     * @return 
     */
    WareHouse* getWarehouse(WareHouse &);
    /**
     * Get all Warehouse from database
     * @return 
     */
    QVector<WareHouse*> getAllWarehouseForCBox();

    //
    bool isWarehouseActive() const {
        return warehouseActive;
    }

    void setWarehouseActive(bool warehouseActive) {
        this->warehouseActive = warehouseActive;
    }

    QString getWarehouseCode() const {
        return warehouseCode;
    }

    void setWarehouseCode(QString warehouseCode) {
        this->warehouseCode = warehouseCode;
    }

    QString getWarehouseDescrib() const {
        return warehouseDescrib;
    }

    void setWarehouseDescrib(QString warehouseDescrib) {
        this->warehouseDescrib = warehouseDescrib;
    }

    int getWarehouseId() const {
        return warehouseId;
    }

    void setWarehouseId(int warehouseId) {
        this->warehouseId = warehouseId;
    }

    int getWarehouseShipFormId() const {
        return warehouseShipFormId;
    }

    void setWarehouseShipFormId(int warehouseShipFormId) {
        this->warehouseShipFormId = warehouseShipFormId;
    }

    int getWarehouseShipNote() const {
        return warehouseShipNote;
    }

    void setWarehouseShipNote(int warehouseShipNote) {
        this->warehouseShipNote = warehouseShipNote;
    }

    int getWarehouseShipViaId() const {
        return warehouseShipViaId;
    }

    void setWarehouseShipViaId(int warehouseShipViaId) {
        this->warehouseShipViaId = warehouseShipViaId;
    }

    int getWarehouseSiteTypeId() const {
        return warehouseSiteTypeId;
    }

    void setWarehouseSiteTypeId(int warehouseSiteTypeId) {
        this->warehouseSiteTypeId = warehouseSiteTypeId;
    }

    int getWarehouseTaxZoneId() const {
        return warehouseTaxZoneId;
    }

    void setWarehouseTaxZoneId(int warehouseTaxZoneId) {
        this->warehouseTaxZoneId = warehouseTaxZoneId;
    }

    //
//
private:
    WareHouse   * wh;
    ShowMsg     * msg;
    DirFile     * dir;
    DbConn      * dbconn;
    //

//    
private:
    int warehouseId;//warehous_id integer NOT NULL DEFAULT nextval(('warehous_warehous_id_seq'::text)::regclass)
    QString warehouseCode;//warehous_code text NOT NULL,
    QString warehouseDescrib;//warehous_descrip text,
    bool warehouseActive;//warehous_active boolean,
    int warehouseSiteTypeId;//warehous_sitetype_id integer,
    int warehouseTaxZoneId; //warehous_taxzone_id integer,
    int warehouseShipFormId;//warehous_shipform_id integer,
    int warehouseShipViaId;//warehous_shipvia_id integer,
    int warehouseShipNote;//warehous_shipcomments text,
    
};


/*
 CREATE TABLE whsinfo
(
  warehous_fob text,
  
  
  
  
  warehous_counttag_prefix text,
  warehous_counttag_number integer,
  warehous_bol_prefix text,
  warehous_bol_number integer,
  warehous_shipping boolean,
  warehous_useslips boolean,
  warehous_usezones boolean,
  warehous_aislesize integer,
  warehous_aislealpha boolean,
  warehous_racksize integer,
  warehous_rackalpha boolean,
  warehous_binsize integer,
  warehous_binalpha boolean,
  warehous_locationsize integer,
  warehous_locationalpha boolean,
  warehous_enforcearbl boolean,
  warehous_default_accnt_id integer,
  warehous_shipping_commission numeric(8,4) DEFAULT 0.00,
 
  warehous_cntct_id integer,
  warehous_addr_id integer,
  warehous_transit boolean NOT NULL DEFAULT false,
  warehous_costcat_id integer,
 
  
  warehous_sequence integer NOT NULL DEFAULT 0,
 
 )
 */

#endif	/* WAREHOUSE_H */

