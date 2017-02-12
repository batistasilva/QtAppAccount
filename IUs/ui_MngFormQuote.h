/********************************************************************************
** Form generated from reading UI file 'MngFormQuote.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMQUOTE_H
#define UI_MNGFORMQUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormQuote
{
public:
    QToolButton *TButtonPrint;
    QToolButton *TButtonCleanForm;
    QGroupBox *GBoxProductQuantity;
    QLineEdit *LEditProductQuantity;
    QGroupBox *GBoxLocalFilter;
    QGroupBox *GBoxLocalSite;
    QComboBox *CBoxLocalSite;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QGroupBox *GBoxProductCategory;
    QComboBox *CBoxProductCategory;
    QGroupBox *GBoxProductSubCategory;
    QComboBox *CBoxProductSubCategory;
    QGroupBox *GBoxUser;
    QLineEdit *LEditUserSale;
    QGroupBox *GBoxQuotes;
    QComboBox *CBoxQuotes;
    QGroupBox *GBoxGenerationDate;
    QDateEdit *DEditGenerationDate;
    QGroupBox *GBoxStatusReservation;
    QLabel *LabelStatusReservation;
    QGroupBox *GBoxExpirationDate;
    QDateEdit *DEditExpirationDate;
    QGroupBox *GBoxProductPrice;
    QLineEdit *LEditProductPrice;
    QToolButton *TButtonExit;
    QGroupBox *GBoxActualStock;
    QLineEdit *LEditActualStock;
    QToolButton *TButtonCancelSale;
    QGroupBox *GBoxProductCode;
    QComboBox *CBoxProductCode;
    QToolButton *TButtonProductSearch;
    QGroupBox *GBoxTableSales;
    QToolButton *TButtonProductDelete;
    QTableWidget *TWidgetTableSales;
    QToolButton *TButtonProductAdd;
    QLabel *LabelTotalSale;
    QLabel *LabelResultTotalSale;
    QGroupBox *GBoxFullDescription;
    QLineEdit *LEditFullDescription;
    QToolButton *TButtonTransform;

    void setupUi(QDialog *MngFormQuote)
    {
        if (MngFormQuote->objectName().isEmpty())
            MngFormQuote->setObjectName(QStringLiteral("MngFormQuote"));
        MngFormQuote->resize(1010, 710);
        TButtonPrint = new QToolButton(MngFormQuote);
        TButtonPrint->setObjectName(QStringLiteral("TButtonPrint"));
        TButtonPrint->setGeometry(QRect(270, 630, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonPrint->setIcon(icon);
        TButtonPrint->setIconSize(QSize(48, 48));
        TButtonPrint->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(MngFormQuote);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(570, 630, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon1);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProductQuantity = new QGroupBox(MngFormQuote);
        GBoxProductQuantity->setObjectName(QStringLiteral("GBoxProductQuantity"));
        GBoxProductQuantity->setGeometry(QRect(750, 290, 250, 60));
        LEditProductQuantity = new QLineEdit(GBoxProductQuantity);
        LEditProductQuantity->setObjectName(QStringLiteral("LEditProductQuantity"));
        LEditProductQuantity->setGeometry(QRect(10, 20, 231, 27));
        LEditProductQuantity->setAlignment(Qt::AlignCenter);
        GBoxLocalFilter = new QGroupBox(MngFormQuote);
        GBoxLocalFilter->setObjectName(QStringLiteral("GBoxLocalFilter"));
        GBoxLocalFilter->setGeometry(QRect(10, 10, 991, 221));
        GBoxLocalSite = new QGroupBox(GBoxLocalFilter);
        GBoxLocalSite->setObjectName(QStringLiteral("GBoxLocalSite"));
        GBoxLocalSite->setGeometry(QRect(10, 80, 260, 60));
        CBoxLocalSite = new QComboBox(GBoxLocalSite);
        CBoxLocalSite->setObjectName(QStringLiteral("CBoxLocalSite"));
        CBoxLocalSite->setGeometry(QRect(10, 20, 240, 30));
        GBoxSupplier = new QGroupBox(GBoxLocalFilter);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(10, 150, 701, 60));
        CBoxSupplier = new QComboBox(GBoxSupplier);
        CBoxSupplier->setObjectName(QStringLiteral("CBoxSupplier"));
        CBoxSupplier->setGeometry(QRect(10, 20, 240, 30));
        GBoxProductCategory = new QGroupBox(GBoxLocalFilter);
        GBoxProductCategory->setObjectName(QStringLiteral("GBoxProductCategory"));
        GBoxProductCategory->setGeometry(QRect(720, 80, 260, 60));
        CBoxProductCategory = new QComboBox(GBoxProductCategory);
        CBoxProductCategory->setObjectName(QStringLiteral("CBoxProductCategory"));
        CBoxProductCategory->setGeometry(QRect(10, 20, 240, 30));
        GBoxProductSubCategory = new QGroupBox(GBoxLocalFilter);
        GBoxProductSubCategory->setObjectName(QStringLiteral("GBoxProductSubCategory"));
        GBoxProductSubCategory->setGeometry(QRect(720, 150, 260, 60));
        CBoxProductSubCategory = new QComboBox(GBoxProductSubCategory);
        CBoxProductSubCategory->setObjectName(QStringLiteral("CBoxProductSubCategory"));
        CBoxProductSubCategory->setGeometry(QRect(10, 20, 240, 30));
        GBoxUser = new QGroupBox(GBoxLocalFilter);
        GBoxUser->setObjectName(QStringLiteral("GBoxUser"));
        GBoxUser->setGeometry(QRect(10, 10, 251, 60));
        LEditUserSale = new QLineEdit(GBoxUser);
        LEditUserSale->setObjectName(QStringLiteral("LEditUserSale"));
        LEditUserSale->setGeometry(QRect(10, 20, 231, 30));
        LEditUserSale->setAlignment(Qt::AlignCenter);
        GBoxQuotes = new QGroupBox(GBoxLocalFilter);
        GBoxQuotes->setObjectName(QStringLiteral("GBoxQuotes"));
        GBoxQuotes->setGeometry(QRect(270, 10, 170, 60));
        CBoxQuotes = new QComboBox(GBoxQuotes);
        CBoxQuotes->setObjectName(QStringLiteral("CBoxQuotes"));
        CBoxQuotes->setGeometry(QRect(10, 20, 150, 30));
        GBoxGenerationDate = new QGroupBox(GBoxLocalFilter);
        GBoxGenerationDate->setObjectName(QStringLiteral("GBoxGenerationDate"));
        GBoxGenerationDate->setGeometry(QRect(450, 10, 170, 60));
        DEditGenerationDate = new QDateEdit(GBoxGenerationDate);
        DEditGenerationDate->setObjectName(QStringLiteral("DEditGenerationDate"));
        DEditGenerationDate->setGeometry(QRect(20, 20, 131, 30));
        DEditGenerationDate->setAlignment(Qt::AlignCenter);
        GBoxStatusReservation = new QGroupBox(GBoxLocalFilter);
        GBoxStatusReservation->setObjectName(QStringLiteral("GBoxStatusReservation"));
        GBoxStatusReservation->setGeometry(QRect(810, 10, 170, 60));
        LabelStatusReservation = new QLabel(GBoxStatusReservation);
        LabelStatusReservation->setObjectName(QStringLiteral("LabelStatusReservation"));
        LabelStatusReservation->setGeometry(QRect(10, 20, 130, 30));
        LabelStatusReservation->setAlignment(Qt::AlignCenter);
        GBoxExpirationDate = new QGroupBox(GBoxLocalFilter);
        GBoxExpirationDate->setObjectName(QStringLiteral("GBoxExpirationDate"));
        GBoxExpirationDate->setGeometry(QRect(630, 10, 170, 60));
        DEditExpirationDate = new QDateEdit(GBoxExpirationDate);
        DEditExpirationDate->setObjectName(QStringLiteral("DEditExpirationDate"));
        DEditExpirationDate->setGeometry(QRect(20, 20, 131, 30));
        DEditExpirationDate->setAlignment(Qt::AlignCenter);
        GBoxProductPrice = new QGroupBox(MngFormQuote);
        GBoxProductPrice->setObjectName(QStringLiteral("GBoxProductPrice"));
        GBoxProductPrice->setGeometry(QRect(380, 290, 250, 60));
        LEditProductPrice = new QLineEdit(GBoxProductPrice);
        LEditProductPrice->setObjectName(QStringLiteral("LEditProductPrice"));
        LEditProductPrice->setGeometry(QRect(10, 20, 231, 27));
        LEditProductPrice->setAlignment(Qt::AlignCenter);
        TButtonExit = new QToolButton(MngFormQuote);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(470, 630, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon2);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxActualStock = new QGroupBox(MngFormQuote);
        GBoxActualStock->setObjectName(QStringLiteral("GBoxActualStock"));
        GBoxActualStock->setGeometry(QRect(10, 290, 250, 60));
        LEditActualStock = new QLineEdit(GBoxActualStock);
        LEditActualStock->setObjectName(QStringLiteral("LEditActualStock"));
        LEditActualStock->setGeometry(QRect(10, 20, 231, 27));
        LEditActualStock->setAlignment(Qt::AlignCenter);
        LEditActualStock->setReadOnly(true);
        TButtonCancelSale = new QToolButton(MngFormQuote);
        TButtonCancelSale->setObjectName(QStringLiteral("TButtonCancelSale"));
        TButtonCancelSale->setGeometry(QRect(670, 630, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Nuvola_actions_cancel-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCancelSale->setIcon(icon3);
        TButtonCancelSale->setIconSize(QSize(48, 48));
        TButtonCancelSale->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProductCode = new QGroupBox(MngFormQuote);
        GBoxProductCode->setObjectName(QStringLiteral("GBoxProductCode"));
        GBoxProductCode->setGeometry(QRect(10, 230, 211, 60));
        CBoxProductCode = new QComboBox(GBoxProductCode);
        CBoxProductCode->setObjectName(QStringLiteral("CBoxProductCode"));
        CBoxProductCode->setGeometry(QRect(10, 20, 161, 30));
        TButtonProductSearch = new QToolButton(GBoxProductCode);
        TButtonProductSearch->setObjectName(QStringLiteral("TButtonProductSearch"));
        TButtonProductSearch->setGeometry(QRect(170, 20, 30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/24x24/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductSearch->setIcon(icon4);
        GBoxTableSales = new QGroupBox(MngFormQuote);
        GBoxTableSales->setObjectName(QStringLiteral("GBoxTableSales"));
        GBoxTableSales->setGeometry(QRect(10, 350, 991, 271));
        TButtonProductDelete = new QToolButton(GBoxTableSales);
        TButtonProductDelete->setObjectName(QStringLiteral("TButtonProductDelete"));
        TButtonProductDelete->setGeometry(QRect(890, 135, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_fail1-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductDelete->setIcon(icon5);
        TButtonProductDelete->setIconSize(QSize(48, 48));
        TButtonProductDelete->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TWidgetTableSales = new QTableWidget(GBoxTableSales);
        TWidgetTableSales->setObjectName(QStringLiteral("TWidgetTableSales"));
        TWidgetTableSales->setGeometry(QRect(20, 30, 861, 201));
        TButtonProductAdd = new QToolButton(GBoxTableSales);
        TButtonProductAdd->setObjectName(QStringLiteral("TButtonProductAdd"));
        TButtonProductAdd->setGeometry(QRect(890, 45, 90, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_success-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductAdd->setIcon(icon6);
        TButtonProductAdd->setIconSize(QSize(48, 48));
        TButtonProductAdd->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LabelTotalSale = new QLabel(GBoxTableSales);
        LabelTotalSale->setObjectName(QStringLiteral("LabelTotalSale"));
        LabelTotalSale->setGeometry(QRect(600, 240, 141, 30));
        LabelResultTotalSale = new QLabel(GBoxTableSales);
        LabelResultTotalSale->setObjectName(QStringLiteral("LabelResultTotalSale"));
        LabelResultTotalSale->setGeometry(QRect(750, 240, 131, 30));
        GBoxFullDescription = new QGroupBox(MngFormQuote);
        GBoxFullDescription->setObjectName(QStringLiteral("GBoxFullDescription"));
        GBoxFullDescription->setGeometry(QRect(240, 230, 761, 60));
        LEditFullDescription = new QLineEdit(GBoxFullDescription);
        LEditFullDescription->setObjectName(QStringLiteral("LEditFullDescription"));
        LEditFullDescription->setGeometry(QRect(10, 20, 741, 30));
        LEditFullDescription->setAlignment(Qt::AlignCenter);
        TButtonTransform = new QToolButton(MngFormQuote);
        TButtonTransform->setObjectName(QStringLiteral("TButtonTransform"));
        TButtonTransform->setGeometry(QRect(370, 630, 90, 80));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/PNG/128x128/pignon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonTransform->setIcon(icon7);
        TButtonTransform->setIconSize(QSize(48, 48));
        TButtonTransform->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormQuote);

        QMetaObject::connectSlotsByName(MngFormQuote);
    } // setupUi

    void retranslateUi(QDialog *MngFormQuote)
    {
        MngFormQuote->setWindowTitle(QApplication::translate("MngFormQuote", "MngFormQuote", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonPrint->setToolTip(QApplication::translate("MngFormQuote", "Finalizar e Imprimir a Reserva de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonPrint->setText(QApplication::translate("MngFormQuote", "Imprimir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormQuote", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormQuote", "Limpar", Q_NULLPTR));
        GBoxProductQuantity->setTitle(QApplication::translate("MngFormQuote", "Quant.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductQuantity->setToolTip(QApplication::translate("MngFormQuote", "Informar a Quantidade para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLocalFilter->setTitle(QString());
        GBoxLocalSite->setTitle(QApplication::translate("MngFormQuote", "Local/Armazem", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSite->setToolTip(QApplication::translate("MngFormQuote", "Selecionar o Local/Deposito de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormQuote", "Fonecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormQuote", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductCategory->setTitle(QApplication::translate("MngFormQuote", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCategory->setToolTip(QApplication::translate("MngFormQuote", "Selecionar a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductSubCategory->setTitle(QApplication::translate("MngFormQuote", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductSubCategory->setToolTip(QApplication::translate("MngFormQuote", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxUser->setTitle(QApplication::translate("MngFormQuote", "Vendedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUserSale->setToolTip(QApplication::translate("MngFormQuote", "Usu\303\241rio de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxQuotes->setTitle(QApplication::translate("MngFormQuote", "Or\303\247amentos", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxQuotes->setToolTip(QApplication::translate("MngFormQuote", "Or\303\247amentos Di\303\241rios do Vendedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxGenerationDate->setTitle(QApplication::translate("MngFormQuote", "Data de Gera\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditGenerationDate->setToolTip(QApplication::translate("MngFormQuote", "Data em que foi Gerado o Or\303\247\303\243mento Atual....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditGenerationDate->setDisplayFormat(QApplication::translate("MngFormQuote", "dd/MM/yyyy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxStatusReservation->setToolTip(QApplication::translate("MngFormQuote", "Status da Reserva Atual Selecionada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusReservation->setTitle(QApplication::translate("MngFormQuote", "Status", Q_NULLPTR));
        LabelStatusReservation->setText(QString());
        GBoxExpirationDate->setTitle(QApplication::translate("MngFormQuote", "Data de Validade", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditExpirationDate->setToolTip(QApplication::translate("MngFormQuote", "Data de Validade do Or\303\247amento....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditExpirationDate->setDisplayFormat(QApplication::translate("MngFormQuote", "dd/MM/yyyy", Q_NULLPTR));
        GBoxProductPrice->setTitle(QApplication::translate("MngFormQuote", "Pre\303\247o R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPrice->setToolTip(QApplication::translate("MngFormQuote", "Exibe o Pre\303\247o Atual de Venda do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormQuote", "Fecha a Janela Ap\303\263s Altera\303\247\303\265es...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormQuote", "Sa\303\255da", Q_NULLPTR));
        GBoxActualStock->setTitle(QApplication::translate("MngFormQuote", "Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditActualStock->setToolTip(QApplication::translate("MngFormQuote", "Exibe o Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonCancelSale->setToolTip(QApplication::translate("MngFormQuote", "Cancela uma Reserva de Vendas, Liberando Produtos para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCancelSale->setText(QApplication::translate("MngFormQuote", "Cancelar", Q_NULLPTR));
        GBoxProductCode->setTitle(QApplication::translate("MngFormQuote", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCode->setToolTip(QApplication::translate("MngFormQuote", "Selecionar ou Digitar o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductSearch->setToolTip(QApplication::translate("MngFormQuote", "Clicar para Pesquisar o Produto pelo C\303\263digo Informado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductSearch->setText(QString());
        GBoxTableSales->setTitle(QApplication::translate("MngFormQuote", "Itens do Or\303\247\303\243mento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonProductDelete->setToolTip(QApplication::translate("MngFormQuote", "Remover um Item da Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductDelete->setText(QApplication::translate("MngFormQuote", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TWidgetTableSales->setToolTip(QApplication::translate("MngFormQuote", "Intens da Venda Atual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductAdd->setToolTip(QApplication::translate("MngFormQuote", "Clicar para Adicionar o  Produto na Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductAdd->setText(QApplication::translate("MngFormQuote", "Adicionar", Q_NULLPTR));
        LabelTotalSale->setText(QApplication::translate("MngFormQuote", "Total da Venda R$  ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelResultTotalSale->setToolTip(QApplication::translate("MngFormQuote", "Exibe o Total de Geral dos Produtos da Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelResultTotalSale->setText(QString());
        GBoxFullDescription->setTitle(QApplication::translate("MngFormQuote", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescription->setToolTip(QApplication::translate("MngFormQuote", "Mostra a  Descri\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonTransform->setToolTip(QApplication::translate("MngFormQuote", "Transformar em uma Reserva de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonTransform->setText(QApplication::translate("MngFormQuote", "Transformar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormQuote: public Ui_MngFormQuote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMQUOTE_H
