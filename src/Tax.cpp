/* 
 * File:   Tax.cpp
 * Author: batista
 * 
 * Created on 15 de Julho de 2013, 14:23
 */

#include "Tax.h"

Tax::Tax() {
}

Tax::~Tax() {
}

/**
 * Add a new Tax to 
 * database.
 * @return 
 */
bool Tax::addNewTax() {
    return true;
}

/**
 * Remove a existing Tax
 * from database. 
 * @return 
 */
bool Tax::removeTax() {
    return true;
}

/**
 * Update a existing Tax 
 * from database
 * @return 
 */
bool Tax::updateTax() {
    return true;
}

/**
 * Get Object with a Tax
 * to tax_id or name
 * @return 
 */
Tax * Tax::getTax(Tax &) {
    tax = new Tax();
    //
    return tax;
}

/**
 * Get all taxs from database
 * @return 
 */
QVector<Tax*> Tax::getAllTaxs() {
    QSqlQuery query;
    //
    QVector<Tax *> vector_taxs;

    QString vquery = "SELECT * FROM tax ORDER BY tax_code";
    //

    //
    msg->ShowMessage("Lendo todos os Impostos do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        tax = new Tax();

        //TAX_ID
        tax->setTaxId(query.value(0).toUInt()); // 0=coluna

        //TAX_CODE
        tax->setTaxCode(query.value(1).toString()); // 1=coluna

        //TAX_DESCRIP
        tax->setTaxDescrip(query.value(2).toString()); // 2=coluna

        msg->ShowMessage("Add Taxs: " + tax->getTaxDescrip(), COLOR_BLUE, COLOR_PINK);
        //
        vector_taxs.push_back(tax);
        //
    }
    //
    if (!query.first()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Taxs not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        dir->setFolder_write("./Logs/Taxs/");
        //   
        dir->CreateLogFile("TAXS-NOT-FOUND", erro_query);
    }

    //
    return vector_taxs;
}

