#include "mngforms/MngFormTaxType.h"
#include "IUs/ui_MngFormTaxType.h"

MngFormTaxType::MngFormTaxType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormTaxType)
{
    ui->setupUi(this);
}

MngFormTaxType::~MngFormTaxType()
{
    delete ui;
}
