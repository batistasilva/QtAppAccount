/* 
 * File:   MngFormCustomer.h
 * Author: batista
 *
 * Created on 7 de Maio de 2013, 17:03
 */

#ifndef MNGFORMCUSTOMER_H
#define	MNGFORMCUSTOMER_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QWidget>
#include "IUs/ui_MngFormCustomer.h"


using namespace std;
using std::string;

class MngFormCustomer: public QDialog, private Ui_FormMngCustomer{
    Q_OBJECT    
public:
    MngFormCustomer();
    virtual ~MngFormCustomer();
    
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:

};

#endif	/* MNGFORMCUSTOMER_H */

