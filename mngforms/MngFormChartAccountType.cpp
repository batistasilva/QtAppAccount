#include "mngforms/MngFormChartAccountType.h"
#include "ui_MngFormChartAccountType.h"

MngFormChartAccountType::MngFormChartAccountType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormChartAccountType)
{
    ui->setupUi(this);
}

MngFormChartAccountType::~MngFormChartAccountType()
{
    delete ui;
}
