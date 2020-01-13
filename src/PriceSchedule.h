/* 
 * File:   PriceSchedule.h
 * Author: batista
 *
 * Created on 16 de Julho de 2013, 12:34
 */

#ifndef PRICESCHEDULE_H
#define	PRICESCHEDULE_H
#include <QtSql/qtsqlglobal.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"
#include "src/PriceSchedule.h"

class PriceSchedule {
public:
    PriceSchedule();
    virtual ~PriceSchedule();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //
    /**
     * Add a new PriceSchedule to 
     * database.
     * @return 
     */
    bool addNewPriceSchedule();
    /**
     * Remove a existing PriceSchedule
     * from database. 
     * @return 
     */
    bool removePriceSchedule();
    /**
     * Update a existing PriceSchedule 
     * from database
     * @return 
     */
    bool updatePriceSchedule();
    /**
     * Get Object with a PriceSchedule
     * to priceschedule_id or name
     * @return 
     */
    PriceSchedule * getPriceSchedule(PriceSchedule &);
    /**
     * Get all PriceSchedule from database
     * @return 
     */
    QVector<PriceSchedule*> getAllPriceSchedule();



    //

    QString getPriceScheduleCode() const {
        return priceScheduleCode;
    }

    void setPriceScheduleCode(QString priceScheduleCode) {
        this->priceScheduleCode = priceScheduleCode;
    }

    QString getPriceScheduleDescrip() const {
        return priceScheduleDescrip;
    }

    void setPriceScheduleDescrip(QString priceScheduleDescrip) {
        this->priceScheduleDescrip = priceScheduleDescrip;
    }

    int getPriceScheduleId() const {
        return priceScheduleId;
    }

    void setPriceScheduleId(int priceScheduleId) {
        this->priceScheduleId = priceScheduleId;
    }

    double getPriceSchedulePercent() const {
        return priceSchedulePercent;
    }

    void setPriceSchedulePercent(double priceSchedulePercent) {
        this->priceSchedulePercent = priceSchedulePercent;
    }

    QString getPriceScheduleShortDescrip() const {
        return priceScheduleShortDescrip;
    }

    void setPriceScheduleShortDescrip(QString priceScheduleShortDescrip) {
        this->priceScheduleShortDescrip = priceScheduleShortDescrip;
    }

    int getPriceScheduleTypeId() const {
        return priceScheduleTypeId;
    }

    void setPriceScheduleTypeId(int priceScheduleTypeId) {
        this->priceScheduleTypeId = priceScheduleTypeId;
    }

    double getPriceScheduleValue() const {
        return priceScheduleValue;
    }

    void setPriceScheduleValue(double priceScheduleValue) {
        this->priceScheduleValue = priceScheduleValue;
    }

    //

private:
    PriceSchedule * pricsc;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;
    //

private:
    int priceScheduleId; //price_schedule_id integer NOT NULL DEFAULT nextval(('price_schedule_price_schedule_id_seq'::text)::regclass)
    QString priceScheduleCode; //price_schedule_code text NOT NULL
    QString priceScheduleDescrip; //price_schedule_descrip text
    QString priceScheduleShortDescrip; //price_schedule_shortdescrip text
    int priceScheduleTypeId; // price_schedule_type_id integer
    double priceScheduleValue; //price_schedule_value numeric(10,2) NOT NULL
    double priceSchedulePercent; // price_schedule_percent numeric(10,2) NOT NULL,

};

/*
 
CREATE TABLE price_schedule
(
  
  
  
  
 
  
 
  date_create timestamp without time zone,
  date_change timestamp without time zone,
  CONSTRAINT price_schedule_pkey PRIMARY KEY (price_schedule_id),
  CONSTRAINT price_schedule_price_schedule_code_key UNIQUE (price_schedule_code),
  CONSTRAINT price_schedule_price_schedule_code_check CHECK (price_schedule_code <> ''::text)
)
 */

#endif	/* PRICESCHEDULE_H */

