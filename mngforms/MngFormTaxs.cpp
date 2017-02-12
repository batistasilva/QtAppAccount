#include "mngforms/MngFormTaxs.h"
#include "ui_MngFormTaxs.h"

MngFormTaxs::MngFormTaxs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormTaxs)
{
    ui->setupUi(this);
}

MngFormTaxs::~MngFormTaxs()
{
    delete ui;
}
