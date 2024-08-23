/* 
 * File:   BusinessActivity.cpp
 * Author: batista
 * 
 * Created on 9 de Agosto de 2013, 11:49
 */

#include "BusinessActivity.h"

BusinessActivity::BusinessActivity() {
    dir = new DirFile();
    //
    dbconn = new DbConn();
}

BusinessActivity::~BusinessActivity() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int BusinessActivity::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('businessact_businessact_id_seq') AS item_id");
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
 * Get a SqlQueryModel for Query Entry
 * @param 
 * @return 
 */
//QSqlQueryModel * getQueryModel(QString query);

/**
 * Add a new BusinessActivity to 
 * database.
 * @return 
 */
bool BusinessActivity::addNewBusinessActivity() {
    qDebug() << "ID de Inclusao: --->> " << getBusinessActivityId();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO business_activity ("
            "businessact_id, "
            "businessact_code, "
            "businessact_descrip, "
            "businessact_shortdescrip, "
            "businessact_active, "
            "date_create) "

            "VALUES ("
            ":businessact_id, "
            ":businessact_code, "
            ":businessact_descrip, "
            ":businessact_shortdescrip, "
            ":businessact_active, "
            ":date_create"
            ");";
    //
    query.prepare(vquery);
    //        
    query.bindValue(":businessact_id", getBusinessActivityId());
    query.bindValue(":businessact_code", getBusinessActivityCode().trimmed());
    query.bindValue(":businessact_descrip", getBusinessActivityDescrip().trimmed());
    query.bindValue(":businessact_shortdescrip", getBusinessActivityShortDescrip().trimmed());
    query.bindValue(":businessact_active", isBusinessActive());
    query.bindValue(":date_create", getDateTime());

    result = query.exec();

    if (result) {
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }

    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Add Business Activity for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/BusinessAct/");
        //   
        dir->CreateLogFile("BUSINESSACT-ERRO-ADD-SQL", erro_query);
        //        
        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //    
    //
    return true;
}

/**
 * Remove a existing BusinessActivity
 * from database. 
 * @return 
 */
bool BusinessActivity::removeBusinessActivity() {
    qDebug() << "Removendo ID....: " << getBusinessActivityId();
    //
    QString vquery;
    QSqlQuery query;
    //
    //  QSqlDatabase::database().transaction();
    //
    vquery = "DELETE FROM business_activity WHERE businessact_id = ?";
    query.prepare(vquery);
    //
    query.addBindValue(getBusinessActivityId());
    //
    if (query.exec()) {
        msg->ShowMessage("Ramo de Atividade Removido com Sucesso!!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Remove Business for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/BusinessAct/");
        //   
        dir->CreateLogFile("BUSINESSACT-ERRO-RM-SQL", erro_query);
        //
        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    //QSqlDatabase::database().commit();
    //    
    return true;
}

/**
 * Update a existing BusinessActivity 
 * from database
 * @return 
 */
bool BusinessActivity::updateBusinessActivity() {
    qDebug() << getBusinessActivityId();
    //
    bool result = false;
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");

    query.prepare("UPDATE business_activity SET "
            "businessact_descrip=:businessact_descrip,"
            "businessact_shortdescrip=:businessact_shortdescrip,"
            "businessact_active=:businessact_active,"
            "date_change=:date_change "
            "WHERE (businessact_id=:businessact_id);");
    //
    //
    query.prepare(vquery);
    //        
    query.bindValue(":businessact_id", getBusinessActivityId());
    query.bindValue(":businessact_descrip", getBusinessActivityDescrip().trimmed());
    query.bindValue(":businessact_shortdescrip", getBusinessActivityShortDescrip().trimmed());
    query.bindValue(":businessact_active", isBusinessActive());
    query.bindValue(":date_change", getDateTime());

    result = query.exec();

    if (result) {
        msg->ShowMessage("Alteração feita com sucesso!!", COLOR_BLUE, COLOR_PINK);
    }

    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Updt Business Activity for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/BusinessAct/");
        //   
        dir->CreateLogFile("BUSINESSACT-ERRO-UPDT-SQL", erro_query);
        //        
        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //    
    //
    return true;
}

/**
 * Get Object with a BusinessActivity
 * to BusinessActivity_id or name
 * @return 
 */
// BusinessActivity* getBusinessActivity(BusinessActivity &);

/**
 * Get all BusinessActivity from database
 * @return 
 */
QVector<BusinessActivity*> BusinessActivity::getAllBusinessActivity() {
    QVector<BusinessActivity*> vector_busact;
    //
    QSqlQuery query("SELECT * FROM business_activity ORDER BY businessact_code");

    int fieldNo = query.record().indexOf("businessact_code");

    while (query.next()) {
        businesact = new BusinessActivity();
        //
        businesact->setBusinessActivityCode(query.value(fieldNo).toString());
        //
        // qDebug() << "getAllSupplier() -->> Teste Terms  -- >> " << sup->getSuppCode();
        //
        vector_busact.push_back(businesact);
    }

    //
    return vector_busact;
}
