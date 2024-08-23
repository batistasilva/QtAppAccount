/* 
 * File:   ProductCategory.h
 * Author: batista
 *
 * Created on 3 de Julho de 2013, 16:23
 */

#ifndef PRODUCTCATEGORY_H
#define	PRODUCTCATEGORY_H
#include <QtSql/qtsqlglobal.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "common/Util.h"
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"

class ProductCategory {
public:
    ProductCategory();
    virtual ~ProductCategory();
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
     * Add a new Category to 
     * database.
     * @return 
     */
    bool addNewCategory();
    /**
     * Remove a existing Category
     * from database. 
     * @return 
     */
    bool removeCategory();
    /**
     * Update a existing Category 
     * from database
     * @return 
     */
    bool updateCategory();
    /**
     * Get Object with a Category
     * to Category_id or name
     * @return 
     */
    ProductCategory* getCategory(ProductCategory &);
    /**
     * Get all Category from database
     * @return 
     */
    QVector<ProductCategory*> getAllCategory();

    //

    QString getCatCode() const {
        return catCode;
    }

    void setCatCode(QString catCode) {
        this->catCode = catCode;
    }

    QString getCatDateChange() const {
        return catDateChange;
    }

    void setCatDateChange(QString catDateChange) {
        this->catDateChange = catDateChange;
    }

    QString getCatDateCreated() const {
        return catDateCreated;
    }

    void setCatDateCreated(QString catDateCreated) {
        this->catDateCreated = catDateCreated;
    }

    QString getCatDescrip() const {
        return catDescrip;
    }

    void setCatDescrip(QString catDescrip) {
        this->catDescrip = catDescrip;
    }

    int getCatId() const {
        return catId;
    }

    void setCatId(int catId) {
        this->catId = catId;
    }

    QString getCatShortDescrip() const {
        return catShortDescrip;
    }

    void setCatShortDescrip(QString catShortDescrip) {
        this->catShortDescrip = catShortDescrip;
    }

    bool isCatStatus() const {
        return catStatus;
    }

    void setCatStatus(bool catStatus) {
        this->catStatus = catStatus;
    }

    //

private:
    ProductCategory * prodcat;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;
    //
private:
    int catId; //cat_id integer NOT NULL DEFAULT nextval(('prodcat_prodcat_id_seq'::text)::regclass),
    QString catCode; //cat_code text NOT NULL,
    bool catStatus; //cat_active boolean NOT NULL DEFAULT true,
    QString catDescrip; //cat_descrip text,
    QString catShortDescrip; //cat_shortdescrip text, -- A Short Description for Category
    QString catDateCreated; //cat_date_create timestamp without time zone,
    QString catDateChange; //cat_date_change timestamp without time zone,
};


/*
CREATE TABLE category
(
  CONSTRAINT cat_pkey PRIMARY KEY (cat_id),
  CONSTRAINT cat_prodcat_code_key UNIQUE (cat_code),
  CONSTRAINT cat_prodcat_code_check CHECK (cat_code <> ''::text)
)  
 */

#endif	/* PRODUCTCATEGORY_H */

