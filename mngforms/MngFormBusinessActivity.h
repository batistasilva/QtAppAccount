#ifndef MNGFORMBUSINESSACTIVITY_H
#define MNGFORMBUSINESSACTIVITY_H

#include <QtWidgets/QDialog>
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
#include <qt5/QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include <QtWidgets/QDialog>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/BusinessActivity.h"
#include "IUs/ui_MngFormBusinessActivity.h"
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
