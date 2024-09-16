/* 
 * File:   Commission.cpp
 * Author: batista
 * 
 * Created on 16 de Julho de 2013, 08:54
 */

#include "Commission.h"

Commission::Commission() {
    dir = new DirFile();
}

Commission::~Commission() {
}

/**
 * Add a new Commission to 
 * database.
 * @return 
 */
bool Commission::addNewCommission() {
    return true;
}

/**
 * Remove a existing Commission
 * from database. 
 * @return 
 */
bool Commission::removeCommission() {
    return true;
}

/**
 * Update a existing Commission 
 * from database
 * @return 
 */
bool Commission::updateCommission() {
    return true;
}

/**
 * Get Object with a Commission
 * to tax_id or name
 * @return 
 */
Commission * Commission::getCommission(Commission &) {
    commis = new Commission();
    //
    return commis;
}

/**
 * Get all Commissions from database
 * @return 
 */
QVector<Commission*> Commission::getAllCommissions() {
    QSqlQuery query;
    //
    QVector<Commission *> vector_commis;

    QString vquery = "SELECT * FROM commission ORDER BY commis_code";
    //

    //
    msg->ShowMessage("Lendo todos os Grupos de Comissão do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        commis = new Commission();

        //COMMIS_ID
        commis->setCommisId(query.value(0).toUInt()); // 0=coluna

        //COMMIS_CODE
        commis->setCommisCode(query.value(1).toString()); // 1=coluna

        //COMMIS_DESCRIP
        commis->setCommisDescrip(query.value(2).toString()); // 2=coluna

        msg->ShowMessage("Add Commissions: " + commis->getCommisDescrip(), COLOR_BLUE, COLOR_PINK);
        //
        vector_commis.push_back(commis);
        //
    }
    //
    if (!query.first()) {

        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Commissions not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage(erro_query, COLOR_BLUE, COLOR_RED);
        //

        //
        dir->setFolder_write("./Logs/Commissions/");
        //   
        dir->CreateLogFile("COMMISSION-NOT-FOUND", erro_query);
    }

    //
    return vector_commis;
}


