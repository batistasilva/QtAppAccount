/* 
 * File:   FormTerms.h
 * Author: batista
 *
 * Created on 31 de Julho de 2013, 12:28
 */

#ifndef _FORMTERMS_H
#define	_FORMTERMS_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QIcon>
#include <QObject>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QAbstractItemView>
#include <QItemSelection>
#include <QStringListModel>
#include <QApplication>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QTableView>
#include <qt5/QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QCompleter>
#include <QWidget>
#include <QtCore/QTimer>
#include <QDialog>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "ui_MngFormTerms.h"
#include "src/Terms.h"
#include "src/TimeUtil.h"

class DbConn;
class Terms;

class MngFormTerms : public QDialog, private Ui_FormTerms, private ShowMsg  {
    Q_OBJECT
public:
    explicit MngFormTerms(QDialog *parent = 0);
    virtual ~MngFormTerms();
    //
    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    bool isStatusCallSubWin() const {
        return statusCallSubWin;
    }

    void setStatusCallSubWin(bool statusCallSubWin) {
        this->statusCallSubWin = statusCallSubWin;
    }
   
    //
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    void runAddTerms();
    void runLoadToChangeTerm(const QItemSelection &, const QItemSelection &);
    void runAutoCompleteTermCode();
    void runValidFillInForm();
    void runCleanForm();
    void runRemoveTerms();
    void runExitWin();

private:
    Terms * terms;
    DbConn * dbconn;
    TimeUtil * tmu;
    //
    QSqlQueryModel * termmodeltbl;
    QSqlQueryModel * termmodelsch;
    //
    QCompleter * completer;
    QIcon imageicon;
    //QAbstractItemModel * itmodel;
    QStringList numbers;
    bool statusCallSubWin;

private:
    void enableFillFormForAdd();
    void enableFillFormForChange();
    void disableFillForm();
    void populateTableView();
    bool validSaveTerms();
 //   void runPopulateBusinessActivity();
 //   void runPopulatePaymentMethod();

};

#endif	/* _FORMTERMS_H */
