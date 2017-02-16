/* 
 * File:   MngFormPriceTable.h
 * Author: batista
 *
 * Created on 6 de Junho de 2013, 16:33
 */

#ifndef _MNGFORMPRICETABLE_H
#define	_MNGFORMPRICETABLE_H

#include "IUs/ui_MngFormPriceTable.h"

class MngFormPriceTable : public QDialog, private Ui_MngFormPriceTable {
    Q_OBJECT
public:
    MngFormPriceTable();
    virtual ~MngFormPriceTable();
    
protected:
    //void keyPressEvent(QKeyEvent * event);

protected:
    //void closeEvent(QCloseEvent *event);
   
private slots:
    
private:

};

#endif	/* _MNGFORMPRICETABLE_H */
