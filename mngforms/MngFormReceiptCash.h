/* 
 * File:   MngFormReceiptCash.h
 * Author: batista
 *
 * Created on 24 de Junho de 2013, 10:54
 */

#ifndef _MNGFORMRECEIPTCASH_H
#define	_MNGFORMRECEIPTCASH_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
//#include <QApplication>
//#include <QMessageBox>
//#include <QWidget>
#include "IUs/ui_MngFormReceiptCash.h"

class MngFormReceiptCash : public QDialog, private Ui_MngFormReceiptCash {
    Q_OBJECT
public:
    MngFormReceiptCash();
    virtual ~MngFormReceiptCash();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private: 
 
};

#endif	/* _MNGFORMRECEIPTCASH_H */
