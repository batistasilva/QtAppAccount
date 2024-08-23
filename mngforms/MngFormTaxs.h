#ifndef MNGFORMTAXS_H
#define MNGFORMTAXS_H

#include <QtWidgets/QDialog>

namespace Ui {
class MngFormTaxs;
}

class MngFormTaxs : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormTaxs(QWidget *parent = 0);
    ~MngFormTaxs();
    
private:
    Ui::MngFormTaxs *ui;
};

#endif // MNGFORMTAXS_H
