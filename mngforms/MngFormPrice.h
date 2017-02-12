/* 
 * File:   MngFormPrice.h
 * Author: batista
 *
 * Created on 13 de Junho de 2013, 09:57
 */

#ifndef _MNGFORMPRICE_H
#define	_MNGFORMPRICE_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QApplication>
#include <QMessageBox>
#include <QWidget>
#include "ui_MngFormPrice.h"

class MngFormPrice : public QDialog, private Ui_MngFormPrice {
    Q_OBJECT
public:
    MngFormPrice();
    virtual ~MngFormPrice();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:

};

#endif	/* _MNGFORMPRICE_H */
