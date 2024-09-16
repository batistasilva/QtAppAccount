/* 
 * File:   WareHouse.cpp
 * Author: batista
 * 
 * Created on 5 de Julho de 2013, 13:50
 */

#include "WareHouse.h"

WareHouse::WareHouse() {
}

WareHouse::~WareHouse() {
}

/**
 * Add a new WareHouse to 
 * database.
 * @return 
 */
bool WareHouse::addNewWarehouse(){
    return true;   
}

/**
 * Remove a existing WareHouse
 * from database. 
 * @return 
 */
bool WareHouse::removeWarehouse(){
    return true;   
}

/**
 * Update a existing Warehouse 
 * from database
 * @return 
 */
bool WareHouse::updateWarehouse(){
  return true;     
}

/**
 * Get Object with a Warehouse
 * to Warehouse_id or name
 * @return 
 */
WareHouse* WareHouse::getWarehouse(WareHouse &){
   wh = new WareHouse();
   //
   return wh;
}

/**
 * Get all Warehouse from database
 * from view warehous
 * @return 
 */
QVector<WareHouse*> WareHouse::getAllWarehouseForCBox(){
    QSqlQuery query;
    //
    QVector<WareHouse *> vec_all_wh;

    QString vquery = "SELECT warehous_id, warehous_code, warehous_descrip FROM warehous ORDER BY warehous_code";
    //

    //
    msg->ShowMessage("Lendo todas as Filiais do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_GREEN);
    //

    query.exec(vquery);

    while (query.next()) {
        //
        wh = new WareHouse();

        //WAREHOUSE_ID
        wh->setWarehouseId(query.value(0).toUInt()); // 0=coluna

        //WAREHOUSE_CODE
        wh->setWarehouseCode(query.value(1).toString()); // 1=coluna

        //WAREHOUSE_DESCRIP
        wh->setWarehouseDescrib(query.value(2).toString()); // 2=coluna

//        msg->ShowMessage("Add Harehouse: " + wh->getWarehouse_code(), COLOR_BLUE, COLOR_PINK);
        //
        vec_all_wh.push_back(wh);
        //
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Warehouse not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/Warehouse/");
        //   
        dir->CreateLogFile("WAREHOUSE-NOT-FOUND", erro_query);
    }

    //
    return vec_all_wh;    
}


