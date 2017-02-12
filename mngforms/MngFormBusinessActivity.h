#ifndef MNGFORMBUSINESSACTIVITY_H
#define MNGFORMBUSINESSACTIVITY_H

#include <QDialog>
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
#include "src/BusinessActivity.h"
#include "ui_MngFormBusinessActivity.h"
namespace Ui {
    class MngFormBusinessActivity;
}

class MngFormBusinessActivity : public QDialog, private Ui_FormBusinessActivity, private ShowMsg {
    Q_OBJECT

public:
    explicit MngFormBusinessActivity(QWidget *parent = 0);
    ~MngFormBusinessActivity();

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
    void runAddBusinesActivity();
    void runLoadToChangeBusinesActivity(const QItemSelection &, const QItemSelection &);
    void runRemoveBusinesActivity();
    void runAutoCompleteBusinesActivityCode();
    void runValidFillInForm();
    void runCleanForm();
    void runExitWin();

private:
    BusinessActivity * busact;
    DbConn * dbconn;
    //
    QSqlQueryModel * busact_modeltbl;
    QSqlQueryModel * busact_modelsch;
    QCompleter * completer;
    QIcon imageicon;
    QAbstractItemModel * itmodel;
    QStringList numbers;
    bool statusCallSubWin;

private:
    void enableFillFormForAdd();
    void enableFillFormForChange();
    void disableFillForm();
    void populateTableView();

};

#endif // MNGFORMBUSINESSACTIVITY_H
