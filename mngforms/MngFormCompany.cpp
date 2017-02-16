#include "mngforms/MngFormCompany.h"
#include "IUs/ui_MngFormCompany.h"

MngFormCompany::MngFormCompany(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormCompany)
{
    ui->setupUi(this);
}

MngFormCompany::~MngFormCompany()
{
    delete ui;
}
