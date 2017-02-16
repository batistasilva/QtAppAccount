/* 
 * File:   DbConn.cpp
 * Author: batista
 * 
 * Created on 20 de Fevereiro de 2013, 08:38
 */


#include <qt5/QtSql/qsqlerror.h>

#include "DbConn.h"

/**
 * Metodo construtor da aplicação
 */
DbConn::DbConn() {
    //
    tmut = new TimeUtil();
    status_readconf = false;


    msg->ShowMessage("Mensagem: Construtor Principal DbConn()!!", COLOR_BLUE, COLOR_PINK);
    //
    //Abre banco Sqlite na memoria
    //openConnInSqLite();
}

/**
 * Metodo destrutor 
 * da aplicação
 */
DbConn::~DbConn() {
    //Fecha PostgreSql
    closeConnPGree();
    //
}

/**
 * Metodo responsavel por abrir uma conexao com o banco de dados
 * 
 * @return true ou false
 * -------------------------------------------------------------
 *          Driver     |    Database
 * -------------------------------------------------------------
 *       QDB2          |  IBM DB2 version 7.1and later
 *       QIBASE        |  Borland InterBase
 *       QMYSQL        |  MySQL
 *       QOCI          |  Oracle (Oracle Call Interface)
 *       QODBC         |  ODBC (includes Microsoft SQL Server)
 *       QPSQL         |  PostgreSQL 7.3 and later
 *       QSQLITE       |  SQLite version 3
 *       QSQLITE2      |  SQLite version 2
 *       QTDS          |  Sybase Adaptive Server
 * -------------------------------------------------------------
 */
bool DbConn::openConnInPGree() {
    QString erro_log;

    status_readconf = readFile("Xml/ConfigConn.xml");
    //
    if (status_readconf) {

        //
        DbPGree = QSqlDatabase::addDatabase("QPSQL");
        //
        DbPGree.setHostName(getHostname());
        DbPGree.setDatabaseName(getDatabase());
        DbPGree.setPort(getPort().toInt());
        DbPGree.setUserName(getUsername());
        DbPGree.setPassword(getPassword());
        //
        /**
         * Se foi possivel abrir o arquivo
         * de configuracao, entra para abrir
         * o banco de dados.
         * @return 
         */
        if (!DbPGree.isValid()) {
            QString sqlerro = DbPGree.lastError().text();
            //
            QMessageBox::critical(0, QString::fromUtf8("Erro: Dados para conexão inválidos!"), sqlerro);
            return false;
        }

        if (!DbPGree.open()) {
            QString sqlerro = DbPGree.lastError().text();
            //
            QMessageBox::critical(0, QString::fromUtf8("Erro: Conectando para o banco de dados!"), sqlerro);
            //
            //  QMessageBox::critical(0, QObject::tr("Erro: Conectando em Banco de Dados!"), sqlerro);
            //
            erro_log = "OpenConn(): Nao foi possivel abri PostgreSql -> " + sqlerro;
            //
            msg->ShowMessage(erro_log, COLOR_BLUE, COLOR_RED);
            //
            dir->setFolder_write("Logs/LogDB/");
            //
            dir->CreateLogFile("LOGPGSQL", erro_log);
            //        
            return false;
        }

        msg->ShowMessage("Conexao com PostgreSql feita com sucesso!! ", COLOR_BLUE, COLOR_PINK);
    } else {
        msg->ShowMessage("Nao foi Possivel fazer a Leitura do Arquivo de Configuração!! ", COLOR_BLUE, COLOR_RED);
        //
        return false;
    }
    //
    return true;
}


/**
 * Metodo responsavel por 
 * verficar se a conexao 
 * esta disponivel, ativa.
 * @return 
 */
