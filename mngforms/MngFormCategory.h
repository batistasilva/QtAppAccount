#ifndef MNGFORMCATEGORY_H
#define MNGFORMCATEGORY_H
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
#include <QtCore/QAbstractItemModel>
#include <QWidgetMapper>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include <QtWidgets/QDialog>
#include "IUs/ui_MngFormCategory.h"
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/ProductCategory.h"

namespace Ui {
    class MngFormCategory;
}

class MngFormCategory : public QDialog, private Ui_MngFormCategory, private ShowMsg {
    Q_OBJECT

public:
    explicit MngFormCategory(QWidget *parent = 0);
    ~MngFormCategory();

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
    void runAddCategory();
    void runLoadToChangeCategory(const QItemSelection &, const QItemSelection &);
    void runRemoveCategory();
    void runAutoCompleteCategoryCode();
    void runValidFillInForm();
    void runCleanForm();
    void runExitWin();

private:
    ProductCategory * category;
    DbConn * dbconn;
    //
    QSqlQueryModel * catmodeltbl;
    QSqlQueryModel * catmodelsch;
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

#endif // MNGFORMCATEGORY_H
