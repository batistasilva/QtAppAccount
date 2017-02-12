/* 
 * File:   MngFormEmployee.h
 * Author: batista
 *
 * Created on 10 de Maio de 2013, 10:28
 */

#ifndef _MNGFORMEMPLOYEE_H
#define	_MNGFORMEMPLOYEE_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QWidget>
#include "ui_MngFormEmployee.h"

class MngFormEmployee : public QDialog, private Ui_MngFormEmployee {
    Q_OBJECT
public:
    MngFormEmployee();
    virtual ~MngFormEmployee();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:

};

#endif	/* _MNGFORMEMPLOYEE_H */