bool DbConn::isOpenConnPGree() {
    QString erro_log;
    //
    
    if (!DbPGree.isOpen()) {
        QString sqlerro = DbPGree.lastError().text();
        //
        erro_log = "OpenConn(): Nao foi possivel abri PostgreSql -> " + sqlerro;
        //
        msg->ShowMessage(erro_log, COLOR_BLUE, COLOR_RED);
        //
        dir->setFolder_write("Logs/LogDB/");
        //
        dir->CreateLogFile("LOGPGSQL", erro_log);
        //
        return false;
    }
    //
    return true;
}


void DbConn::closeConnPGree(){
    /*Verifica se a conexao está aberta e a encerra*/
    if (DbPGree.isOpen()) {
        msg->ShowMessage("CloseConn() PGree, Conexao fechada com sucesso!!!", COLOR_BLUE, COLOR_RED);
        DbPGree.close();
    }    
}

/**
 * Metodo responsavel por pegar todos 
 * os cartões
 * @return 
 */
/*
QVector<Card*> DbConn::getAllCards() {
    //
    QVector<Card*> vec_all_cards;
    //
    msg->ShowMessage("Lendo todos os Cartoes Cadastrados do Banco PostgreSql!!", COLOR_BLUE, COLOR_CIANO);
    //QString database, userdb, passwddb;
    QString vquery = "SELECT * FROM attendants";

    if (openConnInPGree()) {
        //
        query->prepare(vquery);
        //
        query->exec();
        //   
        while (query->next()) {
            //
            evcard = new Card();
            //ID
            evcard->SetAttendant_Id(query->value(0).toUInt());
            //CARD_CODE
            evcard->SetHexa_Card(query->value(1).toString());
            //
            vec_all_cards.push_back(evcard);
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //
            QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
            //
            QString erro_query = "Cartões não encontrados para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //                
            dir->CreateLogFile("CARDS-NOT-FOUND", erro_query);
        }
        //
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return vec_all_cards;
}
 */

/*
QVector<Event*> DbConn::getAllEvents() {
    //
    QVector<Event*> vec_all_events;
    //
    msg->ShowMessage("Lendo todos as Eventos da Rauland do Banco PostgreSql!!", COLOR_BLUE, COLOR_CIANO);
    //
    QString vquery = "SELECT * FROM table_events WHERE event_name IS NOT NULL ORDER BY event_code";
    //

    //Abre a conexao com o banco;
    if (openConnInPGree()) {

        //
        query->prepare(vquery);
        //
        query->exec();
        //   
        while (query->next()) {
            //
            evrld = new Event();

            //ID
            evrld->SetEventId(query->value(0).toUInt()); //PQgetvalue(rs, i, 0), i=linha, 0=coluna

            //EVENT_NAME
            evrld->SetEventMessage(query->value(3).toString());

            //IS_CANCEL
            QString viscancel = query->value(4).toString();
            //
            if (viscancel == "t") {
                evrld->SetEventCancel(true);
            } else {
                evrld->SetEventCancel(false);
            }
            //
            vec_all_events.push_back(evrld);
            //
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //
            QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
            //
            QString erro_query = "Eventos não encontrados para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //   
            dir->CreateLogFile("EVENTS-NOT-FOUND", erro_query);
        }
        //
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return vec_all_events;
}
 */
/**
 * Metodo responsavel por pegar todas 
 * as alas 
 * @return vector<Wards>
 */
/*
QVector<Ward*> DbConn::getAllWards() {
    QVector<Ward*> vec_all_wards;

    msg->ShowMessage("Lendo todas as Alas do Banco PostgreSql!!", COLOR_BLUE, COLOR_CIANO);

    QString vquery = "SELECT * FROM wards WHERE short_name IS NOT NULL";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        query->prepare(vquery);
        //
        query->exec();
        //   
        while (query->next()) {
            //
            ward = new Ward();
            //ID
            ward->SetWardId(query->value(0).toString()); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
            //PORTA SERIAL
            ward->SetWardPds(query->value(1).toString());
            //CODIGO DA ALA
            //char *vward_code = PQgetvalue(rs, i, 2);
            //NOME CURTO DA ALA
            ward->SetWardSigla(query->value(3).toString());
            //NOME LONGO DA ALA
            //char *vward_name = PQgetvalue(rs, i, 4);
            //
            vec_all_wards.push_back(ward);
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //
            QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
            //            
            QString erro_query = "Alas não encontradas para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //
            dir->CreateLogFile("WARDS-NOT-FOUND", erro_query);
        }

    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return vec_all_wards;
}
 */

