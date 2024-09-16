/* 
 * File:   ProductFactory.h
 * Author: batista
 *
 * Created on 9 de Julho de 2013, 10:31
 */

#ifndef PRODUCTFACTORY_H
#define	PRODUCTFACTORY_H
#include <QtSql/qtsqlglobal.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "common/Util.h"
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class QSqlQueryModel;
class Factory {
public:
    Factory();
    virtual ~Factory();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }
    
    //
    /**
     * Get Next id from database table 
     * to add.
     * @param 
     * @return 
     */
    int getNextIdFromTable();
    
    /**
     * Get a SqlQueryModel for Query Entry
     * @param 
     * @return 
     */
    //QSqlQueryModel * getQueryModel(QString query);
    
    /**
     * Add a new Factory to 
     * database.
     * @return 
     */
    bool addNewFactory();
    /**
     * Remove a existing Factory
     * from database. 
     * @return 
     */
    bool removeFactory();
    /**
     * Update a existing Factory 
     * from database
     * @return 
     */
    bool updateFactory();
    /**
     * Get Object with a Factory
     * to productfactory_id or name
     * @return 
     */
   // ProductFactory* getFactory(ProductFactory &);
    /**
     * Get all Factory from database
     * @return 
     */
    QVector<Factory*> getAllFactory();
    //

    //

    QString getFactoryCode() const {
        return factoryCode;
    }

    void setFactoryCode(QString factoryCode) {
        this->factoryCode = factoryCode;
    }

    QString getFactoryDescrip() const {
        return factoryDescrip;
    }

    void setFactoryDescrip(QString factoryDescrip) {
        this->factoryDescrip = factoryDescrip;
    }

    int getFactoryId() const {
        return factoryId;
    }

    void setFactoryId(int factoryId) {
        this->factoryId = factoryId;
    }

    QString getFactoryShortDescrip() const {
        return factoryShortDescrip;
    }

    void setFactoryShortDescrip(QString factoryShortDescrip) {
        this->factoryShortDescrip = factoryShortDescrip;
    }
    
    bool isFactoryActive() const {
        return factoryActive;
    }

    void setFactoryActive(bool factoryActive) {
        this->factoryActive = factoryActive;
    }

    //
private:
    Factory * factory;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;
    //TimeUtil * tm;

private:
    int factoryId; //prodfactory_id integer NOT NULL DEFAULT nextval(('factory_factory_id_seq'::text)::regclass)
    QString factoryCode; //prodfactory_code text NOT NULL
    QString factoryDescrip; //prodfactory_descrip text
    QString factoryShortDescrip; //prodfactory_shortdescrip text
    bool factoryActive;//factory_active boolean,
};

/*
 CREATE TABLE factory
(
  
  
  
  
  date_create timestamp without time zone,
  date_change timestamp without time zone,
)
 */

#endif	/* PRODUCTFACTORY_H */

