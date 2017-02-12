#ifndef MNGFORMSEARCHPOSTALCODE_H
#define MNGFORMSEARCHPOSTALCODE_H
#include <QDebug>
//#include <QtWebKit/QWebElement>
//#include <QtWebKit/QWebPage>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
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
#include <QStandardItemModel>
#include <QTableView>
#include <qt5/QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <qt5/QtSql/QSqlTableModel>
#include <QTableView>
#include <qt5/QtSql/QSqlQueryModel>
#include <qt5/QtSql/QSqlRecord>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <qt5/QtNetwork/QNetworkAccessManager>
#include <QMainWindow>
#include <qt5/QtNetwork/QNetworkReply>
#include <QMessageBox>
#include <QByteArray>
#include <QStringList>
#include <QWidget>
#include <QtCore/QTimer>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/Address.h"
#include "../ws/WSClient.h"
#include "../ws/postalcode.h"
#include "ui_MngFormSearchPostalCode.h"
#include <QDialog>

class PostalCode;
class MngFormSearchPostalCode : public QDialog, public Ui_SearchPostalCode, private ShowMsg {
    Q_OBJECT

public:
    explicit MngFormSearchPostalCode(QWidget *parent = 0);
    ~MngFormSearchPostalCode();
    //
 
    //
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);

private slots:
    void runLoadToConfirm(const QItemSelection &, const QItemSelection &);
    void finished(QNetworkReply *reply);
    void getRespToHttp();
    void runValidFillInForm();
    void runSearchZip();
    void runConfirmDataZip();
    void runCleanForm();
    void runExitWin();
    //
    
signals:    
    void runSendDataAddress(class PostalCode *);


private:
    WSClient * wscli;
    PostalCode * postalcode;
    Address * addr;
    //
    QSqlQueryModel * modeltbl;
    QAbstractItemModel *tblmodel;
    int item_count;
    QStringList numbers;
    QIcon imageicon;
    //
    QItemSelectionModel * selectionModel; 

private:
    void disableFillForm();
    void populateTableView(QAbstractItemModel *tblmodel);
    void runPopulateState();
    void runPopulateTypeStreet();
    //
    QNetworkAccessManager *nam;
};

#endif // MNGFORMSEARCHPOSTALCODE_H