/**
 * Metodo responsavel por pegar
 * todos os quartos
 * @return vector<Rooms>
 */
/*
QVector<Room*> DbConn::getAllRooms() {
    QVector<Room*> vec_all_rooms;
    //
    msg->ShowMessage("Lendo todos os Quartos do Banco PostgreSql!!", COLOR_BLUE, COLOR_CIANO);
    //
    QString vquery = "SELECT * FROM rooms WHERE room_name IS NOT NULL ORDER BY ward_id";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        query->prepare(vquery);
        //
        query->exec();
        //   
        while (query->next()) {
            //
            room = new Room();
            //ID
            room->SetRoomId(query->value(0).toString()); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
            //WARD_ID
            room->SetRoomWardId(query->value(1).toString());
            //ROOM_CODE
            room->SetRoomCode(query->value(2).toString());
            //ROOM_NAME
            room->SetRoomName(query->value(3).toString());
            //
            vec_all_rooms.push_back(room);
            //
            msg->ShowMessage("Quantidade lida: " + room->GetRoomName(), COLOR_BLUE, COLOR_CIANO);
            //
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //
            QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
            //  
            QString erro_query = "Quartos não encontrados para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //
            dir->CreateLogFile("ROOMS-NOT-FOUND", erro_query);
        }
        //
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return vec_all_rooms;
}
 */

/**
 * Metodo responsavel por pegar todos 
 * os Quartos com Alas para os Eventos
 * Capturados.
 * @return vector<Rooms>
 */

/*
QVector<Room*> DbConn::getAllWardRoomsToEventCap() {
    QVector<Room*> vec_all_rooms;

    //
    msg->ShowMessage("Lendo todos os Quartos do Banco PostgreSql!!", COLOR_BLUE, COLOR_CIANO);
    //
    QString vquery = "SELECT w.short_name, r.room_name  FROM wards w, rooms r "
            "WHERE w.id = r.ward_id AND room_name IS NOT NULL "
            "ORDER BY ward_id";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        query->prepare(vquery);
        //
        query->exec();
        //   
        while (query->next()) {
            //
            room = new Room();

            //Sigla da Ala
            room->SetRoomWardSigla(query->value(0).toString()); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
            //Sigla do Quarto
            room->SetRoomName(query->value(1).toString());
            //
            vec_all_rooms.push_back(room);
            //
            msg->ShowMessage("Quantidade lida: " + room->GetRoomName(), COLOR_BLUE, COLOR_CIANO);
            //
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //

            QString erro_query = "Quartos não encontrados para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //
            dir->CreateLogFile("ROOMS-NOT-FOUND", erro_query);
        }

    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return vec_all_rooms;
}
 */

/**
 * Adiciona ume evento para a tabela
 * data_protocol no PostGreeSql()
 * @return true or false
 */

/*
bool DbConn::addEventInPGree(Event *event) {
    //
    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        msg->ShowMessage("Conexao addEventInPGree(), feita com sucesso", COLOR_WHITE, COLOR_GREEN);
        //
        query->prepare("INSERT INTO data_protocol (ward_id, room_id, event_id, date_time_called, bed_room_code) VALUES(?,?,?,?,?)");
        //
        query->addBindValue(event->GetWardId());
        query->addBindValue(event->GetRoomId());
        query->addBindValue(QString::number(event->GetEventId()));
        query->addBindValue(event->GetDate_Time_Called());
        query->addBindValue(event->GetRoomBedCode());
        //
        if (query.exec()) {
            qDebug() << "Inclusão feita com sucesso!";
        }
        //
        if (!query.isActive()) {
            //  QString str_erro = query.lastError();
            QMessageBox::critical(0, QObject::tr("Database Error"),
                    query.lastError().text());
        }
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //    
}
 */
