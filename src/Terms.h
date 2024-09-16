/* 
 * File:   Terms.h
 * Author: batista
 *
 * Created on 1 de Agosto de 2013, 09:33
 */

#ifndef TERMS_H
#define	TERMS_H
#include <QtSql/qtsqlglobal.h>
#include <qt5/QtSql/QSqlRecord>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class QSqlQueryModel;
class Terms {
public:
    Terms();
    virtual ~Terms();
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
     * Add a new Term to 
     * database.
     * @return 
     */
    bool addNewTerm();
    
    /**
     * Remove a existing Term
     * from database. 
     * @return 
     */
    bool removeTerm();
    
    
    /**
     * Update a existing Term 
     * from database
     * @return 
     */
    bool updateTerm();
    
    
    /**
     * Get Object with a Term
     * to terms_id or name
     * @return 
     */
    Terms* getTerm(Terms &);
    
    
    /**
     * Get all Terms from database
     * @return 
     */
    QVector<Terms*> getAllTermsForCBox();
    
    //
    //

    bool isTermAccountReceivable() const {
        return termAccountReceivable;
    }

    void setTermAccountReceivable(bool termAccountReceivable) {
        this->termAccountReceivable = termAccountReceivable;
    }

    bool isTermAccountsPayable() const {
        return termAccountsPayable;
    }

    void setTermAccountsPayable(bool termAccountsPayable) {
        this->termAccountsPayable = termAccountsPayable;
    }

    bool isTermActive() const {
        return termActive;
    }

    void setTermActive(bool termActive) {
        this->termActive = termActive;
    }

    QString getTermCode() const {
        return termCode;
    }

    void setTermCode(QString termCode) {
        this->termCode = termCode;
    }

    int getTermCutOffDay() const {
        return termCutOffDay;
    }

    void setTermCutOffDay(int termCutOffDay) {
        this->termCutOffDay = termCutOffDay;
    }

    QString getTermDescrip() const {
        return termDescrip;
    }

    void setTermDescrip(QString termDescrip) {
        this->termDescrip = termDescrip;
    }

    int getTermDiscountDays() const {
        return termDiscountDays;
    }

    void setTermDiscountDays(int termDiscountDays) {
        this->termDiscountDays = termDiscountDays;
    }

    double getTermDiscountPercent() const {
        return termDiscountPercent;
    }

    void setTermDiscountPercent(double termDiscountPercent) {
        this->termDiscountPercent = termDiscountPercent;
    }

    int getTermDueDays() const {
        return termDueDays;
    }

    void setTermDueDays(int termDueDays) {
        this->termDueDays = termDueDays;
    }

    int getTermId() const {
        return termId;
    }

    void setTermId(int termId) {
        this->termId = termId;
    }

    int getTermInstallmentDays() const {
        return termInstallmentDays;
    }

    void setTermInstallmentDays(int termInstallmentDays) {
        this->termInstallmentDays = termInstallmentDays;
    }

    int getTermInstallmentQuantity() const {
        return termInstallmentQuantity;
    }

    void setTermInstallmentQuantity(int termInstallmentQuantity) {
        this->termInstallmentQuantity = termInstallmentQuantity;
    }

    QString getTermPaymentExpect() const {
        return termPaymentExpect;
    }

    void setTermPaymentExpect(QString termPaymentExpect) {
        this->termPaymentExpect = termPaymentExpect;
    }

    QString getTermTypes() const {
        return termTypes;
    }

    void setTermTypes(QString termTypes) {
        this->termTypes = termTypes;
    }

    
    //

    
private:
    Terms * term;
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;
    //
    
private:
    int termId;//terms_id integer NOT NULL DEFAULT nextval(('terms_terms_id_seq'::text)::regclass),
    QString termCode;//terms_code text NOT NULL,
    QString termDescrip;//terms_descrip text,
    QString termPaymentExpect;//terms_paymentexpect, 
    int termDueDays;//terms_duedays integer, -- Select if payment is expected within a certain number of days from the date the Invoice was...
    int termDiscountDays;//terms_discdays integer,
    double termDiscountPercent;//terms_discprcnt numeric(10,6),
    int termCutOffDay;//terms_cutoffday integer,
    bool termAccountsPayable;//terms_ap boolean,
    bool termAccountReceivable;//terms_ar boolean,
    QString termTypes;//terms_type character(1), -- Select if payment is expected on a certain day of the month (e.g., the first day of the month,...
    bool termActive;// terms_active boolean,
    int  termInstallmentQuantity;//terms_installment_quantity integer, -- For Quantity of installments for payment
    int  termInstallmentDays;//terms_installmentdays integer, -- For days of installments for payment
    
};


/*
 CREATE TABLE terms
(
 
  
  CONSTRAINT terms_pkey PRIMARY KEY (terms_id),
  CONSTRAINT terms_terms_code_key UNIQUE (terms_code),
  CONSTRAINT terms_terms_code_check CHECK (terms_code <> ''::text)
)
 */

#endif	/* TERMS_H */

