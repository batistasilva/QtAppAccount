/* 
 * File:   Commission.h
 * Author: batista
 *
 * Created on 16 de Julho de 2013, 08:54
 */

#ifndef COMMISSION_H
#define	COMMISSION_H
#include <QtSql/qtsqlglobal.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"


class Commission {
public:
    Commission();
    virtual ~Commission();
    //
    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //
   /**
     * Add a new Commission to 
     * database.
     * @return 
     */
    bool addNewCommission();
    /**
     * Remove a existing Commission
     * from database. 
     * @return 
     */
    bool removeCommission();
    /**
     * Update a existing Commission 
     * from database
     * @return 
     */
    bool updateCommission();
    /**
     * Get Object with a Commission
     * to tax_id or name
     * @return 
     */
    Commission * getCommission(Commission &);
    /**
     * Get all commissions from database
     * @return 
     */
    QVector<Commission*> getAllCommissions();
    
    //

    QString getCommisCode() const {
        return commisCode;
    }

    void setCommisCode(QString commisCode) {
        this->commisCode = commisCode;
    }

    QString getCommisDescrip() const {
        return commisDescrip;
    }

    void setCommisDescrip(QString commisDescrip) {
        this->commisDescrip = commisDescrip;
    }

    int getCommisId() const {
        return commisId;
    }

    void setCommisId(int commisId) {
        this->commisId = commisId;
    }

    QString getCommisShortDescrip() const {
        return commisShortDescrip;
    }

    void setCommisShortDescrip(QString commisShortDescrip) {
        this->commisShortDescrip = commisShortDescrip;
    }

    //
private:
    Commission * commis;
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;
    
private:
    int commisId;//commis_id integer NOT NULL DEFAULT nextval(('commission_commission_id_seq'::text)::regclass)
    QString commisCode;//commis_code text NOT NULL,
    QString commisDescrip;//commis_descrip text,
    QString commisShortDescrip;//commis_shortdescrip text,
    
};

/*
CREATE TABLE commission
(
  
  
  
  
  commis_type_id integer,
  commis_value numeric(10,2) NOT NULL,
  commis_percent numeric(10,2) NOT NULL,
  date_create timestamp without time zone,
  date_change timestamp without time zone,
  CONSTRAINT commission_pkey PRIMARY KEY (commis_id),
  CONSTRAINT commission_commis_code_key UNIQUE (commis_code),
  CONSTRAINT commission_commis_code_check CHECK (commis_code <> ''::text)
) 
 */
#endif	/* COMMISSION_H */

