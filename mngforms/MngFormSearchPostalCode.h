#ifndef MNGFORMSEARCHPOSTALCODE_H
#define MNGFORMSEARCHPOSTALCODE_H
#include <QDebug>
//#include <QtWebKit/QWebElement>
//#include <QtWebKit/QWebPage>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
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
#include <QStandardItemModel>
#include <QtWidgets/QTableView>
#include <QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <qt5/QtSql/QSqlTableModel>
#include <QtWidgets/QTableView>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlRecord>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QtNetwork/QNetworkAccessManager>
#include <QtWidgets/QMainWindow>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QStringList>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "src/Address.h"
#include "../ws/WSClient.h"
#include "../ws/postalcode.h"
#include "IUs/ui_MngFormSearchPostalCode.h"
#include <QtWidgets/QDialog>

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
