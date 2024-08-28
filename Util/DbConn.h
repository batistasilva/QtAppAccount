/* 
 * File:   DbConn.h
 * Author: batista
 *
 * Created on 20 de Fevereiro de 2013, 08:38
 */

#ifndef DBCONN_H
#define	DBCONN_H

#include <QObject>
#include <QtSql/qtsqlglobal.h>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QVector>
#include "Util/ShowMsg.h"
#include "dbgdirfile.h"
#include "TimeUtil.h"
#include "DataConn.h"
#include "ConfigConn.h"

class DbgDirFile;
class ShowMsg;
class TimeUtil;
class DbConn :public QObject, ConfigConn {
    Q_OBJECT
public:
    explicit DbConn(QObject *parent = nullptr);
    //
    virtual ~DbConn();

    //QSqlQuery query;

    DbgDirFile* getDir() const {
        return m_dir;
    }

    void setDir(DbgDirFile* dir) {
        this->m_dir = dir;
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



protected:
    QSqlDatabase DbPGree;
    //

private:
    bool status_readconf;

    DbgDirFile * m_dir;
    TimeUtil * m_tmut;
    ShowMsg * m_msg;

};

#endif	/* DBCONN_H */

