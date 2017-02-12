#ifndef MNGFORMSUBCATEGORY_H
#define MNGFORMSUBCATEGORY_H
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
#include "ui_MngFormSubCategory.h"
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/ProductSubCategory.h"

namespace Ui {
class MngFormSubCategory;
}

class MngFormSubCategory : public QDialog, private Ui_MngFormSubCategory, private ShowMsg {
    Q_OBJECT
    
public:
    explicit MngFormSubCategory(QWidget *parent = 0);
    ~MngFormSubCategory();
    
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
    void runAddSubCategory();
    void runLoadToChangeSubCategory(const QItemSelection &, const QItemSelection &);
    void runRemoveSubCategory();
    void runAutoCompleteSubCategoryCode();
    void runValidFillInForm();
    void runCleanForm();
    void runExitWin();

private:
    ProductSubCategory * subcat;
    DbConn * dbconn;
    //
    QSqlQueryModel * subcatmodel;
    QSqlQueryModel * subcatmodelsch;
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

#endif // MNGFORMSUBCATEGORY_H
