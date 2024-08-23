/* 
 * File:   Terms.cpp
 * Author: batista
 * 
 * Created on 1 de Agosto de 2013, 09:33
 */

#include "Terms.h"

Terms::Terms() {
    dir = new DirFile();
    //
    dbconn = new DbConn();
}

Terms::~Terms() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int Terms::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('terms_terms_id_seq') AS item_id");
    // query.exec();
    //
    if (query.first()) {
        int fieldNo = query.record().indexOf("item_id");
        //
        item_id = query.value(fieldNo).toInt();
    } else {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in geting: NEXTVAL " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
    }
    //
    return item_id;
}

/**
 * Add a new Term to 
 * database.
 * INSERT INTO "public".terms (
 * terms_code, 
 * terms_descrip, 
 * terms_payment_expect, 
 * terms_duedays, 
 * terms_discdays, 
 * terms_discprcnt, 
 * terms_cutoffday, 
 * terms_ap, 
 * terms_ar, 
 * terms_types, 
 * terms_active, 
 * terms_installment_quantity, 
 * terms_installmentdays
 * )	
 * VALUES ('2-10-NET-30', '2-10-NET-30', 'D', 30, 10, 0.020000, 1, true, true, 'C', true, NULL, NULL);
 * @return 
 */
bool Terms::addNewTerm() {
    qDebug() << "ID de Inclusao: --->> " << getTermId();
    bool result = false;
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO terms ("
            "terms_id, "
            "terms_code, "
            "terms_descrip, "
            "terms_payment_expect, "
            "terms_duedays, "
            "terms_discdays, "
            "terms_discprcnt, "
            "terms_cutoffday, "
            "terms_ap, "
            "terms_ar, "
            "terms_types, "
            "terms_active, "
            "terms_installment_quantity, "
            "terms_installmentdays)  "
            "VALUES ("
            ":terms_id, "
            ":terms_code, "
            ":terms_descrip, "
            ":terms_payment_expect, "
            ":terms_duedays, "
            ":terms_discdays, "
            ":terms_discprcnt, "
            ":terms_cutoffday, "
            ":terms_ap, "
            ":terms_ar, "
            ":terms_types, "
            ":terms_active, "
            ":terms_installment_quantity, "
            ":terms_installmentdays"
            ");";
    //
    query.prepare(vquery);
    //        
    query.bindValue(":terms_id", getTermId());
    query.bindValue(":terms_code", getTermCode());
    query.bindValue(":terms_descrip", getTermDescrip().trimmed());
    query.bindValue(":terms_payment_expect", getTermPaymentExpect());
    query.bindValue(":terms_duedays", getTermDueDays());
    query.bindValue(":terms_discdays", getTermDiscountDays());
    query.bindValue(":terms_discprcnt", getTermDiscountPercent());
    query.bindValue(":terms_cutoffday", getTermCutOffDay());
    query.bindValue(":terms_ap", isTermAccountsPayable());
    query.bindValue(":terms_ar", isTermAccountReceivable());
    query.bindValue(":terms_types", getTermTypes());
    query.bindValue(":terms_active", isTermActive());
    query.bindValue(":terms_installment_quantity", getTermInstallmentQuantity());
    query.bindValue(":terms_installmentdays", getTermInstallmentDays());


    //query.addBindValue(getDateTime());
    //

    result = query.exec();

    if (result) {
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }

    //
    if (!query.isActive() || !result) {

        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Add Terms for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Terms/");
        //   
        dir->CreateLogFile("TERMS-ERRO-ADD-SQL", erro_query);
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
 * Remove a existing Term
 * from database. 
 * @return 
 */
bool Terms::removeTerm() {
    qDebug() << "Removendo ID....: " << getTermId();
    //
    QString vquery;
    QSqlQuery query;
    //
    //  QSqlDatabase::database().transaction();
    //
    vquery = "DELETE FROM terms WHERE terms_id = ?";
    query.prepare(vquery);
    //
    query.addBindValue(getTermId());
    //
    if (query.exec()) {
        msg->ShowMessage("Termo Removido com Sucesso!!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Remove Term for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Terms/");
        //   
        dir->CreateLogFile("TERMS-ERRO-RM-SQL", erro_query);
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
 * Update a existing Term 
 * from database
 * INSERT INTO "public".terms (
 *
 * terms_code, 
 * terms_descrip, 
 * terms_payment_expect, 
 * terms_duedays, 
 * terms_discdays, 
 * terms_discprcnt, 
 * terms_cutoffday, 
 * terms_ap, 
 * terms_ar, 
 * terms_types, 
 * terms_active, 
 * terms_installment_quantity, 
 * terms_installmentdays
 * 
 * )VALUES ('2-10-NET-30', '2-10-NET-30', 'D', 30, 10, 0.020000, 1, true, true, 'C', true, NULL, NULL);
 * @return 
 */
bool Terms::updateTerm() {
    qDebug() << getTermId();
    //
    bool result = false;
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");

    query.prepare("UPDATE terms SET "
            "terms_descrip=:terms_descrip,"
            "terms_payment_expect=:terms_payment_expect,"
            "terms_duedays=:terms_duedays,"
            "terms_discdays=:terms_discdays,"
            "terms_discprcnt=:terms_discprcnt,"
            "terms_cutoffday=:terms_cutoffday,"
            "terms_ap=:terms_ap,"
            "terms_ar=:terms_ar,"
            "terms_types=:terms_types,"
            "terms_active=:terms_active,"
            "terms_installment_quantity=:terms_installment_quantity,"
            "terms_installmentdays=:terms_installmentdays "
            "WHERE (terms_id=:terms_id);");
    //
    query.bindValue(":terms_descrip", getTermDescrip().trimmed());
    query.bindValue(":terms_payment_expect", getTermPaymentExpect());
    query.bindValue(":terms_duedays", getTermDueDays());
    query.bindValue(":terms_discdays", getTermDiscountDays());
    query.bindValue(":terms_discprcnt", getTermDiscountPercent());
    query.bindValue(":terms_cutoffday", getTermCutOffDay());
    query.bindValue(":terms_ap", isTermAccountsPayable());
    query.bindValue(":terms_ar", isTermAccountReceivable());
    query.bindValue(":terms_types", getTermTypes());
    query.bindValue(":terms_active", isTermActive());
    query.bindValue(":terms_installment_quantity", getTermInstallmentQuantity());
    query.bindValue(":terms_installmentdays", getTermInstallmentDays());
    query.bindValue(":terms_id", getTermId());
    //

    result = query.exec();

    if (result) {
        msg->ShowMessage("Alteração feita com Sucesso!!", COLOR_BLUE, COLOR_PINK);
    }

    //
    if (!query.isActive() || !result) {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Update Terms for query: " + vquery +
                "\nQuery Error: " + str_erro.arg(__FILE__).arg(__LINE__);
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Terms/");
        //   
        dir->CreateLogFile("TERMS-ERRO-UPDT-SQL", erro_query);
        //      
        query.exec("ROLLBACK;");

        return false;
    }

    query.exec("COMMIT;");
    // QSqlDatabase::database().commit();
    //    
    return true;
}

/**
 * Get Object with a Term
 * to terms_id or name
 * @return 
 */
Terms* Terms::getTerm(Terms &) {
    term = new Terms();
    //
    //Code here
    //
    return term;
}

/**
 * Get all Terms from database
 * @return 
 */
QVector<Terms*> Terms::getAllTermsForCBox() {
    QVector<Terms*> vector_terms;
    //
    QSqlQuery query("SELECT * FROM terms ORDER BY terms_code");

    int fieldNo = query.record().indexOf("terms_code");

    while (query.next()) {
        term = new Terms();
        //
        term->setTermCode(query.value(fieldNo).toString());
        //
       // qDebug() << "getAllSupplier() -->> Teste Terms  -- >> " << sup->getSuppCode();
        //
        vector_terms.push_back(term);
    }
    
    //
    return vector_terms;
}
