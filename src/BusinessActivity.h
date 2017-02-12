/* 
 * File:   BusinessActivity.h
 * Author: batista
 *
 * Created on 9 de Agosto de 2013, 11:49
 */

#ifndef BUSINESSACTIVITY_H
#define	BUSINESSACTIVITY_H
#include <qt5/QtSql/qsqlerror.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"
#include "common/Util.h"

class QSqlQueryModel;
class BusinessActivity {
public:
    BusinessActivity();
    virtual ~BusinessActivity();
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
     * Add a new BusinessActivity to 
     * database.
     * @return 
     */
    bool addNewBusinessActivity();
   
    /**
     * Remove a existing BusinessActivity
     * from database. 
     * @return 
     */
    bool removeBusinessActivity();
    
    /**
     * Update a existing BusinessActivity 
     * from database
     * @return 
     */
    bool updateBusinessActivity();
    
    /**
     * Get Object with a BusinessActivity
     * to BusinessActivity_id or name
     * @return 
     */
   // BusinessActivity* getBusinessActivity(BusinessActivity &);
   
    /**
     * Get all BusinessActivity from database
     * @return 
     */
    QVector<BusinessActivity*> getAllBusinessActivity();
    //
    
    
    QString getBusinessActivityCode() const {
        return businessActivityCode;
    }

    void setBusinessActivityCode(QString businessActivityCode) {
        this->businessActivityCode = businessActivityCode;
    }

    QString getBusinessActivityDescrip() const {
        return businessActivityDescrip;
    }

    void setBusinessActivityDescrip(QString businessActivityDescrip) {
        this->businessActivityDescrip = businessActivityDescrip;
    }

    int getBusinessActivityId() const {
        return businessActivityId;
    }

    void setBusinessActivityId(int businessActivityId) {
        this->businessActivityId = businessActivityId;
    }

    QString getBusinessActivityShortDescrip() const {
        return businessActivityShortDescrip;
    }

    void setBusinessActivityShortDescrip(QString businessActivityShortDescrip) {
        this->businessActivityShortDescrip = businessActivityShortDescrip;
    }

    bool isBusinessActive() const {
        return businessActive;
    }

    void setBusinessActive(bool businessActive) {
        this->businessActive = businessActive;
    }

    //
private:
    BusinessActivity * businesact;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;
    //


private:
    int businessActivityId; //businessact_id integer NOT NULL DEFAULT nextval(('businessact_businessact_id_seq'::text)::regclass),
    QString businessActivityCode; //businessact_code text NOT NULL,
    QString businessActivityDescrip; //businessact_descrip text,
    QString businessActivityShortDescrip; //businessact_shortdescrip text,
    bool    businessActive;//businessact_active boolean
};

/*
CREATE TABLE business_activity
(
  
  
  
  
  date_create timestamp without time zone,
  date_change timestamp without time zone,
 *
  CONSTRAINT businessact_pkey PRIMARY KEY (businessact_id),
  CONSTRAINT businessact_businessact_code_key UNIQUE (businessact_code),
  CONSTRAINT businessact_businessact_code_check CHECK (businessact_code <> ''::text)
) 
 */

#endif	/* BUSINESSACTIVITY_H */

