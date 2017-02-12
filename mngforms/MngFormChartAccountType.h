#ifndef MNGFORMCHARTACCOUNTTYPE_H
#define MNGFORMCHARTACCOUNTTYPE_H

#include <QDialog>
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
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "ui_MngFormChartAccountType.h"

namespace Ui {
class MngFormChartAccountType;
}

class MngFormChartAccountType : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormChartAccountType(QWidget *parent = 0);
    ~MngFormChartAccountType();
    
private:
    Ui::MngFormChartAccountType *ui;
};

#endif // MNGFORMCHARTACCOUNTTYPE_H
