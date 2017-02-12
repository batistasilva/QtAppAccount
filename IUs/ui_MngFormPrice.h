/********************************************************************************
** Form generated from reading UI file 'MngFormPrice.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMPRICE_H
#define UI_MNGFORMPRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormPrice
{
public:
    QGroupBox *GBoxCategory;
    QComboBox *CBoxCategory;
    QTableWidget *TBWidgetPriceTable;
    QGroupBox *GBoxAdjustmentOption;
    QToolButton *TButtonApply;
    QGroupBox *GBoxFreight;
    QLineEdit *LEditFreight;
    QGroupBox *GBoxInsurance;
    QLineEdit *LEditInsurance;
    QGroupBox *GBoxOverHeads;
    QLineEdit *LEditOverHeads;
    QGroupBox *GBoxOverHeadsFixed;
    QLineEdit *LEditOverHeadsFixed;
    QGroupBox *GBoxMarkUP;
    QLineEdit *LEditMarkUP;
    QGroupBox *GBoxNote;
    QTextEdit *TEditNote;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QToolButton *TButtonExit;
    QToolButton *TButtonCleanTable;
    QGroupBox *GBoxLocalSite;
    QComboBox *CBoxLocalSite;
    QGroupBox *GBoxSubCategory;
    QComboBox *CBoxSubCategory;

    void setupUi(QDialog *MngFormPrice)
    {
        if (MngFormPrice->objectName().isEmpty())
            MngFormPrice->setObjectName(QStringLiteral("MngFormPrice"));
        MngFormPrice->resize(1010, 710);
        GBoxCategory = new QGroupBox(MngFormPrice);
        GBoxCategory->setObjectName(QStringLiteral("GBoxCategory"));
        GBoxCategory->setGeometry(QRect(540, 10, 231, 60));
        CBoxCategory = new QComboBox(GBoxCategory);
        CBoxCategory->setObjectName(QStringLiteral("CBoxCategory"));
        CBoxCategory->setGeometry(QRect(10, 20, 211, 30));
        TBWidgetPriceTable = new QTableWidget(MngFormPrice);
        TBWidgetPriceTable->setObjectName(QStringLiteral("TBWidgetPriceTable"));
        TBWidgetPriceTable->setGeometry(QRect(10, 280, 991, 331));
        GBoxAdjustmentOption = new QGroupBox(MngFormPrice);
        GBoxAdjustmentOption->setObjectName(QStringLiteral("GBoxAdjustmentOption"));
        GBoxAdjustmentOption->setGeometry(QRect(10, 70, 991, 201));
        TButtonApply = new QToolButton(GBoxAdjustmentOption);
        TButtonApply->setObjectName(QStringLiteral("TButtonApply"));
        TButtonApply->setGeometry(QRect(870, 70, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/old-go-down-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonApply->setIcon(icon);
        TButtonApply->setIconSize(QSize(48, 48));
        GBoxFreight = new QGroupBox(GBoxAdjustmentOption);
        GBoxFreight->setObjectName(QStringLiteral("GBoxFreight"));
        GBoxFreight->setGeometry(QRect(20, 20, 131, 60));
        LEditFreight = new QLineEdit(GBoxFreight);
        LEditFreight->setObjectName(QStringLiteral("LEditFreight"));
        LEditFreight->setGeometry(QRect(10, 20, 111, 30));
        GBoxInsurance = new QGroupBox(GBoxAdjustmentOption);
        GBoxInsurance->setObjectName(QStringLiteral("GBoxInsurance"));
        GBoxInsurance->setGeometry(QRect(160, 20, 160, 60));
        LEditInsurance = new QLineEdit(GBoxInsurance);
        LEditInsurance->setObjectName(QStringLiteral("LEditInsurance"));
        LEditInsurance->setGeometry(QRect(10, 20, 140, 30));
        GBoxOverHeads = new QGroupBox(GBoxAdjustmentOption);
        GBoxOverHeads->setObjectName(QStringLiteral("GBoxOverHeads"));
        GBoxOverHeads->setGeometry(QRect(500, 20, 160, 60));
        LEditOverHeads = new QLineEdit(GBoxOverHeads);
        LEditOverHeads->setObjectName(QStringLiteral("LEditOverHeads"));
        LEditOverHeads->setGeometry(QRect(10, 20, 140, 30));
        GBoxOverHeadsFixed = new QGroupBox(GBoxAdjustmentOption);
        GBoxOverHeadsFixed->setObjectName(QStringLiteral("GBoxOverHeadsFixed"));
        GBoxOverHeadsFixed->setGeometry(QRect(330, 20, 160, 60));
        LEditOverHeadsFixed = new QLineEdit(GBoxOverHeadsFixed);
        LEditOverHeadsFixed->setObjectName(QStringLiteral("LEditOverHeadsFixed"));
        LEditOverHeadsFixed->setGeometry(QRect(10, 20, 140, 30));
        GBoxMarkUP = new QGroupBox(GBoxAdjustmentOption);
        GBoxMarkUP->setObjectName(QStringLiteral("GBoxMarkUP"));
        GBoxMarkUP->setGeometry(QRect(670, 20, 160, 60));
        LEditMarkUP = new QLineEdit(GBoxMarkUP);
        LEditMarkUP->setObjectName(QStringLiteral("LEditMarkUP"));
        LEditMarkUP->setGeometry(QRect(10, 20, 140, 30));
        GBoxNote = new QGroupBox(GBoxAdjustmentOption);
        GBoxNote->setObjectName(QStringLiteral("GBoxNote"));
        GBoxNote->setGeometry(QRect(20, 80, 811, 111));
        TEditNote = new QTextEdit(GBoxNote);
        TEditNote->setObjectName(QStringLiteral("TEditNote"));
        TEditNote->setGeometry(QRect(60, 15, 691, 88));
        GBoxSupplier = new QGroupBox(MngFormPrice);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(230, 10, 301, 60));
        CBoxSupplier = new QComboBox(GBoxSupplier);
        CBoxSupplier->setObjectName(QStringLiteral("CBoxSupplier"));
        CBoxSupplier->setGeometry(QRect(10, 20, 281, 30));
        TButtonExit = new QToolButton(MngFormPrice);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(810, 620, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon1);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanTable = new QToolButton(MngFormPrice);
        TButtonCleanTable->setObjectName(QStringLiteral("TButtonCleanTable"));
        TButtonCleanTable->setGeometry(QRect(910, 620, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanTable->setIcon(icon2);
        TButtonCleanTable->setIconSize(QSize(48, 48));
        TButtonCleanTable->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxLocalSite = new QGroupBox(MngFormPrice);
        GBoxLocalSite->setObjectName(QStringLiteral("GBoxLocalSite"));
        GBoxLocalSite->setGeometry(QRect(10, 10, 210, 60));
        CBoxLocalSite = new QComboBox(GBoxLocalSite);
        CBoxLocalSite->setObjectName(QStringLiteral("CBoxLocalSite"));
        CBoxLocalSite->setGeometry(QRect(10, 20, 190, 30));
        GBoxSubCategory = new QGroupBox(MngFormPrice);
        GBoxSubCategory->setObjectName(QStringLiteral("GBoxSubCategory"));
        GBoxSubCategory->setGeometry(QRect(780, 10, 221, 60));
        CBoxSubCategory = new QComboBox(GBoxSubCategory);
        CBoxSubCategory->setObjectName(QStringLiteral("CBoxSubCategory"));
        CBoxSubCategory->setGeometry(QRect(10, 20, 200, 30));

        retranslateUi(MngFormPrice);

        QMetaObject::connectSlotsByName(MngFormPrice);
    } // setupUi

    void retranslateUi(QDialog *MngFormPrice)
    {
        MngFormPrice->setWindowTitle(QApplication::translate("MngFormPrice", "MngFormPrice", Q_NULLPTR));
        GBoxCategory->setTitle(QApplication::translate("MngFormPrice", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCategory->setToolTip(QApplication::translate("MngFormPrice", "Seleciona a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TBWidgetPriceTable->setToolTip(QApplication::translate("MngFormPrice", "Produtos da Tabela com Ajustes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxAdjustmentOption->setTitle(QApplication::translate("MngFormPrice", "Op\303\247\303\265es de Ajustes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonApply->setToolTip(QApplication::translate("MngFormPrice", "Pressione para Aplicar o Mark-UP em Percentual(%), para os Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonApply->setText(QApplication::translate("MngFormPrice", "+", Q_NULLPTR));
        GBoxFreight->setTitle(QApplication::translate("MngFormPrice", "Frete (R$)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFreight->setToolTip(QApplication::translate("MngFormPrice", "Informar o Frete de Recebimento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxInsurance->setTitle(QApplication::translate("MngFormPrice", "Seguro (R$)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditInsurance->setToolTip(QApplication::translate("MngFormPrice", "Informar o Valor do Seguro, caso Tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOverHeads->setTitle(QApplication::translate("MngFormPrice", "Desp. Variaveis (R$)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditOverHeads->setToolTip(QApplication::translate("MngFormPrice", "Informar as Despesas Vari\303\241veis do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOverHeadsFixed->setTitle(QApplication::translate("MngFormPrice", "Desp. Fixas (R$)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditOverHeadsFixed->setToolTip(QApplication::translate("MngFormPrice", "Informar as Despesas Fixas do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxMarkUP->setTitle(QApplication::translate("MngFormPrice", "Mark-UP      (%) ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditMarkUP->setToolTip(QApplication::translate("MngFormPrice", "Informar o Mark-Up/Percentual de Lucro Pretendido para os Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNote->setTitle(QApplication::translate("MngFormPrice", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNote->setToolTip(QApplication::translate("MngFormPrice", "Informa uma Nota sobrea as Altera\303\247\303\265es...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormPrice", "Fornecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormPrice", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormPrice", "Fechar a Janela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormPrice", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanTable->setToolTip(QApplication::translate("MngFormPrice", "Limpar a Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanTable->setText(QApplication::translate("MngFormPrice", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxLocalSite->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxLocalSite->setTitle(QApplication::translate("MngFormPrice", "Local", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSite->setToolTip(QApplication::translate("MngFormPrice", "Selecionar o Local Deposito/Filial/Centro de Distribui\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSubCategory->setTitle(QApplication::translate("MngFormPrice", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSubCategory->setToolTip(QApplication::translate("MngFormPrice", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MngFormPrice: public Ui_MngFormPrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMPRICE_H
