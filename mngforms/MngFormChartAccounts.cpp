#include "mngforms/MngFormChartAccounts.h"
#include "IUs/ui_MngFormChartAccounts.h"

MngFormChartAccounts::MngFormChartAccounts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormChartAccounts)
{
    ui->setupUi(this);
}

MngFormChartAccounts::~MngFormChartAccounts()
{
    delete ui;
}
