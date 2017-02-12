/* 
 * File:   ProductLine.h
 * Author: batista
 *
 * Created on 9 de Julho de 2013, 10:45
 */

#ifndef PRODUCTLINE_H
#define	PRODUCTLINE_H
#include <qt5/QtSql/qsqlerror.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "common/Util.h"
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class ProductLine {
public:
    ProductLine();
    virtual ~ProductLine();
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
     * Add a new Line to 
     * database.
     * @return 
     */
    bool addNewLine();
    /**
     * Remove a existing Line
     * from database. 
     * @return 
     */
    bool removeLine();
    /**
     * Update a existing Line 
     * from database
     * @return 
     */
    bool updateLine();
    /**
     * Get Object with a Line
     * to productline_id or name
     * @return 
     */
    ProductLine* getLine(ProductLine &);
    /**
     * Get all Lines from database
     * @return 
     */
    QVector<ProductLine*> getAllLines();
    
    //

    QString getProdLineCode() const {
        return prodLineCode;
    }

    void setProdLineCode(QString prodLineCode) {
        this->prodLineCode = prodLineCode;
    }

    QString getProdLineDateChange() const {
        return prodLineDateChange;
    }

    void setProdLineDateChange(QString prodLineDateChange) {
        this->prodLineDateChange = prodLineDateChange;
    }

    QString getProdLineDateCreate() const {
        return prodLineDateCreate;
    }

    void setProdLineDateCreate(QString prodLineDateCreate) {
        this->prodLineDateCreate = prodLineDateCreate;
    }

    QString getProdLineDescrip() const {
        return prodLineDescrip;
    }

    void setProdLineDescrip(QString prodLineDescrip) {
        this->prodLineDescrip = prodLineDescrip;
    }

    int getProdLineId() const {
        return prodLineId;
    }

    void setProdLineId(int prodLineId) {
        this->prodLineId = prodLineId;
    }

    QString getProdLineShortDescrip() const {
        return prodLineShortDescrip;
    }

    void setProdLineShortDescrip(QString prodLineShortDescrip) {
        this->prodLineShortDescrip = prodLineShortDescrip;
    }

    bool isProdLineStatus() const {
        return prodLineStatus;
    }

    void setProdLineStatus(bool prodLineStatus) {
        this->prodLineStatus = prodLineStatus;
    }


    
    //
private:
    ProductLine * prodline;
    ShowMsg * msg;
    DirFile * dir;
    DbConn  * dbconn;
    
private:
    int prodLineId;// prodline_id integer NOT NULL DEFAULT nextval(('prodline_prodline_id_seq'::text)::regclass),
    QString prodLineCode;//prodline_code text NOT NULL,
    QString prodLineDescrip;//prodline_descrip text,
    QString prodLineShortDescrip;//prodline_shortdescrip text,
    bool prodLineStatus;//prodline_active boolean NOT NULL DEFAULT true,
    QString prodLineDateCreate;//date_create timestamp without time zone,
    QString prodLineDateChange;//date_change timestamp without time zone,
};

/*
CREATE TABLE prodline
(
  CONSTRAINT prodline_pkey PRIMARY KEY (prodline_id),
  CONSTRAINT prodline_prodline_code_key UNIQUE (prodline_code),
  CONSTRAINT prodline_prodline_code_check CHECK (prodline_code <> ''::text)
)
 */
#endif	/* PRODUCTLINE_H */

