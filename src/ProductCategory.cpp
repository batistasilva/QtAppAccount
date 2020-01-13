/* 
 * File:   ProductCategory.cpp
 * Author: batista
 * 
 * Created on 3 de Julho de 2013, 16:23
 */

#include <QtSql/qtsqlglobal.h>
#include <qt5/QtSql/qsqlrecord.h>

#include "ProductCategory.h"

ProductCategory::ProductCategory() {
    dir = new DirFile();
}

ProductCategory::~ProductCategory() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int ProductCategory::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('cat_cat_id_seq') AS item_id");
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
 * Add a new category to 
 * database.
 * @return true or false
 */
bool ProductCategory::addNewCategory() {
    //
    qDebug() << "Add Category: --->> " << getCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO category ("
            //
            "cat_id, "
            "cat_code, "
            "cat_active, "
            "cat_descrip, "
            "cat_shortdescrip, "
            "cat_date_create"
            //
            ") VALUES ("
            //
            ":cat_id, "
            ":cat_code, "
            ":cat_active, "
            ":cat_descrip, "
            ":cat_shortdescrip, "
            ":cat_date_create"
            //
            ");";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":cat_id", getCatId());
    query.bindValue(":cat_code", getCatCode().trimmed());
    query.bindValue(":cat_active", isCatStatus());
    query.bindValue(":cat_descrip", getCatDescrip().trimmed());
    query.bindValue(":cat_shortdescrip", getCatShortDescrip().trimmed());
    query.bindValue(":cat_date_create", getDateTime());
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
        QString erro_query = "Error SQL in Add Category for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Category/");
        //   
        dir->CreateLogFile("CATEGORY-ERRO-ADD-SQL", erro_query);
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
 * Update a existing category 
 * from database
 * @return 
 */
bool ProductCategory::updateCategory() {
    //
    qDebug() << "Updt Category: --->> " << getCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "UPDATE category SET "
            //
            "cat_code=:cat_code, "
            "cat_active=:cat_active, "
            "cat_descrip=:cat_descrip, "
            "cat_shortdescrip=:cat_shortdescrip, "
            "cat_date_change=:cat_date_change"
            //
            " WHERE (cat_id=:cat_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":cat_id", getCatId());
    query.bindValue(":cat_code", getCatCode().trimmed());
    query.bindValue(":cat_active", isCatStatus());
    query.bindValue(":cat_descrip", getCatDescrip().trimmed());
    query.bindValue(":cat_shortdescrip", getCatShortDescrip().trimmed());
    query.bindValue(":cat_date_change", getDateTime());
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
        QString erro_query = "Error SQL in Updt Category for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Category/");
        //   
        dir->CreateLogFile("CATEGORY-ERRO-UPDT-SQL", erro_query);
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
 * Remove a existing category
 * from database. 
 * @return 
 */
bool ProductCategory::removeCategory() {
       //
    qDebug() << "Remove Category: --->> " << getCatDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "DELETE FROM category WHERE (cat_id=:cat_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":cat_id", getCatId());
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
        QString erro_query = "Error SQL in Remove Category for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Category/");
        //   
        dir->CreateLogFile("CATEGORY-ERRO-RM-SQL", erro_query);
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
 * Get Object with a Category
 * to Category_id or name
 * @return 
 */
ProductCategory * ProductCategory::getCategory(ProductCategory&) {
    prodcat = new ProductCategory();
    //
    return prodcat;
}

/**
 * Get all Category from database
 * @return 
 */
QVector<ProductCategory *> ProductCategory::getAllCategory() {
    QSqlQuery query;
    //
    QVector<ProductCategory *> vec_all_cat;

    QString vquery = "SELECT * FROM category ORDER BY cat_code";
    //

    //
    msg->ShowMessage("Lendo todas as Categorias do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_YELLOW);
    //

    //
    //query.prepare(vquery);
    //
    query.exec("SELECT * FROM category ORDER BY cat_code");

    while (query.next()) {
        QSqlRecord record = query.record();
        //
        prodcat = new ProductCategory();

        //PRODCAT_ID
        prodcat->setCatId(record.value("cat_id").toUInt());

        //PRODCAT_CODE
        prodcat->setCatCode(record.value("cat_code").toString());

        //PRODCAT_STATUS
        prodcat->setCatStatus(record.value("cat_active").toBool());

        //PRODCAT_DESCRIP
        prodcat->setCatDescrip(record.value("cat_descrip").toString());

        //PRODCAT_SHORTDESCRIP
        prodcat->setCatShortDescrip(record.value("cat_shortdescrip").toString()); // 3=coluna
        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
        //
        vec_all_cat.push_back(prodcat);
        //
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Categorys not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/Category/");
        //   
        dir->CreateLogFile("CATEGORY-NOT-FOUND", erro_query);
    }

    //
    return vec_all_cat;

}
