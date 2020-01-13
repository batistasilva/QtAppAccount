/* 
 * File:   Address.cpp
 * Author: batista
 * 
 * Created on 12 de Agosto de 2013, 16:51
 */

#include "Address.h"

Address::Address() {
    dir = new DirFile();
    //
    dbconn = new DbConn();
}

Address::~Address() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int Address::getNextIdFromMainTable() {
    int item_id = -1;
    //
    QSqlQuery query;
   
    query.exec("SELECT NEXTVAL('suppaddress_addr_id_seq') AS item_id");
    // query.exec();
    //
    if (query.first()) {
        item_id = query.value(0).toInt();
    } else {
        QString str_erro = query.lastQuery();//lasterro to lastquery
        //
        QString erro_query = "Error SQL in geting: NEXTVAL " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
    }
    //
    return item_id;
}

/**
 * Add a new Main Address to 
 * address Table from database.
 * @return 
 */
bool Address::addMainAddress() {
    qDebug() << "Address: --->> " << getAddrAddress();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO address ("
            "addr_street, "
            "addr_complement, "
            "addr_district, "
            "addr_city, "
            "addr_state, "
            "addr_postalcode, "
            "addr_country, "
            "addr_notes, "
            "addr_date_create) "
            "VALUES ("
            ":addr_street, "
            ":addr_complement, "
            ":addr_district, "
            ":addr_city, "
            ":addr_state, "
            ":addr_postalcode, "
            ":addr_country, "
            ":addr_notes, "
            ":addr_date_create"
            ");";
    //
    query.prepare(vquery);
    //        
    query.bindValue(":addr_street", getAddrAddress().trimmed());
    query.bindValue(":addr_complement", getAddrComp().trimmed());
    query.bindValue(":addr_district", getAddrDistrict().trimmed());
    query.bindValue(":addr_city", getAddrCity().trimmed());
    query.bindValue(":addr_state", getAddrState().trimmed());
    query.bindValue(":addr_postalcode", getAddrPostalCode().trimmed());
    query.bindValue(":addr_country", getAddrCountry().trimmed());
    query.bindValue(":addr_notes", getAddrNotes().trimmed());
    query.bindValue(":addr_date_create", getDateTime());
    //
    result = query.exec();

    if (result) {
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }

    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastQuery();
        //
        QString erro_query = "Error SQL in Add Main Address for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Address/");
        //   
        dir->CreateLogFile("ADDRESS-ERRO-ADD-SQL", erro_query);
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
 * Add a new Main Supplier Address to 
 * suppaddress Table from database.
 * @return 
 */
bool Address::addMainSupplierAddress() {
    //
    qDebug() << "Add Supplier Address: --->> " << getAddrAddress();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO suppaddress ("
            "addr_id, "
            "addr_supp_id, "
            "addr_street, "
            "addr_number, "
            "addr_complement, "
            "addr_district, "
            "addr_city, "
            "addr_state, "
            "addr_postalcode, "
            "addr_country, "
            "addr_notes, "
            "addr_date_create) "
            "VALUES ("
            ":addr_id, "
            ":addr_supp_id, "
            ":addr_street, "
            ":addr_number, "
            ":addr_complement, "
            ":addr_district, "
            ":addr_city, "
            ":addr_state, "
            ":addr_postalcode, "
            ":addr_country, "
            ":addr_notes, "
            ":addr_date_create"
            ");";
    //
    query.prepare(vquery);
    //     
    query.bindValue(":addr_id", getAddrId());
    query.bindValue(":addr_supp_id", getAddrSuppId());
    query.bindValue(":addr_street", getAddrAddress().trimmed());
    query.bindValue(":addr_number", getAddrNumber().trimmed());
    query.bindValue(":addr_complement", getAddrComp().trimmed());
    query.bindValue(":addr_district", getAddrDistrict().trimmed());
    query.bindValue(":addr_city", getAddrCity().trimmed());
    query.bindValue(":addr_state", getAddrState().trimmed());
    query.bindValue(":addr_postalcode", getAddrPostalCode().trimmed());
    query.bindValue(":addr_country", getAddrCountry().trimmed());
    query.bindValue(":addr_notes", getAddrNotes().trimmed());
    query.bindValue(":addr_date_create", getDateTime());
    //
    result = query.exec();
    //
    if (result) {
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastQuery();
        //
        QString erro_query = "Error SQL in Add Supplier Address for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Address/");
        //   
        dir->CreateLogFile("SUPPADDRESS-ERRO-ADD-SQL", erro_query);
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
 * Remove a existing Supplier Address
 * from database. 
 * @return 
 */
bool Address::removeSupplierAddress() {
    qDebug() << "Removing Address: --->> " << getAddrAddress();
    //
    QString vquery;
    QSqlQuery query;
    //
    //  QSqlDatabase::database().transaction();
    //
    vquery = "DELETE FROM suppaddress WHERE addr_supp_id = ?";
    query.prepare(vquery);
    //
    query.addBindValue(getAddrSuppId());
    //
    if (query.exec()) {
        msg->ShowMessage("Endereco Removido com Sucesso!!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastQuery();
        //
        QString erro_query = "Error SQL in Remove Supplier Address for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Address/");
        //   
        dir->CreateLogFile("ADDRESS-ERRO-RM-SQL", erro_query);
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
 * Update a existing Supplier Address
 * from database
 * @return 
 */
bool Address::updateSupplierAddress() {
    qDebug() << "Update Address: --->> " << getAddrAddress();
    //
    bool result = false;
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");

    query.prepare("UPDATE suppaddress SET "
            "addr_street=:addr_street, "
            "addr_number=:addr_number, "
            "addr_complement=:addr_complement, "
            "addr_district=:addr_district, "
            "addr_city=:addr_city, "
            "addr_state=:addr_state, "
            "addr_postalcode=:addr_postalcode, "
            "addr_country=:addr_country, "
            "addr_notes=:addr_notes, "
            "addr_date_change=:addr_date_change"
            " WHERE (addr_id=:addr_id) AND (addr_supp_id=:addr_supp_id);");
    //
    //
    query.prepare(vquery);
    //        
    query.bindValue(":addr_id", getAddrId());
    query.bindValue(":addr_supp_id", getAddrSuppId());
    query.bindValue(":addr_street", getAddrAddress().trimmed());
    query.bindValue(":addr_number", getAddrNumber().trimmed());
    query.bindValue(":addr_complement", getAddrComp().trimmed());
    query.bindValue(":addr_district", getAddrDistrict().trimmed());
    query.bindValue(":addr_city", getAddrCity().trimmed());
    query.bindValue(":addr_state", getAddrState().trimmed());
    query.bindValue(":addr_postalcode", getAddrPostalCode().trimmed());
    query.bindValue(":addr_country", getAddrCountry().trimmed());
    query.bindValue(":addr_notes", getAddrNotes().trimmed());
    query.bindValue(":addr_date_change", getDateTime());
    //
    result = query.exec();
    //
    if (result) {
        msg->ShowMessage("Alteração feita com sucesso!!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastQuery();
        //
        QString erro_query = "Error SQL in Updt Supplier Address for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Address/");
        //   
        dir->CreateLogFile("ADDRESS-ERRO-UPDT-SQL", erro_query);
        //        
        query.exec("ROLLBACK;");
        //
        return false;
    }
    //
    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();    
    return true;
}

/**
 * Get Object with a Address
 * to class called 
 * @return addrmain 
 */
Address* Address::getAddress(Address &) {
    addrmain = new Address();
    //
    //
    return addrmain;
}

/**
 * Get All Object with Address
 * for populate combo
 * @return 
 */
QVector<Address*> Address::getAllAddress() {
    QVector<Address*> vec_addr;
    //
    //
    return vec_addr;
}
