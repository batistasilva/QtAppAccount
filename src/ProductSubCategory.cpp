/* 
 * File:   ProductSubCategory.cpp
 * Author: batista
 * 
 * Created on 3 de Julho de 2013, 16:35
 */
#include <qt5/QtSql/qsqlerror.h>
#include <qt5/QtSql/qsqlrecord.h>

#include "ProductSubCategory.h"

ProductSubCategory::ProductSubCategory() {
    dir = new DirFile();
}

ProductSubCategory::~ProductSubCategory() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int ProductSubCategory::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('subcat_subcat_id_seq') AS item_id");
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
 * Add a new SubCategory to 
 * database.
 * @return 
 */
bool ProductSubCategory::addNewSubCategory() {
        //
    qDebug() << "Add SubCategory: --->> " << getSubCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO subcategory ("
            //
            "subcat_id, "
            "subcat_code, "
            "subcat_active, "
            "subcat_descrip, "
            "subcat_shortdescrip, "
            "subcat_date_create"
            //
            ") VALUES ("
            //
            ":subcat_id, "
            ":subcat_code, "
            ":subcat_active, "
            ":subcat_descrip, "
            ":subcat_shortdescrip, "
            ":subcat_date_create"
            //
            ");";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":subcat_id", getSubCatId());
    query.bindValue(":subcat_code", getSubCatCode().trimmed());
    query.bindValue(":subcat_active", isSubCatStatus());
    query.bindValue(":subcat_descrip", getSubCatDescrip().trimmed());
    query.bindValue(":subcat_shortdescrip", getSubCatShortDescrip().trimmed());
    query.bindValue(":subcat_date_create", getDateTime());
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
        QString erro_query = "Error SQL in Add SubCategory for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/SubCategory/");
        //   
        dir->CreateLogFile("SUBCATEGORY-ERRO-ADD-SQL", erro_query);
        //        
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
 * Remove a existing SubCategory
 * from database. 
 * @return 
 */
bool ProductSubCategory::removeSubCategory() {
        //
    qDebug() << "Remove SubCategory: --->> " << getSubCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "DELETE FROM subcategory WHERE (subcat_id=:subcat_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":subcat_id", getSubCatId());
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
        QString erro_query = "Error SQL in Remove SubCategory for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/SubCategory/");
        //   
        dir->CreateLogFile("SUBCATEGORY-ERRO-RM-SQL", erro_query);
        //        
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
 * Update a existing SubCategory 
 * from database
 * @return 
 */
bool ProductSubCategory::updateSubCategory() {
       //
    qDebug() << "Updt SubCategory: --->> " << getSubCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "UPDATE subcategory SET "
            //
            "subcat_code=:subcat_code, "
            "subcat_active=:subcat_active, "
            "subcat_descrip=:subcat_descrip, "
            "subcat_shortdescrip=:subcat_shortdescrip, "
            "subcat_date_change=:subcat_date_change"
            //
            " WHERE (subcat_id=:subcat_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":subcat_id", getSubCatId());
    query.bindValue(":subcat_code", getSubCatCode().trimmed());
    query.bindValue(":subcat_active", isSubCatStatus());
    query.bindValue(":subcat_descrip", getSubCatDescrip().trimmed());
    query.bindValue(":subcat_shortdescrip", getSubCatShortDescrip().trimmed());
    query.bindValue(":subcat_date_change", getDateTime());
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
        QString erro_query = "Error SQL in Updt SubCategory for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/SubCategory/");
        //   
        dir->CreateLogFile("SUBCATEGORY-ERRO-UPDT-SQL", erro_query);
        //        
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
 * Get Object with a SubCategory
 * to Category_id or name
 * @return 
 */
ProductSubCategory* ProductSubCategory::getSubCategory(ProductSubCategory&) {
    prodsubcat = new ProductSubCategory();
    //
    return prodsubcat;
}

/**
 * Get all SubCategory from database
 * @return 
 */
QVector<ProductSubCategory*> ProductSubCategory::getAllSubCategory() {
    QSqlQuery query;
    //
    QVector<ProductSubCategory *> vec_all_subcat;

    QString vquery = "SELECT * FROM subcategory ORDER BY subcat_code";
    //
    //
    msg->ShowMessage("Lendo todas as SubCategorias do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_YELLOW);
    //

    //
    //query.prepare(vquery);
    //
    query.exec("SELECT * FROM subcategory ORDER BY subcat_code");

    while (query.next()) {
        //
        QSqlRecord record = query.record();
        prodsubcat = new ProductSubCategory();

        //PRODSUBCAT_ID
        prodsubcat->setSubCatId(record.value("subcat_id").toUInt()); 

        //PRODSUBCAT_CODE
        prodsubcat->setSubCatCode(record.value("subcat_code").toString()); 

        //SUBCAT_ACTIVE
        prodsubcat->setSubCatStatus(record.value("subcat_active").toBool());
        
        //PRODSUBCAT_DESCRIP
        prodsubcat->setSubCatDescrip(record.value("subcat_descrip").toString()); 

        //PRODSUBCAT_SHORTDESCRIP
        prodsubcat->setSubCatShortDescrip(record.value("subcat_shortdescrip").toString());

        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
        //
        vec_all_subcat.push_back(prodsubcat);
        //
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "SubCategorys not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/SubCategory/");
        //   
        dir->CreateLogFile("SUBCATEGORY-NOT-FOUND", erro_query);
    }

    return vec_all_subcat;
}


