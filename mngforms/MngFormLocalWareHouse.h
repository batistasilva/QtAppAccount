#ifndef MNGFORMLOCALWAREHOUSE_H
#define MNGFORMLOCALWAREHOUSE_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
//#include <QApplication>
//#include <QMessageBox>
#include <QIcon>
#include <QObject>
//#include <QTableWidget>
//#include <QTableWidgetItem>
//#include <QAbstractItemView>
#include <QItemSelection>
#include <QStringListModel>
//#include <QApplication>
//#include <QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
//#include <QTableView>
#include <qt5/QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
//#include <QCompleter>
//#include <QWidget>
#include <QtCore/QTimer>
//#include <QDialog>
#include "IUs/ui_MngFormLocalWareHouse.h"
#include "src/DbConn.h"
#include "src/ShowMsg.h"


namespace Ui {
class MngFormLocalWareHouse;
}

class MngFormLocalWareHouse : public QDialog, private Ui_MngFormLocalWareHouse, private ShowMsg {
    Q_OBJECT
    
public:
    explicit MngFormLocalWareHouse(QWidget *parent = 0);
    ~MngFormLocalWareHouse();
    //
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
    //void runAddFactory();
    //void runLoadToChangeFactory(const QItemSelection &, const QItemSelection &);
    //void runRemoveFactory();
    //void runAutoCompleteFactoryCode();
    //void runValidFillInForm();
    //void runCleanForm();
    //void runExitWin();

private:
   // Factory * factory;
    DbConn * dbconn;
    //
    QSqlQueryModel * facmodeltbl;
    QSqlQueryModel * facmodelsch;
    QCompleter * completer;
    QIcon imageicon;
    QAbstractItemModel * itmodel;
    QStringList numbers;
    //
    bool statusCallSubWin;

private:
  //  void enableFillFormForAdd();
  //  void enableFillFormForChange();
  //  void disableFillForm();
  //  void populateTableView();

//private:
//    Ui::MngFormLocalWareHouse *ui;

};

#endif // MNGFORMLOCALWAREHOUSE_H
