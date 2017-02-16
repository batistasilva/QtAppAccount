#ifndef MNGFORMCHARTACCOUNTS_H
#define MNGFORMCHARTACCOUNTS_H

#include <QtWidgets/QDialog>

namespace Ui {
class MngFormChartAccounts;
}

class MngFormChartAccounts : public QDialog
{
    Q_OBJECT
    
public:
    explicit MngFormChartAccounts(QWidget *parent = 0);
    ~MngFormChartAccounts();
    
private:
    Ui::MngFormChartAccounts *ui;
};

#endif // MNGFORMCHARTACCOUNTS_H
