#ifndef MNGFORMSUBCATEGORY_H
#define MNGFORMSUBCATEGORY_H
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
#include <QtWidgets/QDialog>
#include "IUs/ui_MngFormSubCategory.h"
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
