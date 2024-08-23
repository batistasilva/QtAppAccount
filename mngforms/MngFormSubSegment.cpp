#include "mngforms/MngFormSubSegment.h"

MngFormSubSegment::MngFormSubSegment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MngFormSubSegment)
{
    ui->setupUi(this);
}

MngFormSubSegment::~MngFormSubSegment()
{
    delete ui;
}
