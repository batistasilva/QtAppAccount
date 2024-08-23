#include "mngforms/MngFormProfitCenter.h"
#include "IUs/ui_MngFormProfitCenter.h"

MngFormProfitCenter::MngFormProfitCenter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormProfitCenter)
{
    ui->setupUi(this);
}

MngFormProfitCenter::~MngFormProfitCenter()
{
    delete ui;
}
