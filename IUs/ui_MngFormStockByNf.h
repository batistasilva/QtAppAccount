/********************************************************************************
** Form generated from reading UI file 'MngFormStockByNf.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSTOCKBYNF_H
#define UI_MNGFORMSTOCKBYNF_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MngFormStockByNf
{
public:
    QTabWidget *TabWidgetNf;
    QWidget *TabNfData;
    QGroupBox *GBoxDateOfBill;
    QDateEdit *DEditDateOfBill;
    QGroupBox *GBoxProductsTotal;
    QLineEdit *LEditProductTotal;
    QGroupBox *GBoxInsurance;
    QLineEdit *LEditInsurance;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QGroupBox *GBoxTransport;
    QComboBox *CBoxTransport;
    QGroupBox *GBoxFreight;
    QLineEdit *LEditFreight;
    QGroupBox *GBoxIPITax;
    QLineEdit *LEditIPITax;
    QGroupBox *GBoxNFTotal;
    QLineEdit *LEditNFTotal;
    QGroupBox *GBoxDiscount;
    QLineEdit *LEditDiscount;
    QGroupBox *GBoxPurchaseOrder;
    QComboBox *BoxPurchaseOrder;
    QGroupBox *GBoxDatePurchase;
    QDateEdit *DEditDatePurchase;
    QGroupBox *GBoxICMSTax;
    QLineEdit *LEditICMSTax;
    QGroupBox *GBoxUnitSite;
    QComboBox *CBoxLocalSite;
    QGroupBox *GBoxOverHeads;
    QLineEdit *LEditOverHeads;
    QGroupBox *GBoxBillOfEntry;
    QLineEdit *LEditBillOfEntry;
    QGroupBox *GBoxNote;
    QTextEdit *TEditNote;
    QToolButton *TButtonValidFormNf;
    QToolButton *TButtonCleanForm;
    QGroupBox *GBoxOverHeadsFixed;
    QLineEdit *LEditOverHeadsFixed;
    QGroupBox *GBoxMarkUP;
    QLineEdit *LEditMarkUP;
    QWidget *TabProducts;
    QGroupBox *GBoxFullDescription;
    QLineEdit *LEditFullDescription;
    QGroupBox *GBoxCategory;
    QComboBox *CBoxCategory;
    QGroupBox *GBoxSearchProductDesc;
    QComboBox *CBoxSearchProduct;
    QGroupBox *GBoxSubCategory;
    QComboBox *CBoxSubCategory;
    QToolButton *TButtonProductAdd;
    QGroupBox *GBoxProductCode;
    QLineEdit *LEditProductCode;
    QGroupBox *GBoxProductQuantity;
    QLineEdit *LEditProductQuantity;
    QTableView *TbViewProducts;
    QToolButton *TButtonProductDelete;
    QGroupBox *GBoxProductPrice;
    QLineEdit *LEditProductPrice;
    QToolButton *TButtonSave;
    QToolButton *TButtonExit;

    void setupUi(QDialog *MngFormStockByNf)
    {
        if (MngFormStockByNf->objectName().isEmpty())
            MngFormStockByNf->setObjectName(QStringLiteral("MngFormStockByNf"));
        MngFormStockByNf->resize(1010, 710);
        TabWidgetNf = new QTabWidget(MngFormStockByNf);
        TabWidgetNf->setObjectName(QStringLiteral("TabWidgetNf"));
        TabWidgetNf->setGeometry(QRect(0, 0, 1009, 610));
        TabNfData = new QWidget();
        TabNfData->setObjectName(QStringLiteral("TabNfData"));
        GBoxDateOfBill = new QGroupBox(TabNfData);
        GBoxDateOfBill->setObjectName(QStringLiteral("GBoxDateOfBill"));
        GBoxDateOfBill->setGeometry(QRect(500, 70, 160, 60));
        DEditDateOfBill = new QDateEdit(GBoxDateOfBill);
        DEditDateOfBill->setObjectName(QStringLiteral("DEditDateOfBill"));
        DEditDateOfBill->setGeometry(QRect(10, 20, 140, 30));
        DEditDateOfBill->setAlignment(Qt::AlignCenter);
        GBoxProductsTotal = new QGroupBox(TabNfData);
        GBoxProductsTotal->setObjectName(QStringLiteral("GBoxProductsTotal"));
        GBoxProductsTotal->setGeometry(QRect(500, 190, 160, 60));
        LEditProductTotal = new QLineEdit(GBoxProductsTotal);
        LEditProductTotal->setObjectName(QStringLiteral("LEditProductTotal"));
        LEditProductTotal->setGeometry(QRect(10, 20, 140, 30));
        GBoxInsurance = new QGroupBox(TabNfData);
        GBoxInsurance->setObjectName(QStringLiteral("GBoxInsurance"));
        GBoxInsurance->setGeometry(QRect(840, 10, 160, 60));
        LEditInsurance = new QLineEdit(GBoxInsurance);
        LEditInsurance->setObjectName(QStringLiteral("LEditInsurance"));
        LEditInsurance->setGeometry(QRect(10, 20, 140, 30));
        GBoxSupplier = new QGroupBox(TabNfData);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(10, 80, 400, 60));
        CBoxSupplier = new QComboBox(GBoxSupplier);
        CBoxSupplier->setObjectName(QStringLiteral("CBoxSupplier"));
        CBoxSupplier->setGeometry(QRect(10, 20, 381, 30));
        GBoxTransport = new QGroupBox(TabNfData);
        GBoxTransport->setObjectName(QStringLiteral("GBoxTransport"));
        GBoxTransport->setGeometry(QRect(10, 220, 400, 60));
        CBoxTransport = new QComboBox(GBoxTransport);
        CBoxTransport->setObjectName(QStringLiteral("CBoxTransport"));
        CBoxTransport->setGeometry(QRect(10, 20, 381, 30));
        GBoxFreight = new QGroupBox(TabNfData);
        GBoxFreight->setObjectName(QStringLiteral("GBoxFreight"));
        GBoxFreight->setGeometry(QRect(670, 10, 160, 60));
        LEditFreight = new QLineEdit(GBoxFreight);
        LEditFreight->setObjectName(QStringLiteral("LEditFreight"));
        LEditFreight->setGeometry(QRect(10, 20, 140, 30));
        GBoxIPITax = new QGroupBox(TabNfData);
        GBoxIPITax->setObjectName(QStringLiteral("GBoxIPITax"));
        GBoxIPITax->setGeometry(QRect(840, 70, 160, 60));
        LEditIPITax = new QLineEdit(GBoxIPITax);
        LEditIPITax->setObjectName(QStringLiteral("LEditIPITax"));
        LEditIPITax->setGeometry(QRect(10, 20, 140, 30));
        GBoxNFTotal = new QGroupBox(TabNfData);
        GBoxNFTotal->setObjectName(QStringLiteral("GBoxNFTotal"));
        GBoxNFTotal->setGeometry(QRect(670, 190, 160, 60));
        LEditNFTotal = new QLineEdit(GBoxNFTotal);
        LEditNFTotal->setObjectName(QStringLiteral("LEditNFTotal"));
        LEditNFTotal->setGeometry(QRect(10, 20, 140, 30));
        GBoxDiscount = new QGroupBox(TabNfData);
        GBoxDiscount->setObjectName(QStringLiteral("GBoxDiscount"));
        GBoxDiscount->setGeometry(QRect(670, 130, 160, 60));
        LEditDiscount = new QLineEdit(GBoxDiscount);
        LEditDiscount->setObjectName(QStringLiteral("LEditDiscount"));
        LEditDiscount->setGeometry(QRect(10, 20, 140, 30));
        GBoxPurchaseOrder = new QGroupBox(TabNfData);
        GBoxPurchaseOrder->setObjectName(QStringLiteral("GBoxPurchaseOrder"));
        GBoxPurchaseOrder->setGeometry(QRect(10, 150, 201, 60));
        BoxPurchaseOrder = new QComboBox(GBoxPurchaseOrder);
        BoxPurchaseOrder->setObjectName(QStringLiteral("BoxPurchaseOrder"));
        BoxPurchaseOrder->setGeometry(QRect(10, 20, 181, 30));
        GBoxDatePurchase = new QGroupBox(TabNfData);
        GBoxDatePurchase->setObjectName(QStringLiteral("GBoxDatePurchase"));
        GBoxDatePurchase->setGeometry(QRect(500, 130, 160, 60));
        DEditDatePurchase = new QDateEdit(GBoxDatePurchase);
        DEditDatePurchase->setObjectName(QStringLiteral("DEditDatePurchase"));
        DEditDatePurchase->setGeometry(QRect(10, 20, 140, 30));
        DEditDatePurchase->setAlignment(Qt::AlignCenter);
        GBoxICMSTax = new QGroupBox(TabNfData);
        GBoxICMSTax->setObjectName(QStringLiteral("GBoxICMSTax"));
        GBoxICMSTax->setGeometry(QRect(670, 70, 160, 60));
        LEditICMSTax = new QLineEdit(GBoxICMSTax);
        LEditICMSTax->setObjectName(QStringLiteral("LEditICMSTax"));
        LEditICMSTax->setGeometry(QRect(10, 20, 140, 30));
        GBoxUnitSite = new QGroupBox(TabNfData);
        GBoxUnitSite->setObjectName(QStringLiteral("GBoxUnitSite"));
        GBoxUnitSite->setGeometry(QRect(10, 10, 210, 60));
        CBoxLocalSite = new QComboBox(GBoxUnitSite);
        CBoxLocalSite->setObjectName(QStringLiteral("CBoxLocalSite"));
        CBoxLocalSite->setGeometry(QRect(10, 20, 191, 30));
        GBoxOverHeads = new QGroupBox(TabNfData);
        GBoxOverHeads->setObjectName(QStringLiteral("GBoxOverHeads"));
        GBoxOverHeads->setGeometry(QRect(840, 130, 160, 60));
        LEditOverHeads = new QLineEdit(GBoxOverHeads);
        LEditOverHeads->setObjectName(QStringLiteral("LEditOverHeads"));
        LEditOverHeads->setGeometry(QRect(10, 20, 140, 30));
        GBoxBillOfEntry = new QGroupBox(TabNfData);
        GBoxBillOfEntry->setObjectName(QStringLiteral("GBoxBillOfEntry"));
        GBoxBillOfEntry->setGeometry(QRect(500, 10, 160, 60));
        LEditBillOfEntry = new QLineEdit(GBoxBillOfEntry);
        LEditBillOfEntry->setObjectName(QStringLiteral("LEditBillOfEntry"));
        LEditBillOfEntry->setGeometry(QRect(10, 20, 140, 30));
        LEditBillOfEntry->setAlignment(Qt::AlignCenter);
        GBoxNote = new QGroupBox(TabNfData);
        GBoxNote->setObjectName(QStringLiteral("GBoxNote"));
        GBoxNote->setGeometry(QRect(10, 330, 991, 131));
        TEditNote = new QTextEdit(GBoxNote);
        TEditNote->setObjectName(QStringLiteral("TEditNote"));
        TEditNote->setGeometry(QRect(10, 20, 971, 91));
        TButtonValidFormNf = new QToolButton(TabNfData);
        TButtonValidFormNf->setObjectName(QStringLiteral("TButtonValidFormNf"));
        TButtonValidFormNf->setGeometry(QRect(810, 470, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidFormNf->setIcon(icon);
        TButtonValidFormNf->setIconSize(QSize(48, 48));
        TButtonValidFormNf->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(TabNfData);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(910, 470, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon1);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxOverHeadsFixed = new QGroupBox(TabNfData);
        GBoxOverHeadsFixed->setObjectName(QStringLiteral("GBoxOverHeadsFixed"));
        GBoxOverHeadsFixed->setGeometry(QRect(840, 190, 160, 60));
        LEditOverHeadsFixed = new QLineEdit(GBoxOverHeadsFixed);
        LEditOverHeadsFixed->setObjectName(QStringLiteral("LEditOverHeadsFixed"));
        LEditOverHeadsFixed->setGeometry(QRect(10, 20, 140, 30));
        GBoxMarkUP = new QGroupBox(TabNfData);
        GBoxMarkUP->setObjectName(QStringLiteral("GBoxMarkUP"));
        GBoxMarkUP->setGeometry(QRect(500, 250, 160, 60));
        LEditMarkUP = new QLineEdit(GBoxMarkUP);
        LEditMarkUP->setObjectName(QStringLiteral("LEditMarkUP"));
        LEditMarkUP->setGeometry(QRect(10, 20, 140, 30));
        TabWidgetNf->addTab(TabNfData, QString());
        TabProducts = new QWidget();
        TabProducts->setObjectName(QStringLiteral("TabProducts"));
        GBoxFullDescription = new QGroupBox(TabProducts);
        GBoxFullDescription->setObjectName(QStringLiteral("GBoxFullDescription"));
        GBoxFullDescription->setGeometry(QRect(160, 120, 520, 60));
        LEditFullDescription = new QLineEdit(GBoxFullDescription);
        LEditFullDescription->setObjectName(QStringLiteral("LEditFullDescription"));
        LEditFullDescription->setGeometry(QRect(10, 20, 500, 30));
        GBoxCategory = new QGroupBox(TabProducts);
        GBoxCategory->setObjectName(QStringLiteral("GBoxCategory"));
        GBoxCategory->setGeometry(QRect(10, 0, 221, 60));
        CBoxCategory = new QComboBox(GBoxCategory);
        CBoxCategory->setObjectName(QStringLiteral("CBoxCategory"));
        CBoxCategory->setGeometry(QRect(10, 20, 200, 30));
        GBoxSearchProductDesc = new QGroupBox(TabProducts);
        GBoxSearchProductDesc->setObjectName(QStringLiteral("GBoxSearchProductDesc"));
        GBoxSearchProductDesc->setGeometry(QRect(10, 60, 520, 60));
        CBoxSearchProduct = new QComboBox(GBoxSearchProductDesc);
        CBoxSearchProduct->setObjectName(QStringLiteral("CBoxSearchProduct"));
        CBoxSearchProduct->setGeometry(QRect(10, 20, 500, 30));
        GBoxSubCategory = new QGroupBox(TabProducts);
        GBoxSubCategory->setObjectName(QStringLiteral("GBoxSubCategory"));
        GBoxSubCategory->setGeometry(QRect(270, 0, 221, 60));
        CBoxSubCategory = new QComboBox(GBoxSubCategory);
        CBoxSubCategory->setObjectName(QStringLiteral("CBoxSubCategory"));
        CBoxSubCategory->setGeometry(QRect(10, 20, 200, 30));
        TButtonProductAdd = new QToolButton(TabProducts);
        TButtonProductAdd->setObjectName(QStringLiteral("TButtonProductAdd"));
        TButtonProductAdd->setGeometry(QRect(850, 210, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_success-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductAdd->setIcon(icon2);
        TButtonProductAdd->setIconSize(QSize(48, 48));
        TButtonProductAdd->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProductCode = new QGroupBox(TabProducts);
        GBoxProductCode->setObjectName(QStringLiteral("GBoxProductCode"));
        GBoxProductCode->setGeometry(QRect(10, 120, 141, 60));
        LEditProductCode = new QLineEdit(GBoxProductCode);
        LEditProductCode->setObjectName(QStringLiteral("LEditProductCode"));
        LEditProductCode->setGeometry(QRect(10, 20, 120, 30));
        GBoxProductQuantity = new QGroupBox(TabProducts);
        GBoxProductQuantity->setObjectName(QStringLiteral("GBoxProductQuantity"));
        GBoxProductQuantity->setGeometry(QRect(690, 120, 131, 60));
        LEditProductQuantity = new QLineEdit(GBoxProductQuantity);
        LEditProductQuantity->setObjectName(QStringLiteral("LEditProductQuantity"));
        LEditProductQuantity->setGeometry(QRect(10, 20, 113, 27));
        TbViewProducts = new QTableView(TabProducts);
        TbViewProducts->setObjectName(QStringLiteral("TbViewProducts"));
        TbViewProducts->setGeometry(QRect(10, 200, 811, 361));
        TButtonProductDelete = new QToolButton(TabProducts);
        TButtonProductDelete->setObjectName(QStringLiteral("TButtonProductDelete"));
        TButtonProductDelete->setGeometry(QRect(850, 310, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_fail1-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductDelete->setIcon(icon3);
        TButtonProductDelete->setIconSize(QSize(48, 48));
        TButtonProductDelete->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProductPrice = new QGroupBox(TabProducts);
        GBoxProductPrice->setObjectName(QStringLiteral("GBoxProductPrice"));
        GBoxProductPrice->setGeometry(QRect(830, 120, 131, 60));
        LEditProductPrice = new QLineEdit(GBoxProductPrice);
        LEditProductPrice->setObjectName(QStringLiteral("LEditProductPrice"));
        LEditProductPrice->setGeometry(QRect(10, 20, 113, 27));
        TabWidgetNf->addTab(TabProducts, QString());
        TButtonSave = new QToolButton(MngFormStockByNf);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setGeometry(QRect(110, 620, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon4);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExit = new QToolButton(MngFormStockByNf);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(10, 620, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon5);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormStockByNf);

        TabWidgetNf->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MngFormStockByNf);
    } // setupUi

    void retranslateUi(QDialog *MngFormStockByNf)
    {
        MngFormStockByNf->setWindowTitle(QApplication::translate("MngFormStockByNf", "MngFormStockByNf", Q_NULLPTR));
        GBoxDateOfBill->setTitle(QApplication::translate("MngFormStockByNf", "Data da Nf.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditDateOfBill->setToolTip(QApplication::translate("MngFormStockByNf", "Informe a data da Emiss\303\243o da Nota Fiscal de Entradas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductsTotal->setTitle(QApplication::translate("MngFormStockByNf", "Total Produtos R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductTotal->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Total de Produtos da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxInsurance->setTitle(QApplication::translate("MngFormStockByNf", "Seguro R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditInsurance->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Valor do Seguro, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormStockByNf", "Fornecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTransport->setTitle(QApplication::translate("MngFormStockByNf", "Transportadora", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxTransport->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar a Transportadora de Transportes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFreight->setTitle(QApplication::translate("MngFormStockByNf", "Frete R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFreight->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Frete de Recebimento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxIPITax->setTitle(QApplication::translate("MngFormStockByNf", "IPI R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditIPITax->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Total de IPI da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNFTotal->setTitle(QApplication::translate("MngFormStockByNf", "Total Notal Fiscal R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNFTotal->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Valor Total da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDiscount->setTitle(QApplication::translate("MngFormStockByNf", " Desconto R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDiscount->setToolTip(QApplication::translate("MngFormStockByNf", "Informar os Descontos, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPurchaseOrder->setTitle(QApplication::translate("MngFormStockByNf", "N\303\272mero Pedido", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BoxPurchaseOrder->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar o N\303\272mero do Pedido de Compras, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDatePurchase->setTitle(QApplication::translate("MngFormStockByNf", "Data do Pedido", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditDatePurchase->setToolTip(QApplication::translate("MngFormStockByNf", "Informar a data de Gera\303\247\303\243o do Pedido...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxICMSTax->setTitle(QApplication::translate("MngFormStockByNf", "ICMS Total R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditICMSTax->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Total de ICMS da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxUnitSite->setTitle(QApplication::translate("MngFormStockByNf", "Unidade", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSite->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar o Local Deposito/Filial do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOverHeads->setTitle(QApplication::translate("MngFormStockByNf", "Despesas Variaveis R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditOverHeads->setToolTip(QApplication::translate("MngFormStockByNf", "Informar Outras Despesas, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBillOfEntry->setTitle(QApplication::translate("MngFormStockByNf", "Nota Fiscal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditBillOfEntry->setToolTip(QApplication::translate("MngFormStockByNf", "Informe o N\303\272mero da Nota Fiscal de Entrada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNote->setTitle(QApplication::translate("MngFormStockByNf", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNote->setToolTip(QApplication::translate("MngFormStockByNf", "Informar uma Observa\303\247\303\243o para a Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonValidFormNf->setToolTip(QApplication::translate("MngFormStockByNf", "Validar campos e dados..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidFormNf->setText(QApplication::translate("MngFormStockByNf", "Validar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormStockByNf", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormStockByNf", "Limpar", Q_NULLPTR));
        GBoxOverHeadsFixed->setTitle(QApplication::translate("MngFormStockByNf", "Despesas Fixas R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditOverHeadsFixed->setToolTip(QApplication::translate("MngFormStockByNf", "Informar Outras Despesas, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxMarkUP->setTitle(QApplication::translate("MngFormStockByNf", "Mark-UP     % ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditMarkUP->setToolTip(QApplication::translate("MngFormStockByNf", "Informar Outras Despesas, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetNf->setTabText(TabWidgetNf->indexOf(TabNfData), QApplication::translate("MngFormStockByNf", "Dados Nota Fiscal", Q_NULLPTR));
        GBoxFullDescription->setTitle(QApplication::translate("MngFormStockByNf", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescription->setToolTip(QApplication::translate("MngFormStockByNf", "Mostra a  Descri\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCategory->setTitle(QApplication::translate("MngFormStockByNf", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCategory->setToolTip(QApplication::translate("MngFormStockByNf", "Seleciona a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSearchProductDesc->setTitle(QApplication::translate("MngFormStockByNf", "Pesquisar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSearchProduct->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar ou Digitar o C\303\263digo/Descri\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSubCategory->setTitle(QApplication::translate("MngFormStockByNf", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSubCategory->setToolTip(QApplication::translate("MngFormStockByNf", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductAdd->setToolTip(QApplication::translate("MngFormStockByNf", "Clicar para Adicionar o  Produto na Lista de Recebimentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductAdd->setText(QApplication::translate("MngFormStockByNf", "Adicionar", Q_NULLPTR));
        GBoxProductCode->setTitle(QApplication::translate("MngFormStockByNf", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductCode->setToolTip(QApplication::translate("MngFormStockByNf", "Mostra o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductQuantity->setTitle(QApplication::translate("MngFormStockByNf", "Quant.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductQuantity->setToolTip(QApplication::translate("MngFormStockByNf", "Informar a Quantidade a Ser Lan\303\247ada da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TbViewProducts->setToolTip(QApplication::translate("MngFormStockByNf", "Tabela com os Produtos da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductDelete->setToolTip(QApplication::translate("MngFormStockByNf", "Remove um Item da Lista,  para Corre\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductDelete->setText(QApplication::translate("MngFormStockByNf", "Remover", Q_NULLPTR));
        GBoxProductPrice->setTitle(QApplication::translate("MngFormStockByNf", "Pre\303\247o R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPrice->setToolTip(QApplication::translate("MngFormStockByNf", "Informar o Custo de Compra do Produto da Nota Fiscal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetNf->setTabText(TabWidgetNf->indexOf(TabProducts), QApplication::translate("MngFormStockByNf", "Intens da Nota Fiscal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("MngFormStockByNf", "Salva os Dados de Recebimento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("MngFormStockByNf", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormStockByNf", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormStockByNf", "Sa\303\255da", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormStockByNf: public Ui_MngFormStockByNf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSTOCKBYNF_H