/**
 * Faz o atendimento para um evento
 * na tabela data_protocol no PostGreeSql()
 * @return 
 */
/*
bool DbConn::updateAttendEventInPGree(Event *event) {
    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        msg->ShowMessage("Conexao updateAttendEventInPGree(), feita com sucesso", COLOR_WHITE, COLOR_GREEN);
        //
        query->prepare("UPDATE data_protocol SET date_time_entered = ? WHERE id = ?");
        //
        query->addBindValue(event->GetDate_Time_Entered());
        query->addBindValue(QString::number(event->GetPtlId()));
        //
        if (query.exec()) {
            qDebug() << "Atualizacao feita com Sucesso!";
        }
        //
        if (!query.isActive()) {
            //  QString str_erro = query.lastError();
            QMessageBox::critical(0, QObject::tr("Database Error"),
                    query.lastError().text());
        }
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    // 
}
 */

/**
 * Finaliza um evento em aberto
 * na tabela data_protocol no PostGreeSql()
 * @param event
 * @return 
 */
/*
bool DbConn::updateFinisheEventInPGree(Event *event) {
    //
    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        msg->ShowMessage("Conexao updateFinisheEventInPGree(), feita com sucesso", COLOR_WHITE, COLOR_GREEN);
        //
        query->prepare("UPDATE data_protocol SET date_time_exited = ?, status_exited='t' WHERE id = ?");
        //
        query->addBindValue(event->GetDate_Time_Exited());
        query->addBindValue(QString::number(event->GetPtlId()));
        //
        if (query.exec()) {
            qDebug() << "Atualizacao feita com Sucesso!";
        }
        //
        if (!query.isActive()) {
            //  QString str_erro = query.lastError();
            QMessageBox::critical(0, QObject::tr("Database Error"),
                    query.lastError().text());
        }
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    // 
}
 */

/**
 * Faz atendimento e finaliza um evento em aberto
 * na tabela data_protocol no PostGreeSql()
 * @param event
 * @return 
 */
/*
bool DbConn::updateAttendFinisheEventInPGree(Event *event) {
    //   
    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        msg->ShowMessage("Conexao updateAttendFinisheEventInPGree(), feita com sucesso", COLOR_WHITE, COLOR_GREEN);
        //
        query->prepare("UPDATE data_protocol SET date_time_entered =?, status_entered = 't', date_time_exited = ? , status_exited = 't' WHERE id = ?");
        //
        query->addBindValue(event->GetDate_Time_Entered());
        query->addBindValue(event->GetDate_Time_Exited());
        query->addBindValue(QString::number(event->GetPtlId()));
        //
        if (query.exec()) {
            qDebug() << "Atualizacao feita com Sucesso!";
        }
        //
        if (!query.isActive()) {
            //  QString str_erro = query.lastError();
            QMessageBox::critical(0, QObject::tr("Database Error"),
                    query.lastError().text());
        }
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    // 
}
 */

/**
 * Metodo responsavel por
 * pegar o tempo programado
 * para o atendimento da 
 * chamada de paciente
 * @return long
 */
/*
long DbConn::getTimeOutForAttend() {
    long time_out = 1;
    int i;

    QString vquery = "SELECT time_out FROM config_hosp";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        query->prepare(vquery);
        //
        query->exec();
        //
        while (query.next()) {
            //
            QString str_time_out = QString(query->value(0).toString());//pego a coluna zero ref, a pes. com uma coluna
            //
            if (!str_time_out.isEmpty()) {
                time_out = str_time_out.toLong();
            }
        }
        //
        if (!query->isActive()) {
            QString str_erro = query.lastError().text();
            //
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //
            QString erro_query = "PARAM TIME-OUT NAO CADASTRADO para query: " + query +
                    "\nQuery Erro: " + str_erro;
            //
            dir->CreateLogFile("ERRO-PARAM-TIME-OUT", erro_query);
        }
    }
    //
    if (DbPGree.isOpen()) {
        //Fecha a conexao
        closeConnPGree();
        //             
    }
    //
    return (time_out * 60);
}
 */

