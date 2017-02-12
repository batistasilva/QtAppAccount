/* 
 * File:   MngFormConfig.h
 * Author: batista
 *
 * Created on 21 de Fevereiro de 2013, 09:06
 */

#ifndef MNGFORMCONFIG_H
#define	MNGFORMCONFIG_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QScrollBar>
#include <QtCore/QTimer>
#include <QObject>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QStringListModel>
#include <QApplication>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QTableView>
#include <QSpinBox>
#include <QSortFilterProxyModel>
#include <QMessageBox>
#include "ui_MngFormConfig.h"
#include "src/ConfigConn.h"
#include "src/DbConn.h"

using namespace std;
using std::string;

class ConfigConn;
class DbConn;
class QTimer;

class MngFormConfig : public QDialog, private Ui_FormConfig {
    Q_OBJECT
public:
    MngFormConfig();
    virtual ~MngFormConfig();

protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);

private slots:   
    void runSaveConf();
    void runTestConf();
    void runClose();

private:
    ConfigConn confconn;
    DbConn dbconn;
    bool VlFillForm();
};

#endif	/* MNGFORMCONFIG_H */

