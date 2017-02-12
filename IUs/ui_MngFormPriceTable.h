/********************************************************************************
** Form generated from reading UI file 'MngFormPriceTable.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMPRICETABLE_H
#define UI_MNGFORMPRICETABLE_H

#include <QtCore/QDate>
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

class Ui_MngFormPriceTable
{
public:
    QGroupBox *GBoxPriceTable;
    QComboBox *CBoxPriceTable;
    QGroupBox *GBoxDateSchedule;
    QLabel *LBStartDate;
    QDateEdit *DEditStartDate;
    QLabel *LBEndDate;
    QDateEdit *DEditEndDate;
    QGroupBox *GBoxCategory;
    QComboBox *CBoxCategory;
    QGroupBox *GBoxSubCategory;
    QComboBox *CBoxSubCategory;
    QGroupBox *GBoxLocalSite;
    QComboBox *CBoxLocalSite;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QGroupBox *GBoxAdjustmentOption;
    QGroupBox *GBoxAdjustment;
    QComboBox *CBoxAdjustment;
    QGroupBox *GBoxPercent;
    QLineEdit *LEditPercent;
    QToolButton *toolButton;
    QTableWidget *TBWidgetPriceTable;
    QToolButton *TButtonExit;
    QToolButton *TButtonCleanTable;

    void setupUi(QDialog *MngFormPriceTable)
    {
        if (MngFormPriceTable->objectName().isEmpty())
            MngFormPriceTable->setObjectName(QStringLiteral("MngFormPriceTable"));
        MngFormPriceTable->resize(1010, 710);
        GBoxPriceTable = new QGroupBox(MngFormPriceTable);
        GBoxPriceTable->setObjectName(QStringLiteral("GBoxPriceTable"));
        GBoxPriceTable->setGeometry(QRect(10, 10, 210, 60));
        CBoxPriceTable = new QComboBox(GBoxPriceTable);
        CBoxPriceTable->setObjectName(QStringLiteral("CBoxPriceTable"));
        CBoxPriceTable->setGeometry(QRect(10, 20, 190, 30));
        GBoxDateSchedule = new QGroupBox(MngFormPriceTable);
        GBoxDateSchedule->setObjectName(QStringLiteral("GBoxDateSchedule"));
        GBoxDateSchedule->setGeometry(QRect(540, 10, 461, 60));
        LBStartDate = new QLabel(GBoxDateSchedule);
        LBStartDate->setObjectName(QStringLiteral("LBStartDate"));
        LBStartDate->setGeometry(QRect(20, 20, 81, 30));
        DEditStartDate = new QDateEdit(GBoxDateSchedule);
        DEditStartDate->setObjectName(QStringLiteral("DEditStartDate"));
        DEditStartDate->setGeometry(QRect(110, 20, 110, 30));
        DEditStartDate->setAlignment(Qt::AlignCenter);
        DEditStartDate->setDate(QDate(2000, 1, 1));
        LBEndDate = new QLabel(GBoxDateSchedule);
        LBEndDate->setObjectName(QStringLiteral("LBEndDate"));
        LBEndDate->setGeometry(QRect(250, 20, 81, 30));
        DEditEndDate = new QDateEdit(GBoxDateSchedule);
        DEditEndDate->setObjectName(QStringLiteral("DEditEndDate"));
        DEditEndDate->setGeometry(QRect(330, 20, 110, 30));
        DEditEndDate->setAlignment(Qt::AlignCenter);
        GBoxCategory = new QGroupBox(MngFormPriceTable);
        GBoxCategory->setObjectName(QStringLiteral("GBoxCategory"));
        GBoxCategory->setGeometry(QRect(540, 80, 231, 60));
        CBoxCategory = new QComboBox(GBoxCategory);
        CBoxCategory->setObjectName(QStringLiteral("CBoxCategory"));
        CBoxCategory->setGeometry(QRect(10, 20, 211, 30));
        GBoxSubCategory = new QGroupBox(MngFormPriceTable);
        GBoxSubCategory->setObjectName(QStringLiteral("GBoxSubCategory"));
        GBoxSubCategory->setGeometry(QRect(780, 80, 221, 60));
        CBoxSubCategory = new QComboBox(GBoxSubCategory);
        CBoxSubCategory->setObjectName(QStringLiteral("CBoxSubCategory"));
        CBoxSubCategory->setGeometry(QRect(10, 20, 200, 30));
        GBoxLocalSite = new QGroupBox(MngFormPriceTable);
        GBoxLocalSite->setObjectName(QStringLiteral("GBoxLocalSite"));
        GBoxLocalSite->setGeometry(QRect(10, 80, 210, 60));
        CBoxLocalSite = new QComboBox(GBoxLocalSite);
        CBoxLocalSite->setObjectName(QStringLiteral("CBoxLocalSite"));
        CBoxLocalSite->setGeometry(QRect(10, 20, 190, 30));
        GBoxSupplier = new QGroupBox(MngFormPriceTable);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(230, 80, 301, 60));
        CBoxSupplier = new QComboBox(GBoxSupplier);
        CBoxSupplier->setObjectName(QStringLiteral("CBoxSupplier"));
        CBoxSupplier->setGeometry(QRect(10, 20, 281, 30));
        GBoxAdjustmentOption = new QGroupBox(MngFormPriceTable);
        GBoxAdjustmentOption->setObjectName(QStringLiteral("GBoxAdjustmentOption"));
        GBoxAdjustmentOption->setGeometry(QRect(270, 140, 451, 90));
        GBoxAdjustment = new QGroupBox(GBoxAdjustmentOption);
        GBoxAdjustment->setObjectName(QStringLiteral("GBoxAdjustment"));
        GBoxAdjustment->setGeometry(QRect(10, 20, 181, 60));
        CBoxAdjustment = new QComboBox(GBoxAdjustment);
        CBoxAdjustment->setObjectName(QStringLiteral("CBoxAdjustment"));
        CBoxAdjustment->setGeometry(QRect(10, 20, 161, 30));
        GBoxPercent = new QGroupBox(GBoxAdjustmentOption);
        GBoxPercent->setObjectName(QStringLiteral("GBoxPercent"));
        GBoxPercent->setGeometry(QRect(210, 20, 131, 60));
        LEditPercent = new QLineEdit(GBoxPercent);
        LEditPercent->setObjectName(QStringLiteral("LEditPercent"));
        LEditPercent->setGeometry(QRect(10, 20, 113, 30));
        toolButton = new QToolButton(GBoxAdjustmentOption);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(370, 20, 70, 60));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/old-go-down-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(40, 40));
        TBWidgetPriceTable = new QTableWidget(MngFormPriceTable);
        TBWidgetPriceTable->setObjectName(QStringLiteral("TBWidgetPriceTable"));
        TBWidgetPriceTable->setGeometry(QRect(10, 240, 991, 361));
        TButtonExit = new QToolButton(MngFormPriceTable);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(810, 620, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon1);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanTable = new QToolButton(MngFormPriceTable);
        TButtonCleanTable->setObjectName(QStringLiteral("TButtonCleanTable"));
        TButtonCleanTable->setGeometry(QRect(910, 620, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanTable->setIcon(icon2);
        TButtonCleanTable->setIconSize(QSize(48, 48));
        TButtonCleanTable->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormPriceTable);

        QMetaObject::connectSlotsByName(MngFormPriceTable);
    } // setupUi

    void retranslateUi(QDialog *MngFormPriceTable)
    {
        MngFormPriceTable->setWindowTitle(QApplication::translate("MngFormPriceTable", "MngFormPriceTable", Q_NULLPTR));
        GBoxPriceTable->setTitle(QApplication::translate("MngFormPriceTable", "Tabelas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxPriceTable->setToolTip(QApplication::translate("MngFormPriceTable", "Deixe em Selecione para Gerar uma Nova Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDateSchedule->setTitle(QApplication::translate("MngFormPriceTable", "Validade", Q_NULLPTR));
        LBStartDate->setText(QApplication::translate("MngFormPriceTable", "Data In\303\255cio:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditStartDate->setToolTip(QApplication::translate("MngFormPriceTable", "Informe a Data de In\303\255cio de Valida\303\247\303\243o da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditStartDate->setDisplayFormat(QApplication::translate("MngFormPriceTable", "dd/MM/yyyy", Q_NULLPTR));
        LBEndDate->setText(QApplication::translate("MngFormPriceTable", "Data Fim:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditEndDate->setToolTip(QApplication::translate("MngFormPriceTable", "Informe a Data de Termino da Valida\303\247\303\243o da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditEndDate->setDisplayFormat(QApplication::translate("MngFormPriceTable", "dd/MM/yyyy", Q_NULLPTR));
        GBoxCategory->setTitle(QApplication::translate("MngFormPriceTable", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCategory->setToolTip(QApplication::translate("MngFormPriceTable", "Seleciona a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSubCategory->setTitle(QApplication::translate("MngFormPriceTable", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSubCategory->setToolTip(QApplication::translate("MngFormPriceTable", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLocalSite->setTitle(QApplication::translate("MngFormPriceTable", "Local", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSite->setToolTip(QApplication::translate("MngFormPriceTable", "Selecionar o Local Deposito/Filial do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormPriceTable", "Fornecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormPriceTable", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxAdjustmentOption->setTitle(QApplication::translate("MngFormPriceTable", "Op\303\247\303\265es de Ajustes", Q_NULLPTR));
        GBoxAdjustment->setTitle(QApplication::translate("MngFormPriceTable", "Acrescimo/Decrescimo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxAdjustment->setToolTip(QApplication::translate("MngFormPriceTable", "Selecione o Tipo de Opera\303\247\303\243o a ser Aplicada ao Pre\303\247o de Vendas do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPercent->setTitle(QApplication::translate("MngFormPriceTable", "Percentual (%)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditPercent->setToolTip(QApplication::translate("MngFormPriceTable", "Informe o Percentual (%), a ser Aplicado ao Pre\303\247o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("MngFormPriceTable", "Pressione para Aplicar o Percentual(%), ao Tipo de Ajuste Selecionado para os Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QApplication::translate("MngFormPriceTable", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TBWidgetPriceTable->setToolTip(QApplication::translate("MngFormPriceTable", "Produtos da Tabela com Ajustes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormPriceTable", "Fechar a Janela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormPriceTable", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanTable->setToolTip(QApplication::translate("MngFormPriceTable", "Limpar a Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanTable->setText(QApplication::translate("MngFormPriceTable", "Limpar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormPriceTable: public Ui_MngFormPriceTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMPRICETABLE_H
