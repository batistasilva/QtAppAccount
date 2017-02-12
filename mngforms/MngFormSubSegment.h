#ifndef MNGFORMSUBSEGMENT_H
#define MNGFORMSUBSEGMENT_H

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
#include "ui_MngFormSubSegment.h"

namespace Ui {
class MngFormSubSegment;
}

class MngFormSubSegment : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormSubSegment(QWidget *parent = 0);
    ~MngFormSubSegment();
    
private:
    Ui::MngFormSubSegment *ui;
};

#endif // MNGFORMSUBSEGMENT_H
