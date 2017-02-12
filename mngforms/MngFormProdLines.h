#ifndef MNGFORMPRODLINES_H
#define MNGFORMPRODLINES_H

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
#include "ui_MngFormProdLines.h"
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/ProductLine.h"


namespace Ui {
class MngFormProdLines;
}

class MngFormProdLines : public QDialog, private Ui_MngFormProdLines, private ShowMsg {
    Q_OBJECT
    
public:
    explicit MngFormProdLines(QWidget *parent = 0);
    ~MngFormProdLines();
    
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
    void runAddProdLines();
    void runLoadToChangeProdLines(const QItemSelection &, const QItemSelection &);
    void runRemoveProdLines();
    void runAutoCompleteProdLinesCode();
    void runValidFillInForm();
    void runCleanForm();
    void runExitWin();

private:
    ProductLine * prodline;
    DbConn * dbconn;
    //
    QSqlQueryModel * plinemodel;
    QSqlQueryModel * plinemodelsch;
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

#endif // MNGFORMPRODLINES_H
