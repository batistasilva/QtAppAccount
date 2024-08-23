/* 
 * File:   MngFormStockByNf.h
 * Author: batista
 *
 * Created on 3 de Junho de 2013, 09:17
 */

#ifndef _MNGFORMSTOCKBYNF_H
#define	_MNGFORMSTOCKBYNF_H
#include <QDebug>
#include <QKeyEvent>
#include <QEvent>
#include <QMouseEvent>
#include <QtCore/QTimer>
#include <QObject>
//#include <QApplication>
//#include <QMessageBox>
//#include <QWidget>
#include "IUs/ui_MngFormStockByNf.h"

class MngFormStockByNf : public QDialog, private Ui_MngFormStockByNf {
    Q_OBJECT
public:
    MngFormStockByNf();
    virtual ~MngFormStockByNf();
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);

private slots:


private:

};

#endif	/* _MNGFORMSTOCKBYNF_H */
