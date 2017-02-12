#ifndef MNGFORMPROFITCENTER_H
#define MNGFORMPROFITCENTER_H

#include <QDialog>

namespace Ui {
class MngFormProfitCenter;
}

class MngFormProfitCenter : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormProfitCenter(QWidget *parent = 0);
    ~MngFormProfitCenter();
    
private:
    Ui::MngFormProfitCenter *ui;
};

#endif // MNGFORMPROFITCENTER_H