/**
 * Metodo responsavel por pegar o ID
 * e EVENT_NAME e IS_CANCEL para um evento capturado da 
 * Rauland.
 * @param event
 * @return 
 */
/*
Event* DbConn::getEventIDToEventRldInPGree(Event *event) {
    int i;

    QString query = "SELECT * FROM table_events WHERE event_name ='" + event->GetEventMessage() + "'";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {

        rs = PQexec(conn, query.c_str());

        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            PQclear(rs);
        } else {
            int nrows = PQntuples(rs); //Pego a quantidade de linhas no result
            //
            if (nrows > 0) {
                for (i = 0; i < nrows; i++) {
                    //ID
                    char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna

                    //EVENT_CODE
                    //char *vevent_code = PQgetvalue(rs, i, 1);

                    //SHORT_NAME
                    // char *vshort_name = PQgetvalue(rs, i, 2);

                    //EVENT_NAME
                    char *vevent_name = PQgetvalue(rs, i, 3);

                    //IS_CANCEL
                    char *viscancel = PQgetvalue(rs, i, 4);
                    //
                    event->SetEventId(atoi(vid));
                    //evrld->SetEventCode(QString(vevent_code));
                    event->SetEventMessage(QString(vevent_name));

                    //
                    if (QString(viscancel) == "t") {
                        event->SetEventCancel(true);
                    } else {
                        event->SetEventCancel(false);
                    }
                }
            } else {
                //
                dir->setFolder_write("/Logs/LogDb/PgSql/");
                //
                QString erro_query = "getEventIDToEventRldInPGree(Event *event):\nNao foi possivel pegar ID para o Evento Rauland:\n" + query;
                dir->CreateLogFile("ERROQUERYEVENT", erro_query);
            }
        }
        //
        PQclear(rs);
        //Fecha a conexao com o PostgreSQL
        closeConnPGree();
        //
    }
    //
    return event;
}
 */

/**
 * Metodo responsavel por pegar ward_id, ip_pds
 * ward_code, short_name, e id para um evento 
 * capturado da Rauland.
 * @param event
 * @return 
 */
/*
Ward* DbConn::getWardIDToWardRldInPGree(Event *nevent) {
    int i;

    QString query = "SELECT * FROM wards WHERE short_name ='" + nevent->GetWardSigla() + "'";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {

        rs = PQexec(conn, query.c_str());

        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            PQclear(rs);
        } else {
            int nrows = PQntuples(rs); //Pego a quantidade de linhas no result
            //
            if (nrows > 0) {
                for (i = 0; i < nrows; i++) {
                    ward = new Ward();
                    //ID
                    char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
                    //PORTA SERIAL
                    char *vserial_port = PQgetvalue(rs, i, 1);
                    //CODIGO DA ALA
                    //char *vward_code = PQgetvalue(rs, i, 2);
                    //NOME CURTO DA ALA
                    char *vshort_name = PQgetvalue(rs, i, 3);
                    //NOME LONGO DA ALA
                    //char *vward_name = PQgetvalue(rs, i, 4);
                    //
                    ward->SetWardId(QString(vid));
                    ward->SetWardPds(QString(vserial_port));
                    //ward->SetWardCode(QString(vward_code));
                    ward->SetWardSigla(QString(vshort_name));
                    // ward->SetWardName(QString(vward_name));
                }
            } else {
                //
                dir->setFolder_write("/Logs/LogDb/PgSql/");
                //
                QString erro_query = "getWardIDToWardRldInPGree(Event *nevent):\nNao foi possivel pegar ID para a Ala do Evento Rauland:\n" + query;
                dir->CreateLogFile("ERROQUERYWARD", erro_query);
            }
        }
        //
        PQclear(rs);
        //Fecha a conexao com o PostgreSQL
        closeConnPGree();
        //
    }
    //
    return ward;
}
 */

