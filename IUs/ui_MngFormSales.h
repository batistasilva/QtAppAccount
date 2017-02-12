/********************************************************************************
** Form generated from reading UI file 'MngFormSales.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSALES_H
#define UI_MNGFORMSALES_H

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

class Ui_MngFormSales
{
public:
    QToolButton *TButtonExit;
    QToolButton *TButtonPrint;
    QToolButton *TButtonCancelSale;
    QToolButton *TButtonCleanForm;
    QGroupBox *GBoxLocalFilter;
    QGroupBox *GBoxLocalSite;
    QComboBox *CBoxSigleOrMaried_2;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QGroupBox *GBoxProductCategory;
    QComboBox *CBoxProductCategory;
    QGroupBox *GBoxProductSubCategory;
    QComboBox *CBoxProductSubCategory;
    QGroupBox *GBoxUser;
    QLineEdit *LEditUserSale;
    QGroupBox *GBoxReserves;
    QComboBox *CBoxReserves;
    QGroupBox *GBoxDateGenerating;
    QDateEdit *DEditDateGenerating;
    QGroupBox *GBoxStatusReservation;
    QLabel *LabelStatusReservation;
    QGroupBox *GBoxActualStock;
    QLineEdit *LEditActualStock;
    QGroupBox *GBoxProductCode;
    QComboBox *CBoxProductCode;
    QToolButton *TButtonProductSearch;
    QGroupBox *GBoxProductQuantity;
    QLineEdit *LEditProductQuantity;
    QGroupBox *GBoxProductPrice;
    QLineEdit *LEditProductPrice;
    QGroupBox *GBoxFullDescription;
    QLineEdit *LEditFullDescription_2;
    QGroupBox *GBoxTableSales;
    QToolButton *TButtonProductDelete;
    QTableWidget *TWidgetTableSales;
    QToolButton *TButtonProductAdd;
    QLabel *LabelTotalSale;
    QLabel *LabelResultTotalSale;

    void setupUi(QDialog *MngFormSales)
    {
        if (MngFormSales->objectName().isEmpty())
            MngFormSales->setObjectName(QStringLiteral("MngFormSales"));
        MngFormSales->resize(1010, 710);
        TButtonExit = new QToolButton(MngFormSales);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(400, 620, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonPrint = new QToolButton(MngFormSales);
        TButtonPrint->setObjectName(QStringLiteral("TButtonPrint"));
        TButtonPrint->setGeometry(QRect(300, 620, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/128x128/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonPrint->setIcon(icon1);
        TButtonPrint->setIconSize(QSize(48, 48));
        TButtonPrint->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCancelSale = new QToolButton(MngFormSales);
        TButtonCancelSale->setObjectName(QStringLiteral("TButtonCancelSale"));
        TButtonCancelSale->setGeometry(QRect(600, 620, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Nuvola_actions_cancel-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCancelSale->setIcon(icon2);
        TButtonCancelSale->setIconSize(QSize(48, 48));
        TButtonCancelSale->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(MngFormSales);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(500, 620, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon3);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxLocalFilter = new QGroupBox(MngFormSales);
        GBoxLocalFilter->setObjectName(QStringLiteral("GBoxLocalFilter"));
        GBoxLocalFilter->setGeometry(QRect(10, 0, 991, 221));
        GBoxLocalSite = new QGroupBox(GBoxLocalFilter);
        GBoxLocalSite->setObjectName(QStringLiteral("GBoxLocalSite"));
        GBoxLocalSite->setGeometry(QRect(10, 80, 701, 60));
        CBoxSigleOrMaried_2 = new QComboBox(GBoxLocalSite);
        CBoxSigleOrMaried_2->setObjectName(QStringLiteral("CBoxSigleOrMaried_2"));
        CBoxSigleOrMaried_2->setGeometry(QRect(10, 20, 240, 30));
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
        GBoxUser->setGeometry(QRect(10, 10, 260, 60));
        LEditUserSale = new QLineEdit(GBoxUser);
        LEditUserSale->setObjectName(QStringLiteral("LEditUserSale"));
        LEditUserSale->setGeometry(QRect(10, 20, 241, 30));
        GBoxReserves = new QGroupBox(GBoxLocalFilter);
        GBoxReserves->setObjectName(QStringLiteral("GBoxReserves"));
        GBoxReserves->setGeometry(QRect(280, 10, 260, 60));
        CBoxReserves = new QComboBox(GBoxReserves);
        CBoxReserves->setObjectName(QStringLiteral("CBoxReserves"));
        CBoxReserves->setGeometry(QRect(10, 20, 241, 30));
        GBoxDateGenerating = new QGroupBox(GBoxLocalFilter);
        GBoxDateGenerating->setObjectName(QStringLiteral("GBoxDateGenerating"));
        GBoxDateGenerating->setGeometry(QRect(590, 10, 170, 60));
        DEditDateGenerating = new QDateEdit(GBoxDateGenerating);
        DEditDateGenerating->setObjectName(QStringLiteral("DEditDateGenerating"));
        DEditDateGenerating->setGeometry(QRect(20, 20, 131, 30));
        DEditDateGenerating->setAlignment(Qt::AlignCenter);
        GBoxStatusReservation = new QGroupBox(GBoxLocalFilter);
        GBoxStatusReservation->setObjectName(QStringLiteral("GBoxStatusReservation"));
        GBoxStatusReservation->setGeometry(QRect(810, 10, 170, 60));
        LabelStatusReservation = new QLabel(GBoxStatusReservation);
        LabelStatusReservation->setObjectName(QStringLiteral("LabelStatusReservation"));
        LabelStatusReservation->setGeometry(QRect(10, 20, 130, 30));
        LabelStatusReservation->setAlignment(Qt::AlignCenter);
        GBoxActualStock = new QGroupBox(MngFormSales);
        GBoxActualStock->setObjectName(QStringLiteral("GBoxActualStock"));
        GBoxActualStock->setGeometry(QRect(730, 220, 131, 60));
        LEditActualStock = new QLineEdit(GBoxActualStock);
        LEditActualStock->setObjectName(QStringLiteral("LEditActualStock"));
        LEditActualStock->setGeometry(QRect(10, 20, 111, 27));
        LEditActualStock->setAlignment(Qt::AlignCenter);
        LEditActualStock->setReadOnly(true);
        GBoxProductCode = new QGroupBox(MngFormSales);
        GBoxProductCode->setObjectName(QStringLiteral("GBoxProductCode"));
        GBoxProductCode->setGeometry(QRect(10, 220, 211, 60));
        CBoxProductCode = new QComboBox(GBoxProductCode);
        CBoxProductCode->setObjectName(QStringLiteral("CBoxProductCode"));
        CBoxProductCode->setGeometry(QRect(10, 20, 161, 30));
        TButtonProductSearch = new QToolButton(GBoxProductCode);
        TButtonProductSearch->setObjectName(QStringLiteral("TButtonProductSearch"));
        TButtonProductSearch->setGeometry(QRect(170, 20, 30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/24x24/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductSearch->setIcon(icon4);
        GBoxProductQuantity = new QGroupBox(MngFormSales);
        GBoxProductQuantity->setObjectName(QStringLiteral("GBoxProductQuantity"));
        GBoxProductQuantity->setGeometry(QRect(10, 280, 131, 60));
        LEditProductQuantity = new QLineEdit(GBoxProductQuantity);
        LEditProductQuantity->setObjectName(QStringLiteral("LEditProductQuantity"));
        LEditProductQuantity->setGeometry(QRect(10, 20, 113, 27));
        LEditProductQuantity->setAlignment(Qt::AlignCenter);
        GBoxProductPrice = new QGroupBox(MngFormSales);
        GBoxProductPrice->setObjectName(QStringLiteral("GBoxProductPrice"));
        GBoxProductPrice->setGeometry(QRect(870, 220, 131, 60));
        LEditProductPrice = new QLineEdit(GBoxProductPrice);
        LEditProductPrice->setObjectName(QStringLiteral("LEditProductPrice"));
        LEditProductPrice->setGeometry(QRect(10, 20, 113, 27));
        LEditProductPrice->setAlignment(Qt::AlignCenter);
        GBoxFullDescription = new QGroupBox(MngFormSales);
        GBoxFullDescription->setObjectName(QStringLiteral("GBoxFullDescription"));
        GBoxFullDescription->setGeometry(QRect(230, 220, 491, 60));
        LEditFullDescription_2 = new QLineEdit(GBoxFullDescription);
        LEditFullDescription_2->setObjectName(QStringLiteral("LEditFullDescription_2"));
        LEditFullDescription_2->setGeometry(QRect(10, 20, 471, 30));
        LEditFullDescription_2->setAlignment(Qt::AlignCenter);
        GBoxTableSales = new QGroupBox(MngFormSales);
        GBoxTableSales->setObjectName(QStringLiteral("GBoxTableSales"));
        GBoxTableSales->setGeometry(QRect(10, 340, 991, 271));
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

        retranslateUi(MngFormSales);

        QMetaObject::connectSlotsByName(MngFormSales);
    } // setupUi

    void retranslateUi(QDialog *MngFormSales)
    {
        MngFormSales->setWindowTitle(QApplication::translate("MngFormSales", "MngFormSales", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormSales", "Fecha a Janela Ap\303\263s Altera\303\247\303\265es...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormSales", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonPrint->setToolTip(QApplication::translate("MngFormSales", "Finalizar e Imprimir a Reserva de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonPrint->setText(QApplication::translate("MngFormSales", "Imprimir", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCancelSale->setToolTip(QApplication::translate("MngFormSales", "Cancela uma Reserva de Vendas, Liberando Produtos para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCancelSale->setText(QApplication::translate("MngFormSales", "Cancelar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormSales", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormSales", "Limpar", Q_NULLPTR));
        GBoxLocalFilter->setTitle(QString());
        GBoxLocalSite->setTitle(QApplication::translate("MngFormSales", "Local/Armazem", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSigleOrMaried_2->setToolTip(QApplication::translate("MngFormSales", "Selecionar o Local/Deposito de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormSales", "Fonecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormSales", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductCategory->setTitle(QApplication::translate("MngFormSales", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCategory->setToolTip(QApplication::translate("MngFormSales", "Selecionar a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductSubCategory->setTitle(QApplication::translate("MngFormSales", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductSubCategory->setToolTip(QApplication::translate("MngFormSales", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxUser->setTitle(QApplication::translate("MngFormSales", "Vendedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUserSale->setToolTip(QApplication::translate("MngFormSales", "Usu\303\241rio de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxReserves->setTitle(QApplication::translate("MngFormSales", "Reservas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxReserves->setToolTip(QApplication::translate("MngFormSales", "Reservas Di\303\241rias Disponiveis para Vendedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDateGenerating->setTitle(QApplication::translate("MngFormSales", "Data de Gera\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditDateGenerating->setToolTip(QApplication::translate("MngFormSales", "Data da Reserva Atual Selecionada....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditDateGenerating->setDisplayFormat(QApplication::translate("MngFormSales", "dd/MM/yyyy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxStatusReservation->setToolTip(QApplication::translate("MngFormSales", "Status da Reserva Atual Selecionada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusReservation->setTitle(QApplication::translate("MngFormSales", "Status", Q_NULLPTR));
        LabelStatusReservation->setText(QString());
        GBoxActualStock->setTitle(QApplication::translate("MngFormSales", "Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditActualStock->setToolTip(QApplication::translate("MngFormSales", "Exibe o Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductCode->setTitle(QApplication::translate("MngFormSales", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCode->setToolTip(QApplication::translate("MngFormSales", "Selecionar ou Digitar o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductSearch->setToolTip(QApplication::translate("MngFormSales", "Clicar para Pesquisar o Produto pelo C\303\263digo Informado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductSearch->setText(QString());
        GBoxProductQuantity->setTitle(QApplication::translate("MngFormSales", "Quant.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductQuantity->setToolTip(QApplication::translate("MngFormSales", "Informar a Quantidade para Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductPrice->setTitle(QApplication::translate("MngFormSales", "Pre\303\247o R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPrice->setToolTip(QApplication::translate("MngFormSales", "Exibe o Pre\303\247o Atual de Venda do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFullDescription->setTitle(QApplication::translate("MngFormSales", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescription_2->setToolTip(QApplication::translate("MngFormSales", "Mostra a  Descri\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTableSales->setTitle(QApplication::translate("MngFormSales", "Itens da Venda", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonProductDelete->setToolTip(QApplication::translate("MngFormSales", "Remover um Item da Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductDelete->setText(QApplication::translate("MngFormSales", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TWidgetTableSales->setToolTip(QApplication::translate("MngFormSales", "Intens da Venda Atual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductAdd->setToolTip(QApplication::translate("MngFormSales", "Clicar para Adicionar o  Produto na Lista de Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductAdd->setText(QApplication::translate("MngFormSales", "Adicionar", Q_NULLPTR));
        LabelTotalSale->setText(QApplication::translate("MngFormSales", "Total da Venda R$  ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelResultTotalSale->setToolTip(QApplication::translate("MngFormSales", "Exibe o Total de Geral dos Produtos da Venda...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelResultTotalSale->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MngFormSales: public Ui_MngFormSales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSALES_H
