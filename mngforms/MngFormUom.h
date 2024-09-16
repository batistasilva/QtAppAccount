#ifndef MNGFORMUOM_H
#define MNGFORMUOM_H

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
#include "IUs/ui_MngFormUom.h"
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/ProductUoM.h"

namespace Ui {
class MngFormUom;
}

class MngFormUom : public QDialog, private Ui_MngFormUom, private ShowMsg {
    Q_OBJECT
    
public:
    explicit MngFormUom(QWidget *parent = 0);
    ~MngFormUom();
    
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
    void runAddProdUom();
    void runLoadToChangeProdUom(const QItemSelection &, const QItemSelection &);
    void runRemoveProdUom();
    void runAutoCompleteProdUomCode();
    void runValidFillInForm();
    void runValidWeightUom();
    void runCleanForm();
    void runExitWin();

private:
    ProductUoM * produom;
    DbConn * dbconn;
    //
    QSqlQueryModel * puommodel;
    QSqlQueryModel * puommodelsch;
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

#endif // MNGFORMUOM_H
