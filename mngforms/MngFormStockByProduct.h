/* 
 * File:   MngFormStockByProduct.h
 * Author: batista
 *
 * Created on 22 de Maio de 2013, 15:08
 */

#ifndef _MNGFORMSTOCKBYPRODUCT_H
#define	_MNGFORMSTOCKBYPRODUCT_H

#include "IUs/ui_MngFormStockByProduct.h"

class MngFormStockByProduct : public QDialog, private Ui_MngFormStockByProduct {
    Q_OBJECT
public:
    MngFormStockByProduct();
    virtual ~MngFormStockByProduct();
private:

};

#endif	/* _MNGFORMSTOCKBYPRODUCT_H */
