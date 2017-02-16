/* 
 * File:   MngFormQuote.h
 * Author: batista
 *
 * Created on 23 de Junho de 2013, 21:56
 */

#ifndef _MNGFORMQUOTE_H
#define	_MNGFORMQUOTE_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
//#include <QApplication>
//#include <QMessageBox>
//#include <QWidget>
#include "IUs/ui_MngFormQuote.h"

class MngFormQuote : public QDialog, private Ui::MngFormQuote {
    Q_OBJECT
public:
    MngFormQuote();
    virtual ~MngFormQuote();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private: 
};

#endif	/* _MNGFORMQUOTE_H */
