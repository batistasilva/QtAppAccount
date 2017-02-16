#ifndef MNGFORMCOMPANY_H
#define MNGFORMCOMPANY_H

#include <QtWidgets/QDialog>

namespace Ui {
class MngFormCompany;
}

class MngFormCompany : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormCompany(QWidget *parent = 0);
    ~MngFormCompany();
    
private:
    Ui::MngFormCompany *ui;
};

#endif // MNGFORMCOMPANY_H
