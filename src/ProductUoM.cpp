/* 
 * File:   ProductUoM.cpp
 * Author: batista
 * 
 * Created on 9 de Julho de 2013, 22:33
 */

#include "ProductUoM.h"

ProductUoM::ProductUoM() {
    dir = new DirFile();
    //
}

ProductUoM::~ProductUoM() {
}


/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int ProductUoM::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('uofm_uofm_id_seq') AS item_id");
    // query.exec();
    //
    if (query.first()) {
        item_id = query.value(getColNumberToStr(query, "item_id")).toInt();
    } else {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in geting: NEXTVAL " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
    }
    //
    return item_id;
}


/**
 * Method to get ProductUom for a 
 * query.
 * @param vquery
 * @return ProductUoM
 */
ProductUoM * ProductUoM::getUomForQuery(QString vquery) {
    QSqlQuery query;
    //
    query.exec(vquery);
    //
    while (query.next()) {
        //
        QSqlRecord record = query.record();
        //
        produom = new ProductUoM();

        //UOFM_ID
        produom->setUomId(record.value("uofm_id").toUInt());

        //UOFM_NAME
        produom->setUomName(record.value("uofm_name").toString());

        //UOFM_DESCRIP
        produom->setUomDescrip(record.value("uofm_descrip").toString());

        //UOFM_ACTIVE
        produom->setUomStatus(record.value("uofm_active").toBool());

        //UOFM_ITEM_WEIGHT
        produom->setUomWeight(record.value("uofm_item_weight").toBool());

        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
    }    
    //
    if (!query.first()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Unit of Measure not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/ProductUom/");
        //   
        dir->CreateLogFile("PRODUCTUOM-NOT-FOUND", erro_query);
    }
    //
    return produom;
}


/**
 * Add a new Uom to 
 * database.
 * @return 
 */
bool ProductUoM::addNewUom() {
    //
    qDebug() << "Add Product Uom: --->> " << getUomDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO unit_of_measure ("
            //
            "uofm_id, "
            "uofm_name, "
            "uofm_descrip, "
            "uofm_active, "
            "uofm_item_weight, "
            "uofm_date_create"
            //
            ") VALUES ("
            //
            ":uofm_id, "
            ":uofm_name, "
            ":uofm_descrip, "
            ":uofm_active, "
            ":uofm_item_weight, "
            ":uofm_date_create"
            //
            ");";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":uofm_id", getUomId());
    query.bindValue(":uofm_name", getUomName().trimmed());
    query.bindValue(":uofm_descrip", getUomDescrip().trimmed());
    query.bindValue(":uofm_active", isUomStatus());
    query.bindValue(":uofm_item_weight", isUomWeight());
    query.bindValue(":uofm_date_create", getDateTime());
    //
    result = query.exec();
    //
    if (result) {
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Add Product Uom for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductUom/");
        //   
        dir->CreateLogFile("ERRO-ADD-PRODUCTUOMS", erro_query); //       

        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //            
    return true;
}


/**
 * Remove a existing Uom
 * from database. 
 * @return 
 */
bool ProductUoM::removeUom() {
    //
    qDebug() << "Remove Product Lines: --->> " << getUomDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "DELETE FROM unit_of_measure WHERE (uofm_id=:uofm_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":uofm_id", getUomId());
    //
    result = query.exec();
    //
    if (result) {
        msg->ShowMessage("Remocao feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Remove Product Uom for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductUom/");
        //   
        dir->CreateLogFile("ERRO-RM-PRODUCTUOMS", erro_query); //       

        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //            
    return true;
}


/**
 * Update a existing Uom 
 * from database
 * @return 
 */
bool ProductUoM::updateUom() {
    //
    qDebug() << "Updt Product Line: --->> " << getUomDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "UPDATE unit_of_measure SET "
            //
            "uofm_name=:uofm_name, "
            "uofm_descrip=:uofm_descrip, "
            "uofm_active=:uofm_active, "
            "uofm_item_weight=:uofm_item_weight, "
            "uofm_date_change=:uofm_date_change"
            //
            " WHERE (uofm_id=:uofm_id);";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":uofm_id", getUomId());
    query.bindValue(":uofm_name", getUomName().trimmed());
    query.bindValue(":uofm_descrip", getUomDescrip().trimmed());
    query.bindValue(":uofm_active", isUomStatus());
    query.bindValue(":uofm_item_weight", isUomWeight());
    query.bindValue(":uofm_date_change", getDateTime());
    //
    result = query.exec();
    //
    if (result) {
        msg->ShowMessage("Alteracao feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in UPDT Product Uom for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductUom/");
        //   
        dir->CreateLogFile("ERRO-UPDT-PRODUCTUOMS", erro_query); //       

        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //            
    return true;
}


/**
 * Get Object with a Uom
 * to productuom_id or name
 * @return 
 */
ProductUoM* ProductUoM::getUom(ProductUoM &) {
    produom = new ProductUoM();
    //
    return produom;
}


/**
 * Get all uoms from database
 * @return 
 */
QVector<ProductUoM*> ProductUoM::getAllUoms() {
    QSqlQuery query;
    //
    QVector<ProductUoM *> vector_uoms;

    QString vquery = "SELECT * FROM unit_of_measure ORDER BY uofm_name";
    //

    //
    msg->ShowMessage("Lendo todas as Unidades de Medidas do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        QSqlRecord record = query.record();
        //
        produom = new ProductUoM();

        //UOFM_ID
        produom->setUomId(record.value("uofm_id").toUInt());

        //UOFM_NAME
        produom->setUomName(record.value("uofm_name").toString());

        //UOFM_DESCRIP
        produom->setUomDescrip(record.value("uofm_descrip").toString());

        //UOFM_ACTIVE
        produom->setUomStatus(record.value("uofm_active").toBool());

        //UOFM_ITEM_WEIGHT
        produom->setUomWeight(record.value("uofm_item_weight").toBool());

        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
        //
        vector_uoms.push_back(produom);
        //
    }
    //
    if (!query.first()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Unit of Measure not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/ProductUom/");
        //   
        dir->CreateLogFile("PRODUCTUOMS-NOT-FOUND", erro_query);
    }

    //
    return vector_uoms;

}


