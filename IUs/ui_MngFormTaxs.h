/********************************************************************************
** Form generated from reading UI file 'MngFormTaxs.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMTAXS_H
#define UI_MNGFORMTAXS_H

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
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormTaxs
{
public:
    QGroupBox *GBoxDataTax;
    QLabel *LabelTaxDescrip;
    QToolButton *TButtonSaveTax;
    QLineEdit *LEditTaxID;
    QLineEdit *LEditTaxDescrip;
    QGroupBox *GBoxStatusActiveTax;
    QCheckBox *CheckBoxStatusActiveTax;
    QLabel *LabelTaxType;
    QComboBox *CBoxTaxType;
    QLabel *LabelTaxAccount;
    QLineEdit *LEditTaxAccount;
    QLabel *LabelTaxPercent;
    QLineEdit *LEditTaxPercent;
    QLineEdit *LEditTaxValue;
    QLabel *LabelTaxValue;
    QToolButton *TButtonToolsTypeOfTaxs;
    QToolButton *TButtonTaxToolsAccounts;
    QLabel *LabelResultAccount;
    QToolButton *TButtonExitTax;
    QGroupBox *GBoxViewTax;
    QTableView *TableViewTaxs;
    QToolButton *TButtonRemoveTax;
    QToolButton *TButtonCleanTax;

    void setupUi(QDialog *MngFormTaxs)
    {
        if (MngFormTaxs->objectName().isEmpty())
            MngFormTaxs->setObjectName(QStringLiteral("MngFormTaxs"));
        MngFormTaxs->resize(750, 600);
        MngFormTaxs->setMinimumSize(QSize(750, 600));
        MngFormTaxs->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormTaxs->setWindowIcon(icon);
        GBoxDataTax = new QGroupBox(MngFormTaxs);
        GBoxDataTax->setObjectName(QStringLiteral("GBoxDataTax"));
        GBoxDataTax->setGeometry(QRect(10, 10, 731, 221));
        GBoxDataTax->setAcceptDrops(true);
        LabelTaxDescrip = new QLabel(GBoxDataTax);
        LabelTaxDescrip->setObjectName(QStringLiteral("LabelTaxDescrip"));
        LabelTaxDescrip->setGeometry(QRect(10, 70, 120, 30));
        LabelTaxDescrip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveTax = new QToolButton(GBoxDataTax);
        TButtonSaveTax->setObjectName(QStringLiteral("TButtonSaveTax"));
        TButtonSaveTax->setGeometry(QRect(630, 30, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveTax->setIcon(icon1);
        TButtonSaveTax->setIconSize(QSize(48, 48));
        TButtonSaveTax->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LEditTaxID = new QLineEdit(GBoxDataTax);
        LEditTaxID->setObjectName(QStringLiteral("LEditTaxID"));
        LEditTaxID->setGeometry(QRect(210, 70, 50, 30));
        LEditTaxDescrip = new QLineEdit(GBoxDataTax);
        LEditTaxDescrip->setObjectName(QStringLiteral("LEditTaxDescrip"));
        LEditTaxDescrip->setGeometry(QRect(130, 70, 80, 30));
        GBoxStatusActiveTax = new QGroupBox(GBoxDataTax);
        GBoxStatusActiveTax->setObjectName(QStringLiteral("GBoxStatusActiveTax"));
        GBoxStatusActiveTax->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxStatusActiveTax = new QCheckBox(GBoxStatusActiveTax);
        CheckBoxStatusActiveTax->setObjectName(QStringLiteral("CheckBoxStatusActiveTax"));
        CheckBoxStatusActiveTax->setGeometry(QRect(50, 10, 100, 30));
        LabelTaxType = new QLabel(GBoxDataTax);
        LabelTaxType->setObjectName(QStringLiteral("LabelTaxType"));
        LabelTaxType->setGeometry(QRect(9, 30, 121, 30));
        LabelTaxType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxTaxType = new QComboBox(GBoxDataTax);
        CBoxTaxType->setObjectName(QStringLiteral("CBoxTaxType"));
        CBoxTaxType->setGeometry(QRect(130, 30, 130, 30));
        CBoxTaxType->setEditable(true);
        LabelTaxAccount = new QLabel(GBoxDataTax);
        LabelTaxAccount->setObjectName(QStringLiteral("LabelTaxAccount"));
        LabelTaxAccount->setGeometry(QRect(10, 115, 120, 22));
        LabelTaxAccount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTaxAccount = new QLineEdit(GBoxDataTax);
        LEditTaxAccount->setObjectName(QStringLiteral("LEditTaxAccount"));
        LEditTaxAccount->setGeometry(QRect(130, 110, 130, 30));
        LabelTaxPercent = new QLabel(GBoxDataTax);
        LabelTaxPercent->setObjectName(QStringLiteral("LabelTaxPercent"));
        LabelTaxPercent->setGeometry(QRect(10, 150, 120, 30));
        LabelTaxPercent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTaxPercent = new QLineEdit(GBoxDataTax);
        LEditTaxPercent->setObjectName(QStringLiteral("LEditTaxPercent"));
        LEditTaxPercent->setGeometry(QRect(130, 150, 60, 30));
        LEditTaxPercent->setAlignment(Qt::AlignCenter);
        LEditTaxValue = new QLineEdit(GBoxDataTax);
        LEditTaxValue->setObjectName(QStringLiteral("LEditTaxValue"));
        LEditTaxValue->setGeometry(QRect(410, 150, 100, 30));
        LEditTaxValue->setAlignment(Qt::AlignCenter);
        LabelTaxValue = new QLabel(GBoxDataTax);
        LabelTaxValue->setObjectName(QStringLiteral("LabelTaxValue"));
        LabelTaxValue->setGeometry(QRect(290, 150, 120, 30));
        LabelTaxValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonToolsTypeOfTaxs = new QToolButton(GBoxDataTax);
        TButtonToolsTypeOfTaxs->setObjectName(QStringLiteral("TButtonToolsTypeOfTaxs"));
        TButtonToolsTypeOfTaxs->setGeometry(QRect(260, 30, 30, 30));
        TButtonToolsTypeOfTaxs->setIcon(icon);
        TButtonTaxToolsAccounts = new QToolButton(GBoxDataTax);
        TButtonTaxToolsAccounts->setObjectName(QStringLiteral("TButtonTaxToolsAccounts"));
        TButtonTaxToolsAccounts->setGeometry(QRect(260, 110, 30, 30));
        TButtonTaxToolsAccounts->setIcon(icon);
        LabelResultAccount = new QLabel(GBoxDataTax);
        LabelResultAccount->setObjectName(QStringLiteral("LabelResultAccount"));
        LabelResultAccount->setGeometry(QRect(300, 110, 311, 30));
        TButtonExitTax = new QToolButton(MngFormTaxs);
        TButtonExitTax->setObjectName(QStringLiteral("TButtonExitTax"));
        TButtonExitTax->setGeometry(QRect(10, 500, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitTax->setIcon(icon2);
        TButtonExitTax->setIconSize(QSize(48, 48));
        TButtonExitTax->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxViewTax = new QGroupBox(MngFormTaxs);
        GBoxViewTax->setObjectName(QStringLiteral("GBoxViewTax"));
        GBoxViewTax->setGeometry(QRect(10, 230, 731, 251));
        TableViewTaxs = new QTableView(GBoxViewTax);
        TableViewTaxs->setObjectName(QStringLiteral("TableViewTaxs"));
        TableViewTaxs->setGeometry(QRect(20, 30, 591, 211));
        TButtonRemoveTax = new QToolButton(GBoxViewTax);
        TButtonRemoveTax->setObjectName(QStringLiteral("TButtonRemoveTax"));
        TButtonRemoveTax->setGeometry(QRect(630, 140, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveTax->setIcon(icon3);
        TButtonRemoveTax->setIconSize(QSize(48, 48));
        TButtonRemoveTax->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanTax = new QToolButton(GBoxViewTax);
        TButtonCleanTax->setObjectName(QStringLiteral("TButtonCleanTax"));
        TButtonCleanTax->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanTax->setIcon(icon4);
        TButtonCleanTax->setIconSize(QSize(48, 48));
        TButtonCleanTax->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormTaxs);

        QMetaObject::connectSlotsByName(MngFormTaxs);
    } // setupUi

    void retranslateUi(QDialog *MngFormTaxs)
    {
        MngFormTaxs->setWindowTitle(QApplication::translate("MngFormTaxs", "Manuten\303\247\303\243o de Impostos/Fretes..", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataTax->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataTax->setTitle(QApplication::translate("MngFormTaxs", "Dados", Q_NULLPTR));
        LabelTaxDescrip->setText(QApplication::translate("MngFormTaxs", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveTax->setToolTip(QApplication::translate("MngFormTaxs", "Salvar os dados para a Unidade de Medida...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveTax->setText(QApplication::translate("MngFormTaxs", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxDescrip->setToolTip(QApplication::translate("MngFormTaxs", "Informar a Unidade de Medida para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusActiveTax->setTitle(QApplication::translate("MngFormTaxs", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveTax->setToolTip(QApplication::translate("MngFormTaxs", "Ativar/Desativar a Unidade de Medida para ser ou n\303\243o Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveTax->setText(QApplication::translate("MngFormTaxs", "Ativa", Q_NULLPTR));
        LabelTaxType->setText(QApplication::translate("MngFormTaxs", "Tipo de Despesa:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxTaxType->setToolTip(QApplication::translate("MngFormTaxs", "Informar um C\303\263digo para a Condi\303\247\303\243o de Pagamento Desejada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTaxAccount->setText(QApplication::translate("MngFormTaxs", "Conta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxAccount->setToolTip(QApplication::translate("MngFormTaxs", "Informar a Unidade de Medida para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTaxPercent->setText(QApplication::translate("MngFormTaxs", "Percentual(%):", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxPercent->setToolTip(QApplication::translate("MngFormTaxs", "Informar um Percentual de Desconto para Recebimento/Pagamento  Antecipado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditTaxValue->setToolTip(QApplication::translate("MngFormTaxs", "Informar um Percentual de Desconto para Recebimento/Pagamento  Antecipado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTaxValue->setText(QApplication::translate("MngFormTaxs", "Valor R$:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonToolsTypeOfTaxs->setToolTip(QApplication::translate("MngFormTaxs", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolsTypeOfTaxs->setText(QApplication::translate("MngFormTaxs", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonTaxToolsAccounts->setToolTip(QApplication::translate("MngFormTaxs", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonTaxToolsAccounts->setText(QApplication::translate("MngFormTaxs", "...", Q_NULLPTR));
        LabelResultAccount->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonExitTax->setToolTip(QApplication::translate("MngFormTaxs", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitTax->setText(QApplication::translate("MngFormTaxs", "Sair", Q_NULLPTR));
        GBoxViewTax->setTitle(QApplication::translate("MngFormTaxs", "Despesas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewTaxs->setToolTip(QApplication::translate("MngFormTaxs", "Unidades de Medidas Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveTax->setToolTip(QApplication::translate("MngFormTaxs", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveTax->setText(QApplication::translate("MngFormTaxs", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanTax->setToolTip(QApplication::translate("MngFormTaxs", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanTax->setText(QApplication::translate("MngFormTaxs", "Limpar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormTaxs: public Ui_MngFormTaxs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMTAXS_H
