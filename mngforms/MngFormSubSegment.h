#ifndef MNGFORMSUBSEGMENT_H
#define MNGFORMSUBSEGMENT_H

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
#include <QtCore/QItemSelectionModel>
#include <QStandardItemModel>
#include <QtWidgets/QTableView>
#include <QtSql/QSqlQueryModel>
#include <QAbstractItemModel>
#include <QWidgetMapper>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QWidget>
#include <QtCore/QTimer>
#include "src/DbConn.h"
#include "src/ShowMsg.h"
#include "IUs/ui_MngFormSubSegment.h"

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
