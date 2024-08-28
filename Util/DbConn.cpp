/* 
 * File:   DbConn.cpp
 * Author: batista
 * 
 * Created on 20 de Fevereiro de 2013, 08:38
 */

#include <QtSql/qtsqlglobal.h>
#include "Util/DbConn.h"

/**
 * Metodo construtor da aplicação
 */
DbConn::DbConn(QObject *parent): QObject(parent),
    m_dir(new DbgDirFile()),
    m_msg(new ShowMsg()),
    m_tmut(new TimeUtil())
{
    status_readconf = false;

    m_msg->ShowMessage("Mensagem: Construtor Principal DbConn()!!", COLOR_BLUE, COLOR_PINK);
    //
    //Abre banco Sqlite na memoria
    //openConnInSqLite();
}

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
    //Using this feature temporarily "../../Xml" to find the configuration file..
    status_readconf = readFile("../Xml/ConfigConn.xml");
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
            QString sqlerro = DbPGree.lastError().databaseText();
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
            m_msg->ShowMessage(erro_log, COLOR_BLUE, COLOR_RED);
            //
            m_dir->setLogwrite_fdname("Logs/LogDB/");
            //
            m_dir->CreateLogFile("LOGPGSQL", erro_log);
            //        
            return false;
        }

        m_msg->ShowMessage("Conexao com PostgreSql feita com sucesso!! ", COLOR_BLUE, COLOR_PINK);
    } else {
        m_msg->ShowMessage("Nao foi Possivel fazer a Leitura do Arquivo de Configuração!! ", COLOR_BLUE, COLOR_RED);
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
        m_msg->ShowMessage(erro_log, COLOR_BLUE, COLOR_RED);
        //
        m_dir->setLogwrite_fdname("Logs/LogDB/");
        //
        m_dir->CreateLogFile("LOGPGSQL", erro_log);
        //
        return false;
    }
    //
    return true;
}


void DbConn::closeConnPGree(){
    /*Verifica se a conexao está aberta e a encerra*/
    if (DbPGree.isOpen()) {
        m_msg->ShowMessage("CloseConn() PGree, Conexao fechada com sucesso!!!", COLOR_BLUE, COLOR_RED);
        DbPGree.close();
    }    
}
