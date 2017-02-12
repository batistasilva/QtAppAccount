/* 
 * File:   MngFormProduct.h
 * Author: batista
 *
 * Created on 14 de Maio de 2013, 11:39
 */

#ifndef _MNGFORMPRODUCT_H
#define	_MNGFORMPRODUCT_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlRecord>
#include <QCompleter>
#include <QWidget>
#include <QtCore/QTimer>
#include "ui_MngFormProduct.h"
#include "src/ShowMsg.h"
#include "src/ConfigConn.h"
#include "src/DbConn.h"
#include "src/ProductCategory.h"
#include "src/ProductSubCategory.h"
#include "src/WareHouse.h"
#include "src/Factory.h"
#include "src/ProductLine.h"
#include "src/ProductUoM.h"
#include "src/Tax.h"
#include "src/Commission.h"
#include "src/PriceSchedule.h"
#include "src/Product.h"
#include "MngFormFactory.h"
#include "MngFormCategory.h"
#include "MngFormSubCategory.h"
#include "MngFormProdLines.h"
#include "MngFormUom.h"
#include "MngFormLocalWareHouse.h"

class QSqlQueryModel;
class MngFormFactory;
class MngFormCategory;
class MngFormSubCategory;
class MngFormProdLines;
class MngFormUom;
class DbConn;
class QTimer;

class MngFormProduct : public QDialog, private Ui_MngFormProduct, private ShowMsg {
    Q_OBJECT
public:
    explicit MngFormProduct(QDialog *parent = 0);
    virtual ~MngFormProduct();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);

private slots:
    void runPopulateProducts();
    void runWinToolFactory();
    void runWinToolCategory();
    void runWinToolSubCategory();
    void runWinToolProdLines();
    void runWinToolUom();
    void runWinToolLocalWareHouse();
    void runExitWin();

private:
    void runPopulateCategory();
    void runPopulateSubCategory();
    void runPopulateWarehouse();
    void runPopulateFactory();
    void runPopulateProdLines();
    void runPopulateUom();
    void runPopulateICMSTax();
    void runPopulateIPITax();
    void runPopulateCommis();
    void runPopulatePriceSchedule();


private:
    DbConn * dbconn;
    ProductCategory * prodcat;
    ProductSubCategory * prodsubcat;
    ProductLine * prodline;
    WareHouse * whouse;
    Factory * fac;
    ProductUoM * produom;
    Tax * tax;
    Commission * commis;
    PriceSchedule * pricesc;
    Product * prod;
    //
    QSqlQueryModel * sqlmodel;
    QCompleter * completer;
    QSqlQueryModel * modelcb;
    //
    MngFormFactory * factory;
    MngFormCategory * category;
    MngFormSubCategory * subcategory;
    MngFormProdLines * prodlines;
    MngFormUom       * formuom;
    MngFormLocalWareHouse * formlocalwh;
    
};

#endif	/* _MNGFORMPRODUCT_H */
