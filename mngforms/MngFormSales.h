/* 
 * File:   MngFormSales.h
 * Author: batista
 *
 * Created on 21 de Junho de 2013, 08:23
 */

#ifndef _MNGFORMSALES_H
#define	_MNGFORMSALES_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QWidget>
#include "ui_MngFormSales.h"

class MngFormSales : public QDialog, private Ui_MngFormSales {
    Q_OBJECT
public:
    MngFormSales();
    virtual ~MngFormSales();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:    
};

#endif	/* _MNGFORMSALES_H */
