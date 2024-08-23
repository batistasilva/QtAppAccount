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
#include <QtWidgets/QApplication>
#include <QtWidgets/QMessageBox>
#include <QIcon>
#include <QObject>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTableWidgetItem>
#include <QtWidgets/QAbstractItemView>
#include <QItemSelection>
#include <QStringListModel>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QtWidgets/QTableView>
#include <QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include <QtWidgets/QDialog>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "IUs/ui_MngFormTerms.h"
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
