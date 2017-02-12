/* 
 * File:   MngFormUsers.h
 * Author: batista
 *
 * Created on 13 de Junho de 2013, 15:17
 */

#ifndef _MNGFORMUSERS_H
#define	_MNGFORMUSERS_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QWidget>
#include "ui_MngFormUsers.h"

class MngFormUsers : public QDialog, private Ui_MngFormUsers {
    Q_OBJECT
public:
    MngFormUsers();
    virtual ~MngFormUsers();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:
};

#endif	/* _MNGFORMUSERS_H */
