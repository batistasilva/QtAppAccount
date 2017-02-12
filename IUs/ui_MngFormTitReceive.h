/********************************************************************************
** Form generated from reading UI file 'MngFormTitReceive.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMTITRECEIVE_H
#define UI_MNGFORMTITRECEIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FormMngFiReceive
{
public:
    QGroupBox *GBoxTitulo;
    QGroupBox *GBoxNumberTit;
    QLineEdit *LEditSerachIncTit;
    QToolButton *TButtonSearchTit;
    QGroupBox *GBoxMovType;
    QComboBox *CBoxMovType;
    QToolButton *TButtonToolAddMovType;
    QGroupBox *GBoxDateMov;
    QDateEdit *DateEditDateMov;
    QGroupBox *GBoxCustomerShortName;
    QLineEdit *LEditSearchIncCustShortName;
    QToolButton *TButtonSearchCustomerShortName;
    QToolButton *TButtonToolAddCustomer;
    QGroupBox *GBoxCustomerCode;
    QToolButton *TButtonSearchCustomerCode;
    QLineEdit *LEditSearchCustomerCode;
    QGroupBox *GBoxCustomerFullName;
    QLineEdit *LEditSearchIncCustFullName;
    QToolButton *TButtonSearchCustomerFullName;
    QToolButton *TButtonToolAddCustomerFullName;
    QGroupBox *GBoxTitNf;
    QLineEdit *LEditTitNf;
    QGroupBox *GBoxNfSerie;
    QLineEdit *LEditNfSerie;
    QGroupBox *GBoxDateNfTit;
    QDateEdit *DateEditDateNfTit;
    QGroupBox *GBoxValueNfTit;
    QLineEdit *LEditValueNfTit;
    QGroupBox *GBoxTitStatus;
    QLineEdit *LEditTitStatus;
    QGroupBox *GBoxPartial;
    QComboBox *CBoxPartialSN;
    QGroupBox *GBoxQuantParts;
    QLineEdit *LEditQuantParts;
    QGroupBox *GBoxNoteTit;
    QLineEdit *LEditNoteTit;
    QGroupBox *GBoxProfitCenter;
    QLineEdit *LEditProfitCenter;
    QGroupBox *GBoxTitParts;
    QGroupBox *GBoxTitParcel;
    QLineEdit *LEditTitParcel;
    QGroupBox *GBoxValueParcelTit;
    QLineEdit *LEditValueParcelTit;
    QGroupBox *GBoxParcelType;
    QComboBox *CBoxParcelType;
    QToolButton *TButtonToolAddParcelType;
    QGroupBox *GBoxDiscountValueParcelTit;
    QLineEdit *LEditDiscountValueParcelTit;
    QToolButton *ToolButtonAdd;
    QGroupBox *GBoxDateParcelVenc;
    QDateEdit *DateEditDateParcelVenc;
    QToolButton *ToolButtonRemove;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *FormMngFiReceive)
    {
        if (FormMngFiReceive->objectName().isEmpty())
            FormMngFiReceive->setObjectName(QStringLiteral("FormMngFiReceive"));
        FormMngFiReceive->resize(1010, 710);
        FormMngFiReceive->setMinimumSize(QSize(1010, 710));
        FormMngFiReceive->setMaximumSize(QSize(1010, 710));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormMngFiReceive->setWindowIcon(icon);
        GBoxTitulo = new QGroupBox(FormMngFiReceive);
        GBoxTitulo->setObjectName(QStringLiteral("GBoxTitulo"));
        GBoxTitulo->setGeometry(QRect(10, 10, 991, 331));
        GBoxNumberTit = new QGroupBox(GBoxTitulo);
        GBoxNumberTit->setObjectName(QStringLiteral("GBoxNumberTit"));
        GBoxNumberTit->setGeometry(QRect(10, 20, 200, 60));
        LEditSerachIncTit = new QLineEdit(GBoxNumberTit);
        LEditSerachIncTit->setObjectName(QStringLiteral("LEditSerachIncTit"));
        LEditSerachIncTit->setGeometry(QRect(10, 20, 150, 30));
        LEditSerachIncTit->setAlignment(Qt::AlignCenter);
        TButtonSearchTit = new QToolButton(GBoxNumberTit);
        TButtonSearchTit->setObjectName(QStringLiteral("TButtonSearchTit"));
        TButtonSearchTit->setGeometry(QRect(160, 20, 30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/120x120/120px-Searchtool.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSearchTit->setIcon(icon1);
        GBoxMovType = new QGroupBox(GBoxTitulo);
        GBoxMovType->setObjectName(QStringLiteral("GBoxMovType"));
        GBoxMovType->setGeometry(QRect(280, 20, 200, 60));
        CBoxMovType = new QComboBox(GBoxMovType);
        CBoxMovType->setObjectName(QStringLiteral("CBoxMovType"));
        CBoxMovType->setGeometry(QRect(10, 20, 150, 30));
        TButtonToolAddMovType = new QToolButton(GBoxMovType);
        TButtonToolAddMovType->setObjectName(QStringLiteral("TButtonToolAddMovType"));
        TButtonToolAddMovType->setGeometry(QRect(160, 20, 30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/128x128/advancedsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonToolAddMovType->setIcon(icon2);
        GBoxDateMov = new QGroupBox(GBoxTitulo);
        GBoxDateMov->setObjectName(QStringLiteral("GBoxDateMov"));
        GBoxDateMov->setGeometry(QRect(560, 20, 131, 60));
        DateEditDateMov = new QDateEdit(GBoxDateMov);
        DateEditDateMov->setObjectName(QStringLiteral("DateEditDateMov"));
        DateEditDateMov->setGeometry(QRect(10, 20, 110, 30));
        DateEditDateMov->setAlignment(Qt::AlignCenter);
        GBoxCustomerShortName = new QGroupBox(GBoxTitulo);
        GBoxCustomerShortName->setObjectName(QStringLiteral("GBoxCustomerShortName"));
        GBoxCustomerShortName->setGeometry(QRect(220, 90, 321, 60));
        LEditSearchIncCustShortName = new QLineEdit(GBoxCustomerShortName);
        LEditSearchIncCustShortName->setObjectName(QStringLiteral("LEditSearchIncCustShortName"));
        LEditSearchIncCustShortName->setGeometry(QRect(10, 20, 241, 30));
        LEditSearchIncCustShortName->setAlignment(Qt::AlignCenter);
        TButtonSearchCustomerShortName = new QToolButton(GBoxCustomerShortName);
        TButtonSearchCustomerShortName->setObjectName(QStringLiteral("TButtonSearchCustomerShortName"));
        TButtonSearchCustomerShortName->setGeometry(QRect(251, 20, 30, 30));
        TButtonSearchCustomerShortName->setIcon(icon1);
        TButtonToolAddCustomer = new QToolButton(GBoxCustomerShortName);
        TButtonToolAddCustomer->setObjectName(QStringLiteral("TButtonToolAddCustomer"));
        TButtonToolAddCustomer->setGeometry(QRect(280, 20, 30, 30));
        TButtonToolAddCustomer->setIcon(icon2);
        GBoxCustomerCode = new QGroupBox(GBoxTitulo);
        GBoxCustomerCode->setObjectName(QStringLiteral("GBoxCustomerCode"));
        GBoxCustomerCode->setGeometry(QRect(10, 90, 200, 60));
        TButtonSearchCustomerCode = new QToolButton(GBoxCustomerCode);
        TButtonSearchCustomerCode->setObjectName(QStringLiteral("TButtonSearchCustomerCode"));
        TButtonSearchCustomerCode->setGeometry(QRect(161, 20, 30, 30));
        TButtonSearchCustomerCode->setIcon(icon1);
        LEditSearchCustomerCode = new QLineEdit(GBoxCustomerCode);
        LEditSearchCustomerCode->setObjectName(QStringLiteral("LEditSearchCustomerCode"));
        LEditSearchCustomerCode->setGeometry(QRect(10, 20, 150, 30));
        LEditSearchCustomerCode->setAlignment(Qt::AlignCenter);
        GBoxCustomerFullName = new QGroupBox(GBoxTitulo);
        GBoxCustomerFullName->setObjectName(QStringLiteral("GBoxCustomerFullName"));
        GBoxCustomerFullName->setGeometry(QRect(550, 90, 431, 60));
        LEditSearchIncCustFullName = new QLineEdit(GBoxCustomerFullName);
        LEditSearchIncCustFullName->setObjectName(QStringLiteral("LEditSearchIncCustFullName"));
        LEditSearchIncCustFullName->setGeometry(QRect(10, 20, 351, 30));
        LEditSearchIncCustFullName->setAlignment(Qt::AlignCenter);
        TButtonSearchCustomerFullName = new QToolButton(GBoxCustomerFullName);
        TButtonSearchCustomerFullName->setObjectName(QStringLiteral("TButtonSearchCustomerFullName"));
        TButtonSearchCustomerFullName->setGeometry(QRect(361, 20, 30, 30));
        TButtonSearchCustomerFullName->setIcon(icon1);
        TButtonToolAddCustomerFullName = new QToolButton(GBoxCustomerFullName);
        TButtonToolAddCustomerFullName->setObjectName(QStringLiteral("TButtonToolAddCustomerFullName"));
        TButtonToolAddCustomerFullName->setGeometry(QRect(390, 20, 30, 30));
        TButtonToolAddCustomerFullName->setIcon(icon2);
        GBoxTitNf = new QGroupBox(GBoxTitulo);
        GBoxTitNf->setObjectName(QStringLiteral("GBoxTitNf"));
        GBoxTitNf->setGeometry(QRect(10, 160, 141, 60));
        LEditTitNf = new QLineEdit(GBoxTitNf);
        LEditTitNf->setObjectName(QStringLiteral("LEditTitNf"));
        LEditTitNf->setGeometry(QRect(10, 20, 121, 30));
        LEditTitNf->setAlignment(Qt::AlignCenter);
        GBoxNfSerie = new QGroupBox(GBoxTitulo);
        GBoxNfSerie->setObjectName(QStringLiteral("GBoxNfSerie"));
        GBoxNfSerie->setGeometry(QRect(160, 160, 141, 60));
        LEditNfSerie = new QLineEdit(GBoxNfSerie);
        LEditNfSerie->setObjectName(QStringLiteral("LEditNfSerie"));
        LEditNfSerie->setGeometry(QRect(10, 20, 121, 30));
        LEditNfSerie->setAlignment(Qt::AlignCenter);
        GBoxDateNfTit = new QGroupBox(GBoxTitulo);
        GBoxDateNfTit->setObjectName(QStringLiteral("GBoxDateNfTit"));
        GBoxDateNfTit->setGeometry(QRect(310, 160, 141, 60));
        DateEditDateNfTit = new QDateEdit(GBoxDateNfTit);
        DateEditDateNfTit->setObjectName(QStringLiteral("DateEditDateNfTit"));
        DateEditDateNfTit->setGeometry(QRect(10, 20, 121, 30));
        DateEditDateNfTit->setAlignment(Qt::AlignCenter);
        GBoxValueNfTit = new QGroupBox(GBoxTitulo);
        GBoxValueNfTit->setObjectName(QStringLiteral("GBoxValueNfTit"));
        GBoxValueNfTit->setGeometry(QRect(460, 160, 131, 60));
        LEditValueNfTit = new QLineEdit(GBoxValueNfTit);
        LEditValueNfTit->setObjectName(QStringLiteral("LEditValueNfTit"));
        LEditValueNfTit->setGeometry(QRect(10, 20, 111, 30));
        LEditValueNfTit->setAlignment(Qt::AlignCenter);
        GBoxTitStatus = new QGroupBox(GBoxTitulo);
        GBoxTitStatus->setObjectName(QStringLiteral("GBoxTitStatus"));
        GBoxTitStatus->setGeometry(QRect(780, 20, 171, 61));
        LEditTitStatus = new QLineEdit(GBoxTitStatus);
        LEditTitStatus->setObjectName(QStringLiteral("LEditTitStatus"));
        LEditTitStatus->setGeometry(QRect(10, 20, 150, 30));
        LEditTitStatus->setAlignment(Qt::AlignCenter);
        GBoxPartial = new QGroupBox(GBoxTitulo);
        GBoxPartial->setObjectName(QStringLiteral("GBoxPartial"));
        GBoxPartial->setGeometry(QRect(600, 160, 91, 61));
        CBoxPartialSN = new QComboBox(GBoxPartial);
        CBoxPartialSN->setObjectName(QStringLiteral("CBoxPartialSN"));
        CBoxPartialSN->setGeometry(QRect(10, 20, 69, 30));
        GBoxQuantParts = new QGroupBox(GBoxTitulo);
        GBoxQuantParts->setObjectName(QStringLiteral("GBoxQuantParts"));
        GBoxQuantParts->setGeometry(QRect(700, 160, 111, 60));
        LEditQuantParts = new QLineEdit(GBoxQuantParts);
        LEditQuantParts->setObjectName(QStringLiteral("LEditQuantParts"));
        LEditQuantParts->setGeometry(QRect(10, 20, 91, 30));
        LEditQuantParts->setAlignment(Qt::AlignCenter);
        GBoxNoteTit = new QGroupBox(GBoxTitulo);
        GBoxNoteTit->setObjectName(QStringLiteral("GBoxNoteTit"));
        GBoxNoteTit->setGeometry(QRect(10, 220, 971, 101));
        LEditNoteTit = new QLineEdit(GBoxNoteTit);
        LEditNoteTit->setObjectName(QStringLiteral("LEditNoteTit"));
        LEditNoteTit->setGeometry(QRect(20, 20, 931, 71));
        GBoxProfitCenter = new QGroupBox(GBoxTitulo);
        GBoxProfitCenter->setObjectName(QStringLiteral("GBoxProfitCenter"));
        GBoxProfitCenter->setGeometry(QRect(820, 160, 141, 60));
        LEditProfitCenter = new QLineEdit(GBoxProfitCenter);
        LEditProfitCenter->setObjectName(QStringLiteral("LEditProfitCenter"));
        LEditProfitCenter->setGeometry(QRect(10, 20, 121, 30));
        LEditProfitCenter->setAlignment(Qt::AlignCenter);
        GBoxTitParts = new QGroupBox(FormMngFiReceive);
        GBoxTitParts->setObjectName(QStringLiteral("GBoxTitParts"));
        GBoxTitParts->setGeometry(QRect(10, 340, 991, 101));
        GBoxTitParcel = new QGroupBox(GBoxTitParts);
        GBoxTitParcel->setObjectName(QStringLiteral("GBoxTitParcel"));
        GBoxTitParcel->setGeometry(QRect(10, 20, 61, 60));
        LEditTitParcel = new QLineEdit(GBoxTitParcel);
        LEditTitParcel->setObjectName(QStringLiteral("LEditTitParcel"));
        LEditTitParcel->setGeometry(QRect(10, 20, 41, 30));
        LEditTitParcel->setAlignment(Qt::AlignCenter);
        GBoxValueParcelTit = new QGroupBox(GBoxTitParts);
        GBoxValueParcelTit->setObjectName(QStringLiteral("GBoxValueParcelTit"));
        GBoxValueParcelTit->setGeometry(QRect(100, 20, 111, 60));
        LEditValueParcelTit = new QLineEdit(GBoxValueParcelTit);
        LEditValueParcelTit->setObjectName(QStringLiteral("LEditValueParcelTit"));
        LEditValueParcelTit->setGeometry(QRect(10, 20, 91, 30));
        LEditValueParcelTit->setAlignment(Qt::AlignCenter);
        GBoxParcelType = new QGroupBox(GBoxTitParts);
        GBoxParcelType->setObjectName(QStringLiteral("GBoxParcelType"));
        GBoxParcelType->setGeometry(QRect(240, 20, 171, 60));
        CBoxParcelType = new QComboBox(GBoxParcelType);
        CBoxParcelType->setObjectName(QStringLiteral("CBoxParcelType"));
        CBoxParcelType->setGeometry(QRect(10, 20, 121, 30));
        TButtonToolAddParcelType = new QToolButton(GBoxParcelType);
        TButtonToolAddParcelType->setObjectName(QStringLiteral("TButtonToolAddParcelType"));
        TButtonToolAddParcelType->setGeometry(QRect(130, 20, 30, 30));
        TButtonToolAddParcelType->setIcon(icon2);
        GBoxDiscountValueParcelTit = new QGroupBox(GBoxTitParts);
        GBoxDiscountValueParcelTit->setObjectName(QStringLiteral("GBoxDiscountValueParcelTit"));
        GBoxDiscountValueParcelTit->setGeometry(QRect(440, 20, 111, 60));
        LEditDiscountValueParcelTit = new QLineEdit(GBoxDiscountValueParcelTit);
        LEditDiscountValueParcelTit->setObjectName(QStringLiteral("LEditDiscountValueParcelTit"));
        LEditDiscountValueParcelTit->setGeometry(QRect(10, 20, 91, 30));
        LEditDiscountValueParcelTit->setAlignment(Qt::AlignCenter);
        ToolButtonAdd = new QToolButton(GBoxTitParts);
        ToolButtonAdd->setObjectName(QStringLiteral("ToolButtonAdd"));
        ToolButtonAdd->setGeometry(QRect(750, 30, 91, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_success-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToolButtonAdd->setIcon(icon3);
        ToolButtonAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        GBoxDateParcelVenc = new QGroupBox(GBoxTitParts);
        GBoxDateParcelVenc->setObjectName(QStringLiteral("GBoxDateParcelVenc"));
        GBoxDateParcelVenc->setGeometry(QRect(580, 20, 141, 60));
        DateEditDateParcelVenc = new QDateEdit(GBoxDateParcelVenc);
        DateEditDateParcelVenc->setObjectName(QStringLiteral("DateEditDateParcelVenc"));
        DateEditDateParcelVenc->setGeometry(QRect(10, 20, 121, 30));
        DateEditDateParcelVenc->setAlignment(Qt::AlignCenter);
        ToolButtonRemove = new QToolButton(GBoxTitParts);
        ToolButtonRemove->setObjectName(QStringLiteral("ToolButtonRemove"));
        ToolButtonRemove->setGeometry(QRect(860, 30, 91, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Nuvola_actions_cancel-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        ToolButtonRemove->setIcon(icon4);
        ToolButtonRemove->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        groupBox = new QGroupBox(FormMngFiReceive);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 450, 801, 231));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 781, 192));

        retranslateUi(FormMngFiReceive);

        QMetaObject::connectSlotsByName(FormMngFiReceive);
    } // setupUi

    void retranslateUi(QDialog *FormMngFiReceive)
    {
        FormMngFiReceive->setWindowTitle(QApplication::translate("FormMngFiReceive", "Cadastro de T\303\255tulos a Receber", Q_NULLPTR));
        GBoxTitulo->setTitle(QApplication::translate("FormMngFiReceive", "Dados T\303\255tulo", Q_NULLPTR));
        GBoxNumberTit->setTitle(QApplication::translate("FormMngFiReceive", "N\303\272mero", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditSerachIncTit->setToolTip(QApplication::translate("FormMngFiReceive", "Campo para Inclus\303\243o e Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonSearchTit->setToolTip(QApplication::translate("FormMngFiReceive", "Permite fazer altera\303\247\303\243o nos itens dos Fabricantes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchTit->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
        GBoxMovType->setTitle(QApplication::translate("FormMngFiReceive", "Tipo de Movimento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxMovType->setToolTip(QApplication::translate("FormMngFiReceive", "Tipos de Movimentos Disponiv\303\251is...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolAddMovType->setToolTip(QApplication::translate("FormMngFiReceive", "Permite Adicionar Novos Tipos de Movimentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolAddMovType->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
        GBoxDateMov->setTitle(QApplication::translate("FormMngFiReceive", "Data de Lan\303\247amento", Q_NULLPTR));
        GBoxCustomerShortName->setTitle(QApplication::translate("FormMngFiReceive", "Nome Fantasia", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearchCustomerShortName->setToolTip(QApplication::translate("FormMngFiReceive", "Pesquisar Cliente por Nome Fantasia...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchCustomerShortName->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonToolAddCustomer->setToolTip(QApplication::translate("FormMngFiReceive", "Abre Janela para Altera\303\247\303\243o e Cadastro de Clientes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolAddCustomer->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
        GBoxCustomerCode->setTitle(QApplication::translate("FormMngFiReceive", "C\303\263digo do Cliente", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearchCustomerCode->setToolTip(QApplication::translate("FormMngFiReceive", "Permite fazer altera\303\247\303\243o nos itens dos Fabricantes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchCustomerCode->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditSearchCustomerCode->setToolTip(QApplication::translate("FormMngFiReceive", "Campo para Inclus\303\243o e Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCustomerFullName->setTitle(QApplication::translate("FormMngFiReceive", "Raz\303\243o Social", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearchCustomerFullName->setToolTip(QApplication::translate("FormMngFiReceive", "Pesquisar Cliente por Nome Fantasia...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchCustomerFullName->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonToolAddCustomerFullName->setToolTip(QApplication::translate("FormMngFiReceive", "Abre Janela para Altera\303\247\303\243o e Cadastro de Clientes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolAddCustomerFullName->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
        GBoxTitNf->setTitle(QApplication::translate("FormMngFiReceive", "Nota Fiscal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTitNf->setToolTip(QApplication::translate("FormMngFiReceive", "Informar o N\303\272mero da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNfSerie->setTitle(QApplication::translate("FormMngFiReceive", "S\303\251rie Nf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNfSerie->setToolTip(QApplication::translate("FormMngFiReceive", "Informar o N\303\272mero de S\303\251rie da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDateNfTit->setTitle(QApplication::translate("FormMngFiReceive", "Data da Nf.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DateEditDateNfTit->setToolTip(QApplication::translate("FormMngFiReceive", "Informar a data da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxValueNfTit->setTitle(QApplication::translate("FormMngFiReceive", "Valor da Nf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditValueNfTit->setToolTip(QApplication::translate("FormMngFiReceive", "Informar o N\303\272mero de S\303\251rie da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTitStatus->setTitle(QApplication::translate("FormMngFiReceive", "Situa\303\247\303\243o do T\303\255tulo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTitStatus->setToolTip(QApplication::translate("FormMngFiReceive", "Informar o N\303\272mero de S\303\251rie da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPartial->setTitle(QApplication::translate("FormMngFiReceive", "Parcelado?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxPartialSN->setToolTip(QApplication::translate("FormMngFiReceive", "Informar se o T\303\255tulo \303\251 Parcelado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxQuantParts->setTitle(QApplication::translate("FormMngFiReceive", "Quant. de Parcelas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditQuantParts->setToolTip(QApplication::translate("FormMngFiReceive", "Informar a Quant. de Parcelas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNoteTit->setTitle(QApplication::translate("FormMngFiReceive", "OBS", Q_NULLPTR));
        GBoxProfitCenter->setTitle(QApplication::translate("FormMngFiReceive", "Centro de Custo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProfitCenter->setToolTip(QApplication::translate("FormMngFiReceive", "Informar o N\303\272mero da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTitParts->setTitle(QApplication::translate("FormMngFiReceive", "Parcelas do T\303\255tulo", Q_NULLPTR));
        GBoxTitParcel->setTitle(QApplication::translate("FormMngFiReceive", "Parcela", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTitParcel->setToolTip(QApplication::translate("FormMngFiReceive", "N\303\272mero da Parcela.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxValueParcelTit->setTitle(QApplication::translate("FormMngFiReceive", "Valor da Parcela", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditValueParcelTit->setToolTip(QApplication::translate("FormMngFiReceive", "Valor da Parcela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxParcelType->setTitle(QApplication::translate("FormMngFiReceive", "Tipo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxParcelType->setToolTip(QApplication::translate("FormMngFiReceive", "Tipos de Parcela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolAddParcelType->setToolTip(QApplication::translate("FormMngFiReceive", "Permite Adicionar Novos Tipos de Parcelas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolAddParcelType->setText(QApplication::translate("FormMngFiReceive", "...", Q_NULLPTR));
        GBoxDiscountValueParcelTit->setTitle(QApplication::translate("FormMngFiReceive", "Valor de Desconto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDiscountValueParcelTit->setToolTip(QApplication::translate("FormMngFiReceive", "Valor de Desconto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ToolButtonAdd->setText(QApplication::translate("FormMngFiReceive", "Adicionar", Q_NULLPTR));
        GBoxDateParcelVenc->setTitle(QApplication::translate("FormMngFiReceive", "Data de Vencimento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DateEditDateParcelVenc->setToolTip(QApplication::translate("FormMngFiReceive", "Informar a data da Nf.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ToolButtonRemove->setText(QApplication::translate("FormMngFiReceive", "Remover", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FormMngFiReceive", "Itens", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormMngFiReceive: public Ui_FormMngFiReceive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMTITRECEIVE_H