/**
 * Metodo responsavel por pegar o id, ward_id
 * room_code, room_name e id para um evento 
 * capturado da Rauland.
 * @param event
 * @return 
 */

/*
Room* DbConn::getRoomIDToRoomRldInPGree(Event *nevent) {
    int i;

    QString query = "SELECT * FROM rooms WHERE room_name = '" + nevent->GetRoomSigla()
            + "' AND   ward_id   = '" + nevent->GetWardId() + "'";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {

        rs = PQexec(conn, query.c_str());

        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            PQclear(rs);
        } else {
            int nrows = PQntuples(rs); //Pego a quantidade de linhas no result
            //
            if (nrows > 0) {
                for (i = 0; i < nrows; i++) {
                    room = new Room();
                    //ID
                    char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
                    //WARD_ID
                    char *vward_id = PQgetvalue(rs, i, 1);
                    //ROOM_CODE
                    char *vroom_code = PQgetvalue(rs, i, 2);
                    //ROOM_NAME
                    char *vroom_name = PQgetvalue(rs, i, 3);
                    //
                    room->SetRoomId(QString(vid));
                    room->SetRoomWardId(QString(vward_id));
                    room->SetRoomCode(QString(vroom_code));
                    room->SetRoomName(QString(vroom_name));
                    //
                }
            } else {
                //
                dir->setFolder_write("/Logs/LogDb/PgSql/");
                //
                QString erro_query = "getRoomIDToRoomRldInPGree(Event *nevent) :\nNao foi possivel pegar ID para o Quarto do Evento Rauland:\n" + query;
                dir->CreateLogFile("ERROQUERYROOM", erro_query);
            }
        }
        //
        PQclear(rs);
        //Fecha a conexao com o PostgreSQL
        closeConnPGree();
        //
    }
    //
    return room;
}

 */

/**
 * Metodo responsavel por pegar o id, hexacard
 * para a tabela attendants no PostgreSQL, para 
 * atualizar a tabela local e o evento atual.
 * @param ncard
 * @return 
 */
/*
Card* DbConn::getCardIDToCardInPGree(Card *ncard) {
    int i;

    QString query = "SELECT * FROM attendants WHERE hexacard = '" + ncard->GetHexa_Card() + "'";

    //Abre a conexao com o banco;
    if (openConnInPGree()) {

        rs = PQexec(conn, query.c_str());

        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            PQclear(rs);
        } else {
            int nrows = PQntuples(rs); //Pego a quantidade de linhas no result
            //
            if (nrows > 0) {
                for (i = 0; i < nrows; i++) {
                    evcard = new Card();
                    //ID
                    char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna
                    //HexaCard
                    char *vhexacard = PQgetvalue(rs, i, 1);
                    //
                    evcard->SetAttendant_Id(QString(vid));
                    evcard->SetHexa_Card(QString(vhexacard));
                    //
                }
            } else {
                //
                dir->setFolder_write("/Logs/LogDb/PgSql/");
                //
                QString erro_query = "getCardIDToCardInPGree() :\nNao foi possivel pegar ID para o Cartão Capturado:\n" + query;
                dir->CreateLogFile("ERROQUERYCARD", erro_query);
            }
        }
        //
        PQclear(rs);
        //Fecha a conexao com o PostgreSQL
        closeConnPGree();
        //
    }
    //
    return evcard;
}
 */

/**
 * Metodo responsavel por pesquisar um evento
 * na base de dados e ver qual regra de negócio
 * aplicar.
 * @param nevent
 * @return 
 */
