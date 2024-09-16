#ifndef MNGFORMCHARTACCOUNTTYPE_H
#define MNGFORMCHARTACCOUNTTYPE_H

#include <QtWidgets/QDialog>
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
#include <qt5/QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "IUs/ui_MngFormChartAccountType.h"

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
