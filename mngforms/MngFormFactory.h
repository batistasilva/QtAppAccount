#ifndef MNGFORMFACTORY_H
#define MNGFORMFACTORY_H
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
#include "ui_MngFormFactory.h"
#include "src/DbConn.h"
#include "src/Factory.h"
#include "src/ShowMsg.h"

//namespace Ui {
  //  class MngFormFactory;
//}

class DbConn;
class Factory;

class MngFormFactory : public QDialog, private Ui_MngFormFactory, private ShowMsg {
    Q_OBJECT

public:
    explicit MngFormFactory(QDialog *parent = 0);
    ~MngFormFactory();
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
    void runAddFactory();
    void runLoadToChangeFactory(const QItemSelection &, const QItemSelection &);
    void runRemoveFactory();
    void runAutoCompleteFactoryCode();
    void runValidFillInForm();
    void runCleanForm();
    void runExitWin();

private:
    Factory * factory;
    DbConn * dbconn;
    //
    QSqlQueryModel * facmodeltbl;
    QSqlQueryModel * facmodelsch;
    QCompleter * completer;
    QIcon imageicon;
    QAbstractItemModel * itmodel;
    QStringList numbers;

private:
    void enableFillFormForAdd();
    void enableFillFormForChange();
    void disableFillForm();
    void populateTableView();


};

#endif // MNGFORMFACTORY_H