/*
Event* DbConn::getTypeEventRldToApplyRule(Event *nevent) {
    int i = 0, nrows;

    QString query = "SELECT id, date_time_entered, date_time_exited FROM data_protocol"
            " WHERE ward_id='" + nevent->GetWardId()
            + "' AND room_id='" + nevent->GetRoomId()
            + "' AND date_time_exited IS NULL";


    cerr << FG_RED << "[" << __FILE__ << ":" << __LINE__ << "] "
            << FG_BLUE << "Query...:" << query << END << endl;

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        rs = PQexec(conn, query.c_str());
        //
        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            dir->setFolder_write("/Logs/LogDb/PgSql/");
            //
            QString erro_query = "getTypeEventRldToApplyRule() :\nNao foi possivel Executar a Query:\n"
                    + query + "\n Erro: " + str_searc;
            dir->CreateLogFile("ERROQUERYPTL", erro_query);
            //
            PQclear(rs);
        } else {
            nrows = PQntuples(rs);

            if (nrows > 0) {
                //     for (i = 0; i < nrows; i++) {
                //ID
                char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna

                //DATE_TIME_ENTERED
                char *vdatet_entered = PQgetvalue(rs, i, 1);

                //DATE_TIME_EXITED
                char *vdatet_exited = PQgetvalue(rs, i, 2);

                //Seta o ID
                nevent->SetPtlId(atoi(vid));

                //Seta a data de entrada
                nevent->SetDate_Time_Entered(QString(vdatet_entered));

                //Seta a data de saida
                nevent->SetDate_Time_Exited(QString(vdatet_exited));

                //event_rauland.setIs_cancel(false);
                //
                //              }
            } else {
                //Seta o ID com valor zero para novo evento
                nevent->SetPtlId(0);
            }

            PQclear(rs);
        }
        //Fecha a conexao com o PostgreSQL  
        closeConnPGree();
    }
    //
    return nevent;
}
 */

/**
 * Metodo responsavel por pesquisar um evento
 * na base de dados e ver qual regra de negócio
 * aplicar.
 * @param nevent
 * @return 
 */
/*
Card* DbConn::getTypeCardEventToApplyRule(Card *ncard) {
    int i = 0, nrows;

    QString query = "SELECT id, date_time_entered, status_entered, date_time_exited, status_exited FROM data_protocol "
            " WHERE ward_id='" + ncard->GetWardId()
            + "' AND room_id='" + ncard->GetRoomId()
            + "' AND date_time_exited IS NULL";


    cerr << FG_RED << "[" << __FILE__ << ":" << __LINE__ << "] "
            << FG_BLUE << "Query...:" << query << END << endl;

    //Abre a conexao com o banco;
    if (openConnInPGree()) {
        //
        rs = PQexec(conn, query.c_str());
        //
        if (!rs) {
            //
            char *erro_searc = PQerrorMessage(conn);
            QString str_searc = QString(erro_searc);
            msg->ShowMessage(str_searc, COLOR_BLUE, COLOR_RED);
            //
            PQclear(rs);
        } else {
            nrows = PQntuples(rs);

  
            if (nrows > 0) {
                //ID
                char *vid = PQgetvalue(rs, i, 0); //PQgetvalue(rs, i, 0), i=linha, 0=coluna

                //DATE_TIME_ENTERED
                char *vdate_time_entered = PQgetvalue(rs, i, 1);

                //STATUS_ENTERED
                char *vstatus_entered = PQgetvalue(rs, i, 2);

                //DATE_TIME_EXITED
                char *vdate_time_exited = PQgetvalue(rs, i, 3);

                //STATUS_EXITED
                char *vstatus_exited = PQgetvalue(rs, i, 4);

                //
                ncard->SetPtlId(atoi(vid));
                //
                ncard->SetDate_Time_Entered(QString(vdate_time_entered));
                //
                ncard->SetDate_Time_Exited(QString(vdate_time_exited));
                //
                if (QString(vstatus_entered) == "t") {
                    ncard->SetEventEntered(true);
                } else {
                    ncard->SetEventEntered(false);
                }

                if (QString(vstatus_exited) == "t") {
                    ncard->SetEventExited(true);
                } else {
                    ncard->SetEventExited(false);
                }

            }

            PQclear(rs);
        }

        //Fecha a conexao com o PostgreSQL
        closeConnPGree();
    }
    //
    return ncard;
}
 */
