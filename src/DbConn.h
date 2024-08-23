/* 
 * File:   DbConn.h
 * Author: batista
 *
 * Created on 20 de Fevereiro de 2013, 08:38
 */

#ifndef DBCONN_H
#define	DBCONN_H
#include <iostream>
#include <QtSql/qtsqlglobal.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QVector>
#include "ShowMsg.h"
#include "DirFile.h"
#include "TimeUtil.h"
#include "DataConn.h"
#include "ConfigConn.h"


using namespace std;
using std::string;

class DbConn : public ConfigConn {
public:
    DbConn();
    //
    virtual ~DbConn();

    //QSqlQuery query;

    DirFile* getDir() const {
        return dir;
    }

    void setDir(DirFile* dir) {
        this->dir = dir;
    }

    QSqlDatabase getDbPGree() const {
        return DbPGree;
    }

    void setDbPGree(QSqlDatabase DbPGree) {
        this->DbPGree = DbPGree;
    }


    /**
     * Abre uma conexao com
     * o banco PostgreSql
     * @return true or false
     */
    bool openConnInPGree();

    /**
     * Fecha uma conexão 
     * aberta com o banco 
     * PostgreSql
     * @return 
     */
    void closeConnPGree();



    /**
     * Verifica se ha uma
     * conexao aberta com
     * o banco PostgreSql
     * @return true or false
     */
    bool isOpenConnPGree();


private:
    //

protected:
    QSqlDatabase DbPGree;
    //

private:
    bool status_readconf;

private:
    //
    DirFile *dir;
    TimeUtil *tmut;
    ShowMsg *msg;

};

#endif	/* DBCONN_H */

