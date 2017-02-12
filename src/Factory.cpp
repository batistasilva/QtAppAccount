/* 
 * File:   ProductFactory.cpp
 * Author: batista
 * 
 * Created on 9 de Julho de 2013, 10:31
 */

#include "Factory.h"

Factory::Factory() {
    dir = new DirFile();
    //
    dbconn = new DbConn();
    //
}

Factory::~Factory() {
}

/**
 * Get Next id from database table 
 * to add.
 * @param 
 * @return 
 */
int Factory::getNextIdFromTable() {
    QSqlQuery query;
    int item_id = -1;

    query.exec("SELECT NEXTVAL('factory_factory_id_seq') AS item_id");
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
 * Add a new Factory to 
 * database.
 * @return 
 */
bool Factory::addNewFactory() {
    qDebug() << getFactoryId();
    //
    QString vquery;
    QSqlQuery query;
    //
    //QSqlDatabase::database().transaction();
    query.exec("BEGIN;");
    //
    vquery = "INSERT INTO factory(factory_id, factory_code, factory_descrip, factory_shortdescrip, factory_active, date_create) VALUES(?,?,?,?,?,?)";
    //
    query.prepare(vquery);
    //
    query.addBindValue(getFactoryId());
    query.addBindValue(getFactoryCode());
    query.addBindValue(getFactoryDescrip());
    query.addBindValue(getFactoryShortDescrip());
    query.addBindValue(isFactoryActive());
    query.addBindValue(getDateTime());
    //

    if (!query.exec() || query.lastError().type() != QSqlError::NoError) {
        query.exec("ROLLBACK;");
        msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //  if (query.exec()) {
    //      msg->ShowMessage("Inclusão feita com sucesso!", COLOR_BLUE, COLOR_PINK);
    //  }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Add Factory for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Factory/");
        //   
        dir->CreateLogFile("FACTORY-ERROADD-SQL", erro_query);
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
 * Remove a existing Factory
 * from database. 
 * @return 
 */
bool Factory::removeFactory() {
    qDebug() << "Removendo....: " << getFactoryId();
    //
    QString vquery;
    QSqlQuery query;
    //
    //  QSqlDatabase::database().transaction();
    //
    vquery = "DELETE FROM factory WHERE factory_id = ?";
    query.prepare(vquery);
    //
    query.addBindValue(getFactoryId());
    //
    if (query.exec()) {
        msg->ShowMessage("Fabricante removido com sucesso!", COLOR_BLUE, COLOR_PINK);
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        QString erro_query = "Error SQL in Remove Factory for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Factory/");
        //   
        dir->CreateLogFile("FACTORY-ERRORM-SQL", erro_query);
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
 * Update a existing Factory 
 * from database
 * @return 
 */
bool Factory::updateFactory() {
    //Abre a conexao com o banco;
    QString vquery;
    QSqlQuery query;
    query.exec("BEGIN;");
    //
    msg->ShowMessage("Conexao updateFactory(), feita com sucesso", COLOR_WHITE, COLOR_GREEN);

    // QSqlDatabase::database().transaction();
    //
    vquery = "UPDATE factory "
            "SET factory_code=:factory_code,"
            "factory_descrip=:factory_descrip,"            
            "factory_shortdescrip=:factory_shortdescrip,"
            "factory_active=:factory_active,"
            "date_change=:date_change "
            "WHERE (factory_id=:factory_id);";
    //
    query.prepare(vquery);
    //
    qDebug() << getFactoryId() <<'\n' << getFactoryDescrip() << '\n' << getFactoryShortDescrip() <<'\n';
    //
    query.bindValue(":factory_code", getFactoryCode());
    query.bindValue(":factory_descrip",     getFactoryDescrip());
    query.bindValue(":factory_shortdescrip",getFactoryShortDescrip());
    query.bindValue(":factory_active", isFactoryActive());
    query.bindValue(":date_change",             getDateTime());
    query.bindValue(":factory_id",          getFactoryId());

    //query.exec();
    //
    //if (query.lastError().type() != QSqlError::NoError) {
    //    query.exec("ROLLBACK;");
   // }

    //
    if (query.exec()) {
        msg->ShowMessage("Atualizacao feita com Sucesso!", COLOR_BLUE, COLOR_PINK);
    } else {
        qDebug() << query.lastError().databaseText() << __FILE__ << __LINE__ << endl;
        query.exec("ROLLBACK;");
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();

        QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Error SQL in Update Factory for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Factory/");
        //   
        dir->CreateLogFile("FACTORY-ERROUPDT-SQL", erro_query);
        //
        return false;
    }
    //QSqlDatabase::database().commit();
    //
    return true;
}

/**
 * Get all Factory from database
 * @return 
 */
QVector<Factory*> Factory::getAllFactory() {
    QSqlQuery query;
    //
    QVector<Factory *> vector_factorys;

    QString vquery = "SELECT * FROM factory ORDER BY factory_code";
    //

    //
  //  msg->ShowMessage("Lendo todos os Fabricantes do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        factory = new Factory();

        //PRODCAT_ID
        factory->setFactoryId(query.value(getColNumberToStr(query, "factory_id")).toUInt()); // 0=coluna

        //PRODCAT_CODE
        factory->setFactoryCode(query.value(getColNumberToStr(query, "factory_code")).toString()); // 1=coluna

        //PRODCAT_DESCRIP
        factory->setFactoryDescrip(query.value(getColNumberToStr(query, "factory_descrip")).toString()); // 2=coluna

        //PRODCAT_SHORTDESCRIP
        factory->setFactoryShortDescrip(query.value(getColNumberToStr(query, "factory_shortdescrip")).toString()); // 3=coluna

        //            msg->ShowMessage("Add Categorias: " + prodcat->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
        //
        vector_factorys.push_back(factory);
        //
    }
    //
    if (!query.isActive()) {
        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Factorys not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage("ERRO SQL: " + erro_query, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("./Logs/Factory/");
        //   
        dir->CreateLogFile("FACTORY-NOT-FOUND", erro_query);
    }

    //
    return vector_factorys;
}

//
