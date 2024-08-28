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
#include <QtCore/QTimer>
#include <QObject>
#include <QStringListModel>
#include <QItemSelectionModel>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include "IUs/ui_MngFormConfig.h"
#include "Util/ConfigConn.h"
#include "Util/DbConn.h"

using namespace std;
using std::string;

class ConfigConn;
class DbConn;
class QTimer;

class MngFormConfig : public QDialog, DbConn, private Ui_FormConfig {
    Q_OBJECT
public:
    explicit MngFormConfig(QWidget *parent = 0);
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
    ConfigConn * confconn;
    DbConn * dbconn;

    bool VlFillForm();
};

#endif	/* MNGFORMCONFIG_H */

