/********************************************************************************
** Form generated from reading UI file 'MngFormReceiptCash.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMRECEIPTCASH_H
#define UI_MNGFORMRECEIPTCASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormReceiptCash
{
public:
    QGroupBox *GBoxStartWinReceipt;
    QLabel *LabelTerminal;
    QLineEdit *LEditTerminal;
    QGroupBox *GBoxDateNow;
    QLineEdit *LEditDateNow;
    QLabel *LabelUserOperation;
    QLineEdit *LEditUserOperation;
    QLabel *LabelCashNumber;
    QLineEdit *LEditCashNumber;
    QGroupBox *GBoxCustomeAttend;
    QLabel *LabelSalesPerson;
    QComboBox *CBoxSalesPerson;
    QLabel *LabelSalesPersonOrdem;
    QComboBox *CBoxSalesPersonOrdem;
    QLabel *LabelSalesPersonClient;
    QLineEdit *LEditSalesPersonClient;
    QGroupBox *GBoxTableSales;
    QToolButton *TButtonProductDelete;
    QTableWidget *TWidgetTableCashReceipt;
    QToolButton *TButtonProductAdd;
    QLabel *LabelTotalSale;
    QLabel *LabelResultTotalSale;
    QLabel *LabelProductCode;
    QToolButton *TButtonProductSearch;
    QComboBox *CBoxProductCode;
    QLabel *LabelFullDescription;
    QLineEdit *LEditFullDescription;
    QLabel *LabelActualStock;
    QLineEdit *LEditActualStock;
    QLabel *LabelProductPrice;
    QLineEdit *LEditProductPrice;
    QLabel *LabelProductQuantity;
    QLineEdit *LEditProductQuantity;
    QToolButton *TButtonExit;
    QToolButton *TButtonTransform;
    QToolButton *TButtonCancelSale;
    QToolButton *TButtonPrint;
    QToolButton *TButtonCleanForm;

    void setupUi(QDialog *MngFormReceiptCash)
    {
        if (MngFormReceiptCash->objectName().isEmpty())
            MngFormReceiptCash->setObjectName(QStringLiteral("MngFormReceiptCash"));
        MngFormReceiptCash->resize(1010, 710);
        GBoxStartWinReceipt = new QGroupBox(MngFormReceiptCash);
        GBoxStartWinReceipt->setObjectName(QStringLiteral("GBoxStartWinReceipt"));
        GBoxStartWinReceipt->setGeometry(QRect(10, 10, 991, 91));
        LabelTerminal = new QLabel(GBoxStartWinReceipt);
        LabelTerminal->setObjectName(QStringLiteral("LabelTerminal"));
        LabelTerminal->setGeometry(QRect(10, 10, 90, 30));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        LabelTerminal->setFont(font);
        LabelTerminal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTerminal = new QLineEdit(GBoxStartWinReceipt);
        LEditTerminal->setObjectName(QStringLiteral("LEditTerminal"));
        LEditTerminal->setGeometry(QRect(100, 10, 170, 30));
        LEditTerminal->setAlignment(Qt::AlignCenter);
        GBoxDateNow = new QGroupBox(GBoxStartWinReceipt);
        GBoxDateNow->setObjectName(QStringLiteral("GBoxDateNow"));
        GBoxDateNow->setGeometry(QRect(830, 0, 150, 60));
        LEditDateNow = new QLineEdit(GBoxDateNow);
        LEditDateNow->setObjectName(QStringLiteral("LEditDateNow"));
        LEditDateNow->setGeometry(QRect(10, 20, 130, 30));
        LEditDateNow->setAlignment(Qt::AlignCenter);
        LabelUserOperation = new QLabel(GBoxStartWinReceipt);
        LabelUserOperation->setObjectName(QStringLiteral("LabelUserOperation"));
        LabelUserOperation->setGeometry(QRect(10, 50, 90, 30));
        LabelUserOperation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditUserOperation = new QLineEdit(GBoxStartWinReceipt);
        LEditUserOperation->setObjectName(QStringLiteral("LEditUserOperation"));
        LEditUserOperation->setGeometry(QRect(100, 50, 170, 30));
        LEditUserOperation->setAlignment(Qt::AlignCenter);
        LabelCashNumber = new QLabel(GBoxStartWinReceipt);
        LabelCashNumber->setObjectName(QStringLiteral("LabelCashNumber"));
        LabelCashNumber->setGeometry(QRect(290, 50, 116, 30));
        LabelCashNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCashNumber = new QLineEdit(GBoxStartWinReceipt);
        LEditCashNumber->setObjectName(QStringLiteral("LEditCashNumber"));
        LEditCashNumber->setGeometry(QRect(410, 50, 130, 30));
        LEditCashNumber->setAlignment(Qt::AlignCenter);
        GBoxCustomeAttend = new QGroupBox(MngFormReceiptCash);
        GBoxCustomeAttend->setObjectName(QStringLiteral("GBoxCustomeAttend"));
        GBoxCustomeAttend->setGeometry(QRect(10, 110, 991, 491));
        LabelSalesPerson = new QLabel(GBoxCustomeAttend);
        LabelSalesPerson->setObjectName(QStringLiteral("LabelSalesPerson"));
        LabelSalesPerson->setGeometry(QRect(10, 30, 91, 30));
        LabelSalesPerson->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxSalesPerson = new QComboBox(GBoxCustomeAttend);
        CBoxSalesPerson->setObjectName(QStringLiteral("CBoxSalesPerson"));
        CBoxSalesPerson->setGeometry(QRect(100, 30, 150, 30));
        LabelSalesPersonOrdem = new QLabel(GBoxCustomeAttend);
        LabelSalesPersonOrdem->setObjectName(QStringLiteral("LabelSalesPersonOrdem"));
        LabelSalesPersonOrdem->setGeometry(QRect(301, 30, 60, 30));
        LabelSalesPersonOrdem->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxSalesPersonOrdem = new QComboBox(GBoxCustomeAttend);
        CBoxSalesPersonOrdem->setObjectName(QStringLiteral("CBoxSalesPersonOrdem"));
        CBoxSalesPersonOrdem->setGeometry(QRect(360, 30, 150, 30));
        LabelSalesPersonClient = new QLabel(GBoxCustomeAttend);
        LabelSalesPersonClient->setObjectName(QStringLiteral("LabelSalesPersonClient"));
        LabelSalesPersonClient->setGeometry(QRect(520, 30, 55, 30));
        LabelSalesPersonClient->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditSalesPersonClient = new QLineEdit(GBoxCustomeAttend);
        LEditSalesPersonClient->setObjectName(QStringLiteral("LEditSalesPersonClient"));
        LEditSalesPersonClient->setGeometry(QRect(580, 30, 401, 30));
        LEditSalesPersonClient->setAlignment(Qt::AlignCenter);
        GBoxTableSales = new QGroupBox(GBoxCustomeAttend);
        GBoxTableSales->setObjectName(QStringLiteral("GBoxTableSales"));
        GBoxTableSales->setGeometry(QRect(10, 150, 971, 271));
        TButtonProductDelete = new QToolButton(GBoxTableSales);
        TButtonProductDelete->setObjectName(QStringLiteral("TButtonProductDelete"));
        TButtonProductDelete->setGeometry(QRect(860, 135, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_fail1-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductDelete->setIcon(icon);
        TButtonProductDelete->setIconSize(QSize(48, 48));
        TButtonProductDelete->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TWidgetTableCashReceipt = new QTableWidget(GBoxTableSales);
        TWidgetTableCashReceipt->setObjectName(QStringLiteral("TWidgetTableCashReceipt"));
        TWidgetTableCashReceipt->setGeometry(QRect(10, 30, 821, 201));
        TButtonProductAdd = new QToolButton(GBoxTableSales);
        TButtonProductAdd->setObjectName(QStringLiteral("TButtonProductAdd"));
        TButtonProductAdd->setGeometry(QRect(860, 45, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_success-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductAdd->setIcon(icon1);
        TButtonProductAdd->setIconSize(QSize(48, 48));
        TButtonProductAdd->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LabelTotalSale = new QLabel(GBoxTableSales);
        LabelTotalSale->setObjectName(QStringLiteral("LabelTotalSale"));
        LabelTotalSale->setGeometry(QRect(600, 240, 141, 30));
        LabelResultTotalSale = new QLabel(GBoxTableSales);
        LabelResultTotalSale->setObjectName(QStringLiteral("LabelResultTotalSale"));
        LabelResultTotalSale->setGeometry(QRect(750, 240, 131, 30));
        LabelProductCode = new QLabel(GBoxCustomeAttend);
        LabelProductCode->setObjectName(QStringLiteral("LabelProductCode"));
        LabelProductCode->setGeometry(QRect(40, 70, 55, 30));
        LabelProductCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonProductSearch = new QToolButton(GBoxCustomeAttend);
        TButtonProductSearch->setObjectName(QStringLiteral("TButtonProductSearch"));
        TButtonProductSearch->setGeometry(QRect(250, 70, 30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/24x24/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductSearch->setIcon(icon2);
        CBoxProductCode = new QComboBox(GBoxCustomeAttend);
        CBoxProductCode->setObjectName(QStringLiteral("CBoxProductCode"));
        CBoxProductCode->setGeometry(QRect(100, 70, 150, 30));
        LabelFullDescription = new QLabel(GBoxCustomeAttend);
        LabelFullDescription->setObjectName(QStringLiteral("LabelFullDescription"));
        LabelFullDescription->setGeometry(QRect(290, 70, 71, 30));
        LabelFullDescription->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditFullDescription = new QLineEdit(GBoxCustomeAttend);
        LEditFullDescription->setObjectName(QStringLiteral("LEditFullDescription"));
        LEditFullDescription->setGeometry(QRect(360, 70, 621, 30));
        LEditFullDescription->setAlignment(Qt::AlignCenter);
        LabelActualStock = new QLabel(GBoxCustomeAttend);
        LabelActualStock->setObjectName(QStringLiteral("LabelActualStock"));
        LabelActualStock->setGeometry(QRect(35, 110, 61, 30));
        LabelActualStock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditActualStock = new QLineEdit(GBoxCustomeAttend);
        LEditActualStock->setObjectName(QStringLiteral("LEditActualStock"));
        LEditActualStock->setGeometry(QRect(100, 110, 100, 30));
        LEditActualStock->setAlignment(Qt::AlignCenter);
        LEditActualStock->setReadOnly(true);
        LabelProductPrice = new QLabel(GBoxCustomeAttend);
        LabelProductPrice->setObjectName(QStringLiteral("LabelProductPrice"));
        LabelProductPrice->setGeometry(QRect(300, 110, 61, 30));
        LabelProductPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductPrice = new QLineEdit(GBoxCustomeAttend);
        LEditProductPrice->setObjectName(QStringLiteral("LEditProductPrice"));
        LEditProductPrice->setGeometry(QRect(360, 110, 100, 30));
        LEditProductPrice->setAlignment(Qt::AlignCenter);
        LabelProductQuantity = new QLabel(GBoxCustomeAttend);
        LabelProductQuantity->setObjectName(QStringLiteral("LabelProductQuantity"));
        LabelProductQuantity->setGeometry(QRect(490, 110, 85, 30));
        LabelProductQuantity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductQuantity = new QLineEdit(GBoxCustomeAttend);
        LEditProductQuantity->setObjectName(QStringLiteral("LEditProductQuantity"));
        LEditProductQuantity->setGeometry(QRect(580, 110, 100, 30));
        LEditProductQuantity->setAlignment(Qt::AlignCenter);
        TButtonExit = new QToolButton(MngFormReceiptCash);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(460, 610, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon3);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonTransform = new QToolButton(MngFormReceiptCash);
        TButtonTransform->setObjectName(QStringLiteral("TButtonTransform"));
        TButtonTransform->setGeometry(QRect(360, 610, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/128x128/pignon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonTransform->setIcon(icon4);
        TButtonTransform->setIconSize(QSize(48, 48));
        TButtonTransform->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCancelSale = new QToolButton(MngFormReceiptCash);
        TButtonCancelSale->setObjectName(QStringLiteral("TButtonCancelSale"));
        TButtonCancelSale->setGeometry(QRect(660, 610, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/Nuvola_actions_cancel-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCancelSale->setIcon(icon5);
        TButtonCancelSale->setIconSize(QSize(48, 48));
        TButtonCancelSale->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonPrint = new QToolButton(MngFormReceiptCash);
        TButtonPrint->setObjectName(QStringLiteral("TButtonPrint"));
        TButtonPrint->setGeometry(QRect(260, 610, 90, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PNG/128x128/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonPrint->setIcon(icon6);
        TButtonPrint->setIconSize(QSize(48, 48));
        TButtonPrint->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(MngFormReceiptCash);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(560, 610, 90, 80));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon7);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormReceiptCash);

        QMetaObject::connectSlotsByName(MngFormReceiptCash);
    } // setupUi

    void retranslateUi(QDialog *MngFormReceiptCash)
    {
        MngFormReceiptCash->setWindowTitle(QApplication::translate("MngFormReceiptCash", "MngFormReceiptCash", Q_NULLPTR));
        GBoxStartWinReceipt->setTitle(QString());
        LabelTerminal->setText(QApplication::translate("MngFormReceiptCash", "Terminal:", Q_NULLPTR));
        GBoxDateNow->setTitle(QApplication::translate("MngFormReceiptCash", "Data ", Q_NULLPTR));
        LabelUserOperation->setText(QApplication::translate("MngFormReceiptCash", "Operador(a):", Q_NULLPTR));
        LabelCashNumber->setText(QApplication::translate("MngFormReceiptCash", "C\303\263digo do Caixa:", Q_NULLPTR));
        GBoxCustomeAttend->setTitle(QApplication::translate("MngFormReceiptCash", "Atendimento", Q_NULLPTR));
        LabelSalesPerson->setText(QApplication::translate("MngFormReceiptCash", "Vendedor(a):", Q_NULLPTR));
        LabelSalesPersonOrdem->setText(QApplication::translate("MngFormReceiptCash", "Pedidos:", Q_NULLPTR));
        LabelSalesPersonClient->setText(QApplication::translate("MngFormReceiptCash", "Cliente:", Q_NULLPTR));
        GBoxTableSales->setTitle(QApplication::translate("MngFormReceiptCash", "Itens do Pedido", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonProductDelete->setToolTip(QApplication::translate("MngFormReceiptCash", "Remover um Item da Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductDelete->setText(QApplication::translate("MngFormReceiptCash", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TWidgetTableCashReceipt->setToolTip(QApplication::translate("MngFormReceiptCash", "Intens da Venda Atual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductAdd->setToolTip(QApplication::translate("MngFormReceiptCash", "Clicar para Adicionar o  Produto na Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductAdd->setText(QApplication::translate("MngFormReceiptCash", "Adicionar", Q_NULLPTR));
        LabelTotalSale->setText(QApplication::translate("MngFormReceiptCash", "Total da Venda R$  ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelResultTotalSale->setToolTip(QApplication::translate("MngFormReceiptCash", "Exibe o Total de Geral dos Produtos da Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelResultTotalSale->setText(QString());
        LabelProductCode->setText(QApplication::translate("MngFormReceiptCash", "C\303\263digo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonProductSearch->setToolTip(QApplication::translate("MngFormReceiptCash", "Clicar para Pesquisar o Produto pelo C\303\263digo Informado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductSearch->setText(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductCode->setToolTip(QApplication::translate("MngFormReceiptCash", "Selecionar ou Digitar o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelFullDescription->setText(QApplication::translate("MngFormReceiptCash", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescription->setToolTip(QApplication::translate("MngFormReceiptCash", "Mostra a  Descri\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelActualStock->setText(QApplication::translate("MngFormReceiptCash", "Estoque:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditActualStock->setToolTip(QApplication::translate("MngFormReceiptCash", "Exibe o Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelProductPrice->setText(QApplication::translate("MngFormReceiptCash", "Pre\303\247o R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPrice->setToolTip(QApplication::translate("MngFormReceiptCash", "Exibe o Pre\303\247o Atual de Venda do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelProductQuantity->setText(QApplication::translate("MngFormReceiptCash", "Quantidade:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductQuantity->setToolTip(QApplication::translate("MngFormReceiptCash", "Informar a Quantidade para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormReceiptCash", "Fecha a Janela Ap\303\263s Altera\303\247\303\265es...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormReceiptCash", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonTransform->setToolTip(QApplication::translate("MngFormReceiptCash", "Transformar em uma Reserva de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonTransform->setText(QApplication::translate("MngFormReceiptCash", "Transformar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCancelSale->setToolTip(QApplication::translate("MngFormReceiptCash", "Cancela uma Reserva de Vendas, Liberando Produtos para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCancelSale->setText(QApplication::translate("MngFormReceiptCash", "Cancelar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonPrint->setToolTip(QApplication::translate("MngFormReceiptCash", "Finalizar e Imprimir a Reserva de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonPrint->setText(QApplication::translate("MngFormReceiptCash", "Imprimir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormReceiptCash", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormReceiptCash", "Limpar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormReceiptCash: public Ui_MngFormReceiptCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMRECEIPTCASH_H
