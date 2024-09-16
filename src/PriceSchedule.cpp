/* 
 * File:   PriceSchedule.cpp
 * Author: batista
 * 
 * Created on 16 de Julho de 2013, 12:34
 */

#include "PriceSchedule.h"

PriceSchedule::PriceSchedule() {
    dir = new DirFile();
}

PriceSchedule::~PriceSchedule() {
}

/**
 * Add a new PriceSchedule to 
 * database.
 * @return 
 */
bool PriceSchedule::addNewPriceSchedule() {
    return true;
}

/**
 * Remove a existing PriceSchedule
 * from database. 
 * @return 
 */
bool PriceSchedule::removePriceSchedule() {
    return true;
}

/**
 * Update a existing PriceSchedule 
 * from database
 * @return 
 */
bool PriceSchedule::updatePriceSchedule() {
    return true;
}

/**
 * Get Object with a PriceSchedule
 * to priceschedule_id or name
 * @return 
 */
PriceSchedule * PriceSchedule::getPriceSchedule(PriceSchedule &) {
    pricsc = new PriceSchedule();
    //
    return pricsc;
}

/**
 * Get all PriceSchedule from database
 * @return 
 */
QVector<PriceSchedule*> PriceSchedule::getAllPriceSchedule() {
    QSqlQuery query;
    //
    QVector<PriceSchedule *> vector_pricesc;

    QString vquery = "SELECT * FROM price_schedule ORDER BY price_schedule_code ";
    //

    //
    msg->ShowMessage("Lendo todos os Grupos de Precos do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        pricsc = new PriceSchedule();

        //PRICESCHEDULE_ID
        pricsc->setPriceScheduleId(query.value(0).toUInt()); // 0=coluna

        //PRICESCHEDULE_CODE
        pricsc->setPriceScheduleCode(query.value(1).toString()); // 1=coluna

        //PRICESCHEDULE_DESCRIP
        pricsc->setPriceScheduleDescrip(query.value(2).toString()); // 2=coluna

        msg->ShowMessage("Add PriceSchedule: " + pricsc->getPriceScheduleDescrip(), COLOR_BLUE, COLOR_PINK);
        //
        vector_pricesc.push_back(pricsc);
        //
    }
    //
    if (!query.first()) {

        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "PriceSchedule not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage(erro_query, COLOR_BLUE, COLOR_RED);
        //

        //
        dir->setFolder_write("./Logs/PriceSchedules/");
        //   
        dir->CreateLogFile("PRICESCHEDULE-NOT-FOUND", erro_query);
    }

    //
    return vector_pricesc;
}


