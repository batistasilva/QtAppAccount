/* 
 * File:   ProductLine.cpp
 * Author: batista
 * 
 * Created on 9 de Julho de 2013, 10:45
 */

#include <qt5/QtSql/qsqlrecord.h>

#include "ProductLine.h"

ProductLine::ProductLine() {
    dir = new DirFile();
}

ProductLine::~ProductLine() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int ProductLine::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('prodline_prodline_id_seq') AS item_id");
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
 * Add a new Line to 
 * database.
 * @return 
 */
bool ProductLine::addNewLine() {
    //
    qDebug() << "Add Product Line: --->> " << getProdLineDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO prodline ("
            //
            "prodline_id, "
            "prodline_code, "
            "prodline_descrip, "
            "prodline_shortdescrip, "
            "prodline_active, "
            "prodline_date_create"
            //
            ") VALUES ("
            //
            ":prodline_id, "
            ":prodiline_code, "
            ":prodline_descrip, "
            ":prodline_shortdescrip, "
            ":prodline_active, "
            ":prodline_date_create"
            //
            ");";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":prodline_id", getProdLineId());
    query.bindValue(":prodline_code", getProdLineCode().trimmed());
    query.bindValue(":prodline_active", isProdLineStatus());
    query.bindValue(":prodline_descrip", getProdLineDescrip().trimmed());
    query.bindValue(":prodline_shortdescrip", getProdLineShortDescrip().trimmed());
    query.bindValue(":prodline_date_create", getDateTime());
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
        QString erro_query = "Error SQL in Add Product Line for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductLines/");
        //   
        dir->CreateLogFile("ERRO-ADD-PRODUCTLINES", erro_query); //       
        
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
 * Remove a existing Line
 * from database. 
 * @return 
 */
bool ProductLine::removeLine() {
        //
    qDebug() << "Remove Product Lines: --->> " << getProdLineDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "DELETE FROM prodline WHERE (prodline_id=:prodline_id);";

    //
    query.prepare(vquery);
    //     
    query.bindValue(":prodline_id", getProdLineId());
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
        QString erro_query = "Error SQL in Remove Product Line for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductLines/");
        //   
        dir->CreateLogFile("ERRO-RM-PRODUCTLINES", erro_query); //       
        
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
 * Update a existing Line 
 * from database
 * @return 
 */
bool ProductLine::updateLine() {
       //
    qDebug() << "Updt Product Line: --->> " << getProdLineDescrip();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "UPDATE prodline SET "
            //
            "prodline_code=:prodline_code, "
            "prodline_descrip=:prodline_descrip, "
            "prodline_shortdescrip=:prodline_shortdescrip, "
            "prodline_active=:prodline_active, "
            "prodline_date_change=:prodline_date_change"
            //
            " WHERE (prodline_id=:prodline_id);";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":prodline_id", getProdLineId());
    query.bindValue(":prodline_code", getProdLineCode().trimmed()); 
    query.bindValue(":prodline_descrip", getProdLineDescrip().trimmed());
    query.bindValue(":prodline_shortdescrip", getProdLineShortDescrip().trimmed());
    query.bindValue(":prodline_active", isProdLineStatus());
    query.bindValue(":prodline_date_change", getDateTime());
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
        QString erro_query = "Error SQL in UPDT Product Line for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/ProductLines/");
        //   
        dir->CreateLogFile("ERRO-UPDT-PRODUCTLINES", erro_query); //       
        
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
 * Get Object with a Line
 * to productline_id or name
 * @return 
 */
ProductLine* ProductLine::getLine(ProductLine &) {
    prodline = new ProductLine();
    //
    return prodline;
}

/**
 * Get all Lines from database
 * @return 
 */
QVector<ProductLine*> ProductLine::getAllLines() {
    QSqlQuery query;
    //
    QVector<ProductLine *> vector_lines;

    QString vquery = "SELECT * FROM prodline ORDER BY prodline_code";
    //

    //
    msg->ShowMessage("Lendo todas as Linhas de Produto do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_YELLOW);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        QSqlRecord record = query.record();
        prodline = new ProductLine();

        //PRODLINE_ID
        prodline->setProdLineId(record.value("prodline_id").toUInt());

        //PRODLINE_CODE
        prodline->setProdLineCode(record.value("prodline_code").toString());

        //PRODLINE_DESCRIP
        prodline->setProdLineDescrip(record.value("prodline_descrip").toString());

        //PRODLINE_SHORTDESCRIP
        prodline->setProdLineShortDescrip(record.value("prodline_shortdescrip").toString());

        //PRODLINE_ACTIVE
        prodline->setProdLineStatus(record.value("prodline_active").toBool());

        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
        //
        vector_lines.push_back(prodline);
        //
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Lines not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/ProductLines/");
        //   
        dir->CreateLogFile("ERRO-PRODUCTLINES-NOT-FOUND", erro_query);
    }

    //
    return vector_lines;

}


