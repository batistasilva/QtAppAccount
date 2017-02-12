/********************************************************************************
** Form generated from reading UI file 'MngFormChartAccounts.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCHARTACCOUNTS_H
#define UI_MNGFORMCHARTACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormChartAccounts
{
public:
    QGroupBox *GBoxDataChartAccounts;
    QLabel *LabelChartAccountCompany;
    QLineEdit *LEditChartAccountID;
    QLabel *LabelChartAccountNumberAccount;
    QLineEdit *LEditChartAccountNumberAccount;
    QCheckBox *CheckBoxStatusActiveChartAccount;
    QLabel *LabelTaxTypeStateLongShow;
    QComboBox *CBoxlChartAccountCompany;
    QComboBox *CBoxChartAccountProfitCenter;
    QLabel *LabelChartAccountProfitCenter;
    QLabel *LabelChartAccountSubAccountNumber;
    QComboBox *CBoxChartAccountSubAccountNumber;
    QLabel *LabelChartAccountDescription;
    QLineEdit *LEditChartAccountDescription;
    QLineEdit *LEditChartAccountExtReference;
    QLabel *LabelChartAccountExtReference;
    QLabel *LabelChartAccountType;
    QComboBox *CBoxlChartAccountType;
    QLabel *LabelChartAccountSubType;
    QComboBox *CBoxlChartAccountSubType;
    QGroupBox *GBoxlComments;
    QTextEdit *TEditComments;
    QGroupBox *GBoxViewChartAccounts;
    QTableView *TableViewChartsAccounts;
    QGroupBox *GBoxActions;
    QToolButton *TButtonCleanTaxType;
    QToolButton *TButtonRemoveChartAccount;
    QToolButton *TButtonExitChartAccount;
    QToolButton *TButtonSaveChartAccount;

    void setupUi(QDialog *MngFormChartAccounts)
    {
        if (MngFormChartAccounts->objectName().isEmpty())
            MngFormChartAccounts->setObjectName(QStringLiteral("MngFormChartAccounts"));
        MngFormChartAccounts->resize(750, 600);
        MngFormChartAccounts->setMinimumSize(QSize(750, 600));
        MngFormChartAccounts->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormChartAccounts->setWindowIcon(icon);
        GBoxDataChartAccounts = new QGroupBox(MngFormChartAccounts);
        GBoxDataChartAccounts->setObjectName(QStringLiteral("GBoxDataChartAccounts"));
        GBoxDataChartAccounts->setGeometry(QRect(10, 10, 590, 360));
        GBoxDataChartAccounts->setAcceptDrops(true);
        LabelChartAccountCompany = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountCompany->setObjectName(QStringLiteral("LabelChartAccountCompany"));
        LabelChartAccountCompany->setGeometry(QRect(0, 30, 120, 30));
        LabelChartAccountCompany->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditChartAccountID = new QLineEdit(GBoxDataChartAccounts);
        LEditChartAccountID->setObjectName(QStringLiteral("LEditChartAccountID"));
        LEditChartAccountID->setGeometry(QRect(200, 30, 50, 30));
        LabelChartAccountNumberAccount = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountNumberAccount->setObjectName(QStringLiteral("LabelChartAccountNumberAccount"));
        LabelChartAccountNumberAccount->setGeometry(QRect(0, 70, 120, 30));
        LabelChartAccountNumberAccount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditChartAccountNumberAccount = new QLineEdit(GBoxDataChartAccounts);
        LEditChartAccountNumberAccount->setObjectName(QStringLiteral("LEditChartAccountNumberAccount"));
        LEditChartAccountNumberAccount->setGeometry(QRect(120, 70, 150, 30));
        LEditChartAccountNumberAccount->setAlignment(Qt::AlignCenter);
        CheckBoxStatusActiveChartAccount = new QCheckBox(GBoxDataChartAccounts);
        CheckBoxStatusActiveChartAccount->setObjectName(QStringLiteral("CheckBoxStatusActiveChartAccount"));
        CheckBoxStatusActiveChartAccount->setGeometry(QRect(270, 30, 81, 30));
        LabelTaxTypeStateLongShow = new QLabel(GBoxDataChartAccounts);
        LabelTaxTypeStateLongShow->setObjectName(QStringLiteral("LabelTaxTypeStateLongShow"));
        LabelTaxTypeStateLongShow->setGeometry(QRect(200, 110, 331, 30));
        LabelTaxTypeStateLongShow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxlChartAccountCompany = new QComboBox(GBoxDataChartAccounts);
        CBoxlChartAccountCompany->setObjectName(QStringLiteral("CBoxlChartAccountCompany"));
        CBoxlChartAccountCompany->setGeometry(QRect(120, 30, 78, 30));
        CBoxChartAccountProfitCenter = new QComboBox(GBoxDataChartAccounts);
        CBoxChartAccountProfitCenter->setObjectName(QStringLiteral("CBoxChartAccountProfitCenter"));
        CBoxChartAccountProfitCenter->setGeometry(QRect(490, 30, 78, 30));
        LabelChartAccountProfitCenter = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountProfitCenter->setObjectName(QStringLiteral("LabelChartAccountProfitCenter"));
        LabelChartAccountProfitCenter->setGeometry(QRect(360, 30, 130, 30));
        LabelChartAccountProfitCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelChartAccountSubAccountNumber = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountSubAccountNumber->setObjectName(QStringLiteral("LabelChartAccountSubAccountNumber"));
        LabelChartAccountSubAccountNumber->setGeometry(QRect(350, 70, 135, 30));
        LabelChartAccountSubAccountNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxChartAccountSubAccountNumber = new QComboBox(GBoxDataChartAccounts);
        CBoxChartAccountSubAccountNumber->setObjectName(QStringLiteral("CBoxChartAccountSubAccountNumber"));
        CBoxChartAccountSubAccountNumber->setGeometry(QRect(490, 70, 78, 30));
        LabelChartAccountDescription = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountDescription->setObjectName(QStringLiteral("LabelChartAccountDescription"));
        LabelChartAccountDescription->setGeometry(QRect(0, 110, 120, 30));
        LabelChartAccountDescription->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditChartAccountDescription = new QLineEdit(GBoxDataChartAccounts);
        LEditChartAccountDescription->setObjectName(QStringLiteral("LEditChartAccountDescription"));
        LEditChartAccountDescription->setGeometry(QRect(120, 110, 450, 30));
        LEditChartAccountDescription->setAlignment(Qt::AlignCenter);
        LEditChartAccountExtReference = new QLineEdit(GBoxDataChartAccounts);
        LEditChartAccountExtReference->setObjectName(QStringLiteral("LEditChartAccountExtReference"));
        LEditChartAccountExtReference->setGeometry(QRect(120, 140, 450, 30));
        LEditChartAccountExtReference->setAlignment(Qt::AlignCenter);
        LabelChartAccountExtReference = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountExtReference->setObjectName(QStringLiteral("LabelChartAccountExtReference"));
        LabelChartAccountExtReference->setGeometry(QRect(0, 140, 120, 30));
        LabelChartAccountExtReference->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelChartAccountType = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountType->setObjectName(QStringLiteral("LabelChartAccountType"));
        LabelChartAccountType->setGeometry(QRect(0, 180, 120, 30));
        LabelChartAccountType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxlChartAccountType = new QComboBox(GBoxDataChartAccounts);
        CBoxlChartAccountType->setObjectName(QStringLiteral("CBoxlChartAccountType"));
        CBoxlChartAccountType->setGeometry(QRect(120, 180, 170, 30));
        LabelChartAccountSubType = new QLabel(GBoxDataChartAccounts);
        LabelChartAccountSubType->setObjectName(QStringLiteral("LabelChartAccountSubType"));
        LabelChartAccountSubType->setGeometry(QRect(330, 180, 70, 30));
        LabelChartAccountSubType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxlChartAccountSubType = new QComboBox(GBoxDataChartAccounts);
        CBoxlChartAccountSubType->setObjectName(QStringLiteral("CBoxlChartAccountSubType"));
        CBoxlChartAccountSubType->setGeometry(QRect(400, 180, 170, 30));
        GBoxlComments = new QGroupBox(GBoxDataChartAccounts);
        GBoxlComments->setObjectName(QStringLiteral("GBoxlComments"));
        GBoxlComments->setGeometry(QRect(10, 220, 561, 121));
        TEditComments = new QTextEdit(GBoxlComments);
        TEditComments->setObjectName(QStringLiteral("TEditComments"));
        TEditComments->setGeometry(QRect(20, 20, 521, 91));
        GBoxViewChartAccounts = new QGroupBox(MngFormChartAccounts);
        GBoxViewChartAccounts->setObjectName(QStringLiteral("GBoxViewChartAccounts"));
        GBoxViewChartAccounts->setGeometry(QRect(10, 380, 731, 200));
        TableViewChartsAccounts = new QTableView(GBoxViewChartAccounts);
        TableViewChartsAccounts->setObjectName(QStringLiteral("TableViewChartsAccounts"));
        TableViewChartsAccounts->setGeometry(QRect(10, 30, 711, 161));
        GBoxActions = new QGroupBox(MngFormChartAccounts);
        GBoxActions->setObjectName(QStringLiteral("GBoxActions"));
        GBoxActions->setGeometry(QRect(610, 10, 130, 360));
        TButtonCleanTaxType = new QToolButton(GBoxActions);
        TButtonCleanTaxType->setObjectName(QStringLiteral("TButtonCleanTaxType"));
        TButtonCleanTaxType->setGeometry(QRect(20, 105, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanTaxType->setIcon(icon1);
        TButtonCleanTaxType->setIconSize(QSize(48, 48));
        TButtonCleanTaxType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonRemoveChartAccount = new QToolButton(GBoxActions);
        TButtonRemoveChartAccount->setObjectName(QStringLiteral("TButtonRemoveChartAccount"));
        TButtonRemoveChartAccount->setGeometry(QRect(20, 190, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveChartAccount->setIcon(icon2);
        TButtonRemoveChartAccount->setIconSize(QSize(48, 48));
        TButtonRemoveChartAccount->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitChartAccount = new QToolButton(GBoxActions);
        TButtonExitChartAccount->setObjectName(QStringLiteral("TButtonExitChartAccount"));
        TButtonExitChartAccount->setGeometry(QRect(20, 275, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitChartAccount->setIcon(icon3);
        TButtonExitChartAccount->setIconSize(QSize(48, 48));
        TButtonExitChartAccount->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSaveChartAccount = new QToolButton(GBoxActions);
        TButtonSaveChartAccount->setObjectName(QStringLiteral("TButtonSaveChartAccount"));
        TButtonSaveChartAccount->setGeometry(QRect(20, 20, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveChartAccount->setIcon(icon4);
        TButtonSaveChartAccount->setIconSize(QSize(48, 48));
        TButtonSaveChartAccount->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormChartAccounts);

        QMetaObject::connectSlotsByName(MngFormChartAccounts);
    } // setupUi

    void retranslateUi(QDialog *MngFormChartAccounts)
    {
        MngFormChartAccounts->setWindowTitle(QApplication::translate("MngFormChartAccounts", "Manuten\303\247\303\243o - Planos de Contas...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataChartAccounts->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataChartAccounts->setTitle(QApplication::translate("MngFormChartAccounts", "Dados", Q_NULLPTR));
        LabelChartAccountCompany->setText(QApplication::translate("MngFormChartAccounts", "Empresa:", Q_NULLPTR));
        LabelChartAccountNumberAccount->setText(QApplication::translate("MngFormChartAccounts", "Segmento Prin.:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditChartAccountNumberAccount->setToolTip(QApplication::translate("MngFormChartAccounts", "Informar o Segmento Principal de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditChartAccountNumberAccount->setText(QString());
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveChartAccount->setToolTip(QApplication::translate("MngFormChartAccounts", "Ativar/Desativar o Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveChartAccount->setText(QApplication::translate("MngFormChartAccounts", "Ativo", Q_NULLPTR));
        LabelTaxTypeStateLongShow->setText(QString());
#ifndef QT_NO_TOOLTIP
        CBoxlChartAccountCompany->setToolTip(QApplication::translate("MngFormChartAccounts", "Selecionar o C\303\263digo da Empresa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CBoxChartAccountProfitCenter->setToolTip(QApplication::translate("MngFormChartAccounts", "Selecionar o Centro de Lucros...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelChartAccountProfitCenter->setText(QApplication::translate("MngFormChartAccounts", "Centro de Lucro:", Q_NULLPTR));
        LabelChartAccountSubAccountNumber->setText(QApplication::translate("MngFormChartAccounts", "Sub-Segmento:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxChartAccountSubAccountNumber->setToolTip(QApplication::translate("MngFormChartAccounts", "Selecionar o Sub-Segmento de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelChartAccountDescription->setText(QApplication::translate("MngFormChartAccounts", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditChartAccountDescription->setToolTip(QApplication::translate("MngFormChartAccounts", "Informar uma Descri\303\247\303\243o para Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditChartAccountDescription->setText(QString());
#ifndef QT_NO_TOOLTIP
        LEditChartAccountExtReference->setToolTip(QApplication::translate("MngFormChartAccounts", "Informar uma Refer\303\252ncia Externa para o Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditChartAccountExtReference->setText(QString());
        LabelChartAccountExtReference->setText(QApplication::translate("MngFormChartAccounts", "Refer\303\252ncia Ext.:", Q_NULLPTR));
        LabelChartAccountType->setText(QApplication::translate("MngFormChartAccounts", "Tipo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxlChartAccountType->setToolTip(QApplication::translate("MngFormChartAccounts", "Selecionar o Tipo de Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelChartAccountSubType->setText(QApplication::translate("MngFormChartAccounts", "Sub Tipo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxlChartAccountSubType->setToolTip(QApplication::translate("MngFormChartAccounts", "Selecionar o Sub-Tipo de Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxlComments->setTitle(QApplication::translate("MngFormChartAccounts", "Coment\303\241rios:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditComments->setToolTip(QApplication::translate("MngFormChartAccounts", "Informar um Coment\303\241rio Informativo para o Plano...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxViewChartAccounts->setTitle(QApplication::translate("MngFormChartAccounts", "Planos de Contas:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewChartsAccounts->setToolTip(QApplication::translate("MngFormChartAccounts", "Planos de Contas Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxActions->setTitle(QApplication::translate("MngFormChartAccounts", "A\303\247\303\265es:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanTaxType->setToolTip(QApplication::translate("MngFormChartAccounts", "Limpar dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanTaxType->setText(QApplication::translate("MngFormChartAccounts", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonRemoveChartAccount->setToolTip(QApplication::translate("MngFormChartAccounts", "Remover o Plano de Contas Selecionado, Caso n\303\243o tenha Hist\303\263ricos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveChartAccount->setText(QApplication::translate("MngFormChartAccounts", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitChartAccount->setToolTip(QApplication::translate("MngFormChartAccounts", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitChartAccount->setText(QApplication::translate("MngFormChartAccounts", "Sair", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveChartAccount->setToolTip(QApplication::translate("MngFormChartAccounts", "Salvar os dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveChartAccount->setText(QApplication::translate("MngFormChartAccounts", "Salvar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormChartAccounts: public Ui_MngFormChartAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCHARTACCOUNTS_H
