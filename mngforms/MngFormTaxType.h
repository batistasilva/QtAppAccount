#ifndef MNGFORMTAXTYPE_H
#define MNGFORMTAXTYPE_H

#include <QtWidgets/QDialog>

namespace Ui {
class MngFormTaxType;
}

class MngFormTaxType : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormTaxType(QWidget *parent = 0);
    ~MngFormTaxType();
    
private:
    Ui::MngFormTaxType *ui;
};
//Company Profit Center Account # Sub-Account Type Description

#endif // MNGFORMTAXTYPE_H
