/********************************************************************************
** Form generated from reading UI file 'MngFormTaxType.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMTAXTYPE_H
#define UI_MNGFORMTAXTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormTaxType
{
public:
    QGroupBox *GBoxViewTaxTypes;
    QTableView *TableViewTaxTypes;
    QToolButton *TButtonRemoveTaxType;
    QToolButton *TButtonCleanTaxType;
    QGroupBox *GBoxDataTaxType;
    QLabel *LabelTaxTypeDescrip;
    QToolButton *TButtonSaveTaxType;
    QLineEdit *LEditTaxTypeID;
    QLineEdit *LEditTaxTypeDescrip;
    QLabel *LabelDescripLong;
    QLineEdit *LEditTaxTypeAccount;
    QLabel *LabelTaxTypeState;
    QLineEdit *LEditTaxTypeState;
    QLabel *LabelTaxTypeCalculationTo;
    QCheckBox *CheckBoxStatusActiveTaxType;
    QGroupBox *GBoxTaxTypeCalculationTo;
    QRadioButton *RButtonTaxTypeCalcToTotalSale;
    QRadioButton *RButtonTaxTypeCalcToTotalProduct;
    QLabel *LabelTaxTypeStateLongShow;
    QToolButton *TButtonExitTaxType;

    void setupUi(QDialog *MngFormTaxType)
    {
        if (MngFormTaxType->objectName().isEmpty())
            MngFormTaxType->setObjectName(QStringLiteral("MngFormTaxType"));
        MngFormTaxType->resize(750, 600);
        GBoxViewTaxTypes = new QGroupBox(MngFormTaxType);
        GBoxViewTaxTypes->setObjectName(QStringLiteral("GBoxViewTaxTypes"));
        GBoxViewTaxTypes->setGeometry(QRect(10, 220, 731, 261));
        TableViewTaxTypes = new QTableView(GBoxViewTaxTypes);
        TableViewTaxTypes->setObjectName(QStringLiteral("TableViewTaxTypes"));
        TableViewTaxTypes->setGeometry(QRect(20, 30, 591, 211));
        TButtonRemoveTaxType = new QToolButton(GBoxViewTaxTypes);
        TButtonRemoveTaxType->setObjectName(QStringLiteral("TButtonRemoveTaxType"));
        TButtonRemoveTaxType->setGeometry(QRect(630, 140, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveTaxType->setIcon(icon);
        TButtonRemoveTaxType->setIconSize(QSize(48, 48));
        TButtonRemoveTaxType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanTaxType = new QToolButton(GBoxViewTaxTypes);
        TButtonCleanTaxType->setObjectName(QStringLiteral("TButtonCleanTaxType"));
        TButtonCleanTaxType->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanTaxType->setIcon(icon1);
        TButtonCleanTaxType->setIconSize(QSize(48, 48));
        TButtonCleanTaxType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataTaxType = new QGroupBox(MngFormTaxType);
        GBoxDataTaxType->setObjectName(QStringLiteral("GBoxDataTaxType"));
        GBoxDataTaxType->setGeometry(QRect(10, 10, 731, 201));
        GBoxDataTaxType->setAcceptDrops(true);
        LabelTaxTypeDescrip = new QLabel(GBoxDataTaxType);
        LabelTaxTypeDescrip->setObjectName(QStringLiteral("LabelTaxTypeDescrip"));
        LabelTaxTypeDescrip->setGeometry(QRect(10, 30, 120, 30));
        LabelTaxTypeDescrip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveTaxType = new QToolButton(GBoxDataTaxType);
        TButtonSaveTaxType->setObjectName(QStringLiteral("TButtonSaveTaxType"));
        TButtonSaveTaxType->setGeometry(QRect(630, 30, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveTaxType->setIcon(icon2);
        TButtonSaveTaxType->setIconSize(QSize(48, 48));
        TButtonSaveTaxType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LEditTaxTypeID = new QLineEdit(GBoxDataTaxType);
        LEditTaxTypeID->setObjectName(QStringLiteral("LEditTaxTypeID"));
        LEditTaxTypeID->setGeometry(QRect(280, 30, 50, 30));
        LEditTaxTypeDescrip = new QLineEdit(GBoxDataTaxType);
        LEditTaxTypeDescrip->setObjectName(QStringLiteral("LEditTaxTypeDescrip"));
        LEditTaxTypeDescrip->setGeometry(QRect(130, 30, 150, 30));
        LabelDescripLong = new QLabel(GBoxDataTaxType);
        LabelDescripLong->setObjectName(QStringLiteral("LabelDescripLong"));
        LabelDescripLong->setGeometry(QRect(10, 75, 120, 22));
        LabelDescripLong->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTaxTypeAccount = new QLineEdit(GBoxDataTaxType);
        LEditTaxTypeAccount->setObjectName(QStringLiteral("LEditTaxTypeAccount"));
        LEditTaxTypeAccount->setGeometry(QRect(130, 70, 400, 30));
        LabelTaxTypeState = new QLabel(GBoxDataTaxType);
        LabelTaxTypeState->setObjectName(QStringLiteral("LabelTaxTypeState"));
        LabelTaxTypeState->setGeometry(QRect(10, 110, 120, 30));
        LabelTaxTypeState->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTaxTypeState = new QLineEdit(GBoxDataTaxType);
        LEditTaxTypeState->setObjectName(QStringLiteral("LEditTaxTypeState"));
        LEditTaxTypeState->setGeometry(QRect(130, 110, 60, 30));
        LEditTaxTypeState->setAlignment(Qt::AlignCenter);
        LabelTaxTypeCalculationTo = new QLabel(GBoxDataTaxType);
        LabelTaxTypeCalculationTo->setObjectName(QStringLiteral("LabelTaxTypeCalculationTo"));
        LabelTaxTypeCalculationTo->setGeometry(QRect(10, 150, 120, 30));
        LabelTaxTypeCalculationTo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CheckBoxStatusActiveTaxType = new QCheckBox(GBoxDataTaxType);
        CheckBoxStatusActiveTaxType->setObjectName(QStringLiteral("CheckBoxStatusActiveTaxType"));
        CheckBoxStatusActiveTaxType->setGeometry(QRect(430, 30, 100, 30));
        GBoxTaxTypeCalculationTo = new QGroupBox(GBoxDataTaxType);
        GBoxTaxTypeCalculationTo->setObjectName(QStringLiteral("GBoxTaxTypeCalculationTo"));
        GBoxTaxTypeCalculationTo->setGeometry(QRect(130, 150, 400, 31));
        RButtonTaxTypeCalcToTotalSale = new QRadioButton(GBoxTaxTypeCalculationTo);
        RButtonTaxTypeCalcToTotalSale->setObjectName(QStringLiteral("RButtonTaxTypeCalcToTotalSale"));
        RButtonTaxTypeCalcToTotalSale->setGeometry(QRect(210, 0, 151, 30));
        RButtonTaxTypeCalcToTotalProduct = new QRadioButton(GBoxTaxTypeCalculationTo);
        RButtonTaxTypeCalcToTotalProduct->setObjectName(QStringLiteral("RButtonTaxTypeCalcToTotalProduct"));
        RButtonTaxTypeCalcToTotalProduct->setGeometry(QRect(40, 0, 151, 30));
        LabelTaxTypeStateLongShow = new QLabel(GBoxDataTaxType);
        LabelTaxTypeStateLongShow->setObjectName(QStringLiteral("LabelTaxTypeStateLongShow"));
        LabelTaxTypeStateLongShow->setGeometry(QRect(200, 110, 331, 30));
        LabelTaxTypeStateLongShow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonExitTaxType = new QToolButton(MngFormTaxType);
        TButtonExitTaxType->setObjectName(QStringLiteral("TButtonExitTaxType"));
        TButtonExitTaxType->setGeometry(QRect(10, 500, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitTaxType->setIcon(icon3);
        TButtonExitTaxType->setIconSize(QSize(48, 48));
        TButtonExitTaxType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormTaxType);

        QMetaObject::connectSlotsByName(MngFormTaxType);
    } // setupUi

    void retranslateUi(QDialog *MngFormTaxType)
    {
        MngFormTaxType->setWindowTitle(QApplication::translate("MngFormTaxType", "Manuten\303\247\303\243o para Tipos de Despesas...", Q_NULLPTR));
        GBoxViewTaxTypes->setTitle(QApplication::translate("MngFormTaxType", "Despesas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewTaxTypes->setToolTip(QApplication::translate("MngFormTaxType", "Tipos de Despesas Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveTaxType->setToolTip(QApplication::translate("MngFormTaxType", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveTaxType->setText(QApplication::translate("MngFormTaxType", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanTaxType->setToolTip(QApplication::translate("MngFormTaxType", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanTaxType->setText(QApplication::translate("MngFormTaxType", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataTaxType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataTaxType->setTitle(QApplication::translate("MngFormTaxType", "Dados", Q_NULLPTR));
        LabelTaxTypeDescrip->setText(QApplication::translate("MngFormTaxType", "Apelido:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveTaxType->setToolTip(QApplication::translate("MngFormTaxType", "Salvar os dados para o Tipo de Despesa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveTaxType->setText(QApplication::translate("MngFormTaxType", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxTypeDescrip->setToolTip(QApplication::translate("MngFormTaxType", "Informar uma Sigla/Apelido/Nome para o Tipo de Despesa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDescripLong->setText(QApplication::translate("MngFormTaxType", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxTypeAccount->setToolTip(QApplication::translate("MngFormTaxType", "Informar uma Descri\303\247\303\243o Longa/Nome, para o Tipo de Despesa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTaxTypeState->setText(QApplication::translate("MngFormTaxType", "Estado:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTaxTypeState->setToolTip(QApplication::translate("MngFormTaxType", "Informar o Estado em que a Despesa \303\251 Atuante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditTaxTypeState->setText(QString());
        LabelTaxTypeCalculationTo->setText(QApplication::translate("MngFormTaxType", "Atua Sobre:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveTaxType->setToolTip(QApplication::translate("MngFormTaxType", "Ativar/Desativar o Tipo de Despesa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveTaxType->setText(QApplication::translate("MngFormTaxType", "Ativa", Q_NULLPTR));
        GBoxTaxTypeCalculationTo->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        RButtonTaxTypeCalcToTotalSale->setToolTip(QApplication::translate("MngFormTaxType", "Ao Marcar a Despesa Atuar\303\241 Sobre o Total da Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonTaxTypeCalcToTotalSale->setText(QApplication::translate("MngFormTaxType", "Total da Venda", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonTaxTypeCalcToTotalProduct->setToolTip(QApplication::translate("MngFormTaxType", "Ao Marcar a Despesa Atuar\303\241 Sobre o Total do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonTaxTypeCalcToTotalProduct->setText(QApplication::translate("MngFormTaxType", "Total do Produto", Q_NULLPTR));
        LabelTaxTypeStateLongShow->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonExitTaxType->setToolTip(QApplication::translate("MngFormTaxType", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitTaxType->setText(QApplication::translate("MngFormTaxType", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormTaxType: public Ui_MngFormTaxType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMTAXTYPE_H
