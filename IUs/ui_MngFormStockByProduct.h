/********************************************************************************
** Form generated from reading UI file 'MngFormStockByProduct.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSTOCKBYPRODUCT_H
#define UI_MNGFORMSTOCKBYPRODUCT_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MngFormStockByProduct
{
public:
    QTabWidget *TabWidgetEntryStock;
    QWidget *TabEntryStock;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSave;
    QGroupBox *GBoxProduct;
    QGroupBox *GBoxProductCode;
    QComboBox *CBoxProductCode;
    QToolButton *TButtonProductSearch;
    QGroupBox *GBoxFullDescription;
    QLineEdit *LEditFullDescription;
    QGroupBox *GBoxActualStock;
    QLineEdit *LEditActualStock;
    QLabel *LabelStockSum;
    QGroupBox *GBoxStockSum;
    QLineEdit *LEditStockSum;
    QLabel *LabelStockEqual;
    QGroupBox *GBoxNewActualStock;
    QLineEdit *LEditNewActualStock;
    QGroupBox *GBoxNote;
    QTextEdit *TEditNoteEntry;
    QGroupBox *GBoxFilter;
    QGroupBox *GBoxLocalSite;
    QComboBox *CBoxLocalSite;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplier;
    QGroupBox *GBoxCategory;
    QComboBox *CBoxCategory;
    QGroupBox *GBoxSubCategory;
    QComboBox *CBoxSubCategory;
    QWidget *TabFixStock;
    QGroupBox *GBoxProductStockFix;
    QGroupBox *GBoxProductCodeStockFix;
    QComboBox *CBoxProductCodeStockFix;
    QToolButton *TButtonProductSearchStockFix;
    QGroupBox *GBoxFullDescriptionStockFix;
    QLineEdit *LEditFullDescriptionStockFix;
    QGroupBox *GBoxActualStockFix;
    QLineEdit *LEditActualStockFix;
    QLabel *LabelStockEqualStockFix;
    QGroupBox *GBoxStockFixNewValue;
    QLineEdit *LEditStockFixNewValue;
    QLabel *LabelStockFixNewEqual;
    QGroupBox *GBoxNewActualStockFix;
    QLineEdit *LEditNewActualStockFix;
    QGroupBox *GBoxNoteStockFix;
    QTextEdit *TEditNoteEntryStockFix;
    QGroupBox *GBoxFilterStockFix;
    QGroupBox *GBoxLocalSiteStockFix;
    QComboBox *CBoxLocalSiteStockFix;
    QGroupBox *GBoxSupplierStockFix;
    QComboBox *CBoxSupplierStockFix;
    QGroupBox *GBoxCategoryStockFix;
    QComboBox *CBoxCategoryStockFix;
    QGroupBox *GBoxSubCategoryStockFix;
    QComboBox *CBoxSubCategoryStockFix;
    QToolButton *TButtonCleanFormStockFix;
    QToolButton *TButtonSaveStockFix;
    QToolButton *TButtonExit;

    void setupUi(QDialog *MngFormStockByProduct)
    {
        if (MngFormStockByProduct->objectName().isEmpty())
            MngFormStockByProduct->setObjectName(QStringLiteral("MngFormStockByProduct"));
        MngFormStockByProduct->resize(1010, 710);
        MngFormStockByProduct->setMinimumSize(QSize(1010, 710));
        MngFormStockByProduct->setMaximumSize(QSize(1010, 710));
        TabWidgetEntryStock = new QTabWidget(MngFormStockByProduct);
        TabWidgetEntryStock->setObjectName(QStringLiteral("TabWidgetEntryStock"));
        TabWidgetEntryStock->setGeometry(QRect(0, 0, 1001, 591));
        TabEntryStock = new QWidget();
        TabEntryStock->setObjectName(QStringLiteral("TabEntryStock"));
        TButtonCleanForm = new QToolButton(TabEntryStock);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(880, 460, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(TabEntryStock);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setGeometry(QRect(780, 460, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon1);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProduct = new QGroupBox(TabEntryStock);
        GBoxProduct->setObjectName(QStringLiteral("GBoxProduct"));
        GBoxProduct->setGeometry(QRect(10, 130, 971, 311));
        GBoxProductCode = new QGroupBox(GBoxProduct);
        GBoxProductCode->setObjectName(QStringLiteral("GBoxProductCode"));
        GBoxProductCode->setGeometry(QRect(10, 20, 211, 60));
        CBoxProductCode = new QComboBox(GBoxProductCode);
        CBoxProductCode->setObjectName(QStringLiteral("CBoxProductCode"));
        CBoxProductCode->setGeometry(QRect(10, 20, 161, 30));
        TButtonProductSearch = new QToolButton(GBoxProductCode);
        TButtonProductSearch->setObjectName(QStringLiteral("TButtonProductSearch"));
        TButtonProductSearch->setGeometry(QRect(170, 20, 30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/24x24/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductSearch->setIcon(icon2);
        GBoxFullDescription = new QGroupBox(GBoxProduct);
        GBoxFullDescription->setObjectName(QStringLiteral("GBoxFullDescription"));
        GBoxFullDescription->setGeometry(QRect(230, 20, 731, 60));
        LEditFullDescription = new QLineEdit(GBoxFullDescription);
        LEditFullDescription->setObjectName(QStringLiteral("LEditFullDescription"));
        LEditFullDescription->setGeometry(QRect(10, 20, 711, 30));
        GBoxActualStock = new QGroupBox(GBoxProduct);
        GBoxActualStock->setObjectName(QStringLiteral("GBoxActualStock"));
        GBoxActualStock->setGeometry(QRect(10, 110, 211, 60));
        LEditActualStock = new QLineEdit(GBoxActualStock);
        LEditActualStock->setObjectName(QStringLiteral("LEditActualStock"));
        LEditActualStock->setGeometry(QRect(10, 20, 190, 27));
        LEditActualStock->setAlignment(Qt::AlignCenter);
        LEditActualStock->setReadOnly(true);
        LabelStockSum = new QLabel(GBoxProduct);
        LabelStockSum->setObjectName(QStringLiteral("LabelStockSum"));
        LabelStockSum->setGeometry(QRect(280, 130, 30, 30));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        LabelStockSum->setFont(font);
        LabelStockSum->setStyleSheet(QStringLiteral("QLabel{font-color:rgb(170, 255, 0);}"));
        LabelStockSum->setAlignment(Qt::AlignCenter);
        GBoxStockSum = new QGroupBox(GBoxProduct);
        GBoxStockSum->setObjectName(QStringLiteral("GBoxStockSum"));
        GBoxStockSum->setGeometry(QRect(370, 110, 211, 60));
        LEditStockSum = new QLineEdit(GBoxStockSum);
        LEditStockSum->setObjectName(QStringLiteral("LEditStockSum"));
        LEditStockSum->setGeometry(QRect(10, 20, 190, 27));
        LabelStockEqual = new QLabel(GBoxProduct);
        LabelStockEqual->setObjectName(QStringLiteral("LabelStockEqual"));
        LabelStockEqual->setGeometry(QRect(650, 130, 30, 30));
        LabelStockEqual->setFont(font);
        LabelStockEqual->setStyleSheet(QStringLiteral("font-color:rgb(170, 255, 0);"));
        LabelStockEqual->setAlignment(Qt::AlignCenter);
        GBoxNewActualStock = new QGroupBox(GBoxProduct);
        GBoxNewActualStock->setObjectName(QStringLiteral("GBoxNewActualStock"));
        GBoxNewActualStock->setGeometry(QRect(750, 110, 211, 60));
        LEditNewActualStock = new QLineEdit(GBoxNewActualStock);
        LEditNewActualStock->setObjectName(QStringLiteral("LEditNewActualStock"));
        LEditNewActualStock->setGeometry(QRect(10, 20, 190, 27));
        LEditNewActualStock->setAlignment(Qt::AlignCenter);
        LEditNewActualStock->setReadOnly(true);
        GBoxNote = new QGroupBox(GBoxProduct);
        GBoxNote->setObjectName(QStringLiteral("GBoxNote"));
        GBoxNote->setGeometry(QRect(10, 180, 951, 111));
        TEditNoteEntry = new QTextEdit(GBoxNote);
        TEditNoteEntry->setObjectName(QStringLiteral("TEditNoteEntry"));
        TEditNoteEntry->setGeometry(QRect(10, 20, 931, 78));
        GBoxFilter = new QGroupBox(TabEntryStock);
        GBoxFilter->setObjectName(QStringLiteral("GBoxFilter"));
        GBoxFilter->setGeometry(QRect(10, 10, 971, 101));
        GBoxLocalSite = new QGroupBox(GBoxFilter);
        GBoxLocalSite->setObjectName(QStringLiteral("GBoxLocalSite"));
        GBoxLocalSite->setGeometry(QRect(10, 20, 210, 60));
        CBoxLocalSite = new QComboBox(GBoxLocalSite);
        CBoxLocalSite->setObjectName(QStringLiteral("CBoxLocalSite"));
        CBoxLocalSite->setGeometry(QRect(10, 20, 191, 30));
        GBoxSupplier = new QGroupBox(GBoxFilter);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(230, 20, 270, 60));
        CBoxSupplier = new QComboBox(GBoxSupplier);
        CBoxSupplier->setObjectName(QStringLiteral("CBoxSupplier"));
        CBoxSupplier->setGeometry(QRect(10, 20, 251, 30));
        GBoxCategory = new QGroupBox(GBoxFilter);
        GBoxCategory->setObjectName(QStringLiteral("GBoxCategory"));
        GBoxCategory->setGeometry(QRect(510, 20, 221, 60));
        CBoxCategory = new QComboBox(GBoxCategory);
        CBoxCategory->setObjectName(QStringLiteral("CBoxCategory"));
        CBoxCategory->setGeometry(QRect(10, 20, 200, 30));
        GBoxSubCategory = new QGroupBox(GBoxFilter);
        GBoxSubCategory->setObjectName(QStringLiteral("GBoxSubCategory"));
        GBoxSubCategory->setGeometry(QRect(740, 20, 221, 60));
        CBoxSubCategory = new QComboBox(GBoxSubCategory);
        CBoxSubCategory->setObjectName(QStringLiteral("CBoxSubCategory"));
        CBoxSubCategory->setGeometry(QRect(10, 20, 200, 30));
        TabWidgetEntryStock->addTab(TabEntryStock, QString());
        TabFixStock = new QWidget();
        TabFixStock->setObjectName(QStringLiteral("TabFixStock"));
        GBoxProductStockFix = new QGroupBox(TabFixStock);
        GBoxProductStockFix->setObjectName(QStringLiteral("GBoxProductStockFix"));
        GBoxProductStockFix->setGeometry(QRect(10, 130, 971, 311));
        GBoxProductCodeStockFix = new QGroupBox(GBoxProductStockFix);
        GBoxProductCodeStockFix->setObjectName(QStringLiteral("GBoxProductCodeStockFix"));
        GBoxProductCodeStockFix->setGeometry(QRect(10, 20, 211, 60));
        CBoxProductCodeStockFix = new QComboBox(GBoxProductCodeStockFix);
        CBoxProductCodeStockFix->setObjectName(QStringLiteral("CBoxProductCodeStockFix"));
        CBoxProductCodeStockFix->setGeometry(QRect(10, 20, 161, 30));
        TButtonProductSearchStockFix = new QToolButton(GBoxProductCodeStockFix);
        TButtonProductSearchStockFix->setObjectName(QStringLiteral("TButtonProductSearchStockFix"));
        TButtonProductSearchStockFix->setGeometry(QRect(170, 20, 30, 30));
        TButtonProductSearchStockFix->setIcon(icon2);
        GBoxFullDescriptionStockFix = new QGroupBox(GBoxProductStockFix);
        GBoxFullDescriptionStockFix->setObjectName(QStringLiteral("GBoxFullDescriptionStockFix"));
        GBoxFullDescriptionStockFix->setGeometry(QRect(230, 20, 731, 60));
        LEditFullDescriptionStockFix = new QLineEdit(GBoxFullDescriptionStockFix);
        LEditFullDescriptionStockFix->setObjectName(QStringLiteral("LEditFullDescriptionStockFix"));
        LEditFullDescriptionStockFix->setGeometry(QRect(10, 20, 711, 30));
        GBoxActualStockFix = new QGroupBox(GBoxProductStockFix);
        GBoxActualStockFix->setObjectName(QStringLiteral("GBoxActualStockFix"));
        GBoxActualStockFix->setGeometry(QRect(10, 110, 211, 60));
        LEditActualStockFix = new QLineEdit(GBoxActualStockFix);
        LEditActualStockFix->setObjectName(QStringLiteral("LEditActualStockFix"));
        LEditActualStockFix->setGeometry(QRect(10, 20, 190, 30));
        LEditActualStockFix->setAlignment(Qt::AlignCenter);
        LEditActualStockFix->setReadOnly(true);
        LabelStockEqualStockFix = new QLabel(GBoxProductStockFix);
        LabelStockEqualStockFix->setObjectName(QStringLiteral("LabelStockEqualStockFix"));
        LabelStockEqualStockFix->setGeometry(QRect(280, 130, 30, 30));
        LabelStockEqualStockFix->setFont(font);
        LabelStockEqualStockFix->setStyleSheet(QStringLiteral("QLabel{font-color:rgb(170, 255, 0);}"));
        LabelStockEqualStockFix->setAlignment(Qt::AlignCenter);
        GBoxStockFixNewValue = new QGroupBox(GBoxProductStockFix);
        GBoxStockFixNewValue->setObjectName(QStringLiteral("GBoxStockFixNewValue"));
        GBoxStockFixNewValue->setGeometry(QRect(370, 110, 211, 60));
        LEditStockFixNewValue = new QLineEdit(GBoxStockFixNewValue);
        LEditStockFixNewValue->setObjectName(QStringLiteral("LEditStockFixNewValue"));
        LEditStockFixNewValue->setGeometry(QRect(10, 20, 190, 30));
        LabelStockFixNewEqual = new QLabel(GBoxProductStockFix);
        LabelStockFixNewEqual->setObjectName(QStringLiteral("LabelStockFixNewEqual"));
        LabelStockFixNewEqual->setGeometry(QRect(650, 130, 30, 30));
        LabelStockFixNewEqual->setFont(font);
        LabelStockFixNewEqual->setStyleSheet(QStringLiteral("font-color:rgb(170, 255, 0);"));
        LabelStockFixNewEqual->setAlignment(Qt::AlignCenter);
        GBoxNewActualStockFix = new QGroupBox(GBoxProductStockFix);
        GBoxNewActualStockFix->setObjectName(QStringLiteral("GBoxNewActualStockFix"));
        GBoxNewActualStockFix->setGeometry(QRect(750, 110, 211, 60));
        LEditNewActualStockFix = new QLineEdit(GBoxNewActualStockFix);
        LEditNewActualStockFix->setObjectName(QStringLiteral("LEditNewActualStockFix"));
        LEditNewActualStockFix->setGeometry(QRect(10, 20, 190, 30));
        LEditNewActualStockFix->setAlignment(Qt::AlignCenter);
        LEditNewActualStockFix->setReadOnly(true);
        GBoxNoteStockFix = new QGroupBox(GBoxProductStockFix);
        GBoxNoteStockFix->setObjectName(QStringLiteral("GBoxNoteStockFix"));
        GBoxNoteStockFix->setGeometry(QRect(10, 180, 951, 111));
        TEditNoteEntryStockFix = new QTextEdit(GBoxNoteStockFix);
        TEditNoteEntryStockFix->setObjectName(QStringLiteral("TEditNoteEntryStockFix"));
        TEditNoteEntryStockFix->setGeometry(QRect(10, 20, 931, 78));
        GBoxFilterStockFix = new QGroupBox(TabFixStock);
        GBoxFilterStockFix->setObjectName(QStringLiteral("GBoxFilterStockFix"));
        GBoxFilterStockFix->setGeometry(QRect(10, 10, 971, 101));
        GBoxLocalSiteStockFix = new QGroupBox(GBoxFilterStockFix);
        GBoxLocalSiteStockFix->setObjectName(QStringLiteral("GBoxLocalSiteStockFix"));
        GBoxLocalSiteStockFix->setGeometry(QRect(10, 20, 210, 60));
        CBoxLocalSiteStockFix = new QComboBox(GBoxLocalSiteStockFix);
        CBoxLocalSiteStockFix->setObjectName(QStringLiteral("CBoxLocalSiteStockFix"));
        CBoxLocalSiteStockFix->setGeometry(QRect(10, 20, 191, 30));
        GBoxSupplierStockFix = new QGroupBox(GBoxFilterStockFix);
        GBoxSupplierStockFix->setObjectName(QStringLiteral("GBoxSupplierStockFix"));
        GBoxSupplierStockFix->setGeometry(QRect(230, 20, 270, 60));
        CBoxSupplierStockFix = new QComboBox(GBoxSupplierStockFix);
        CBoxSupplierStockFix->setObjectName(QStringLiteral("CBoxSupplierStockFix"));
        CBoxSupplierStockFix->setGeometry(QRect(10, 20, 251, 30));
        GBoxCategoryStockFix = new QGroupBox(GBoxFilterStockFix);
        GBoxCategoryStockFix->setObjectName(QStringLiteral("GBoxCategoryStockFix"));
        GBoxCategoryStockFix->setGeometry(QRect(510, 20, 221, 60));
        CBoxCategoryStockFix = new QComboBox(GBoxCategoryStockFix);
        CBoxCategoryStockFix->setObjectName(QStringLiteral("CBoxCategoryStockFix"));
        CBoxCategoryStockFix->setGeometry(QRect(10, 20, 200, 30));
        GBoxSubCategoryStockFix = new QGroupBox(GBoxFilterStockFix);
        GBoxSubCategoryStockFix->setObjectName(QStringLiteral("GBoxSubCategoryStockFix"));
        GBoxSubCategoryStockFix->setGeometry(QRect(740, 20, 221, 60));
        CBoxSubCategoryStockFix = new QComboBox(GBoxSubCategoryStockFix);
        CBoxSubCategoryStockFix->setObjectName(QStringLiteral("CBoxSubCategoryStockFix"));
        CBoxSubCategoryStockFix->setGeometry(QRect(10, 20, 200, 30));
        TButtonCleanFormStockFix = new QToolButton(TabFixStock);
        TButtonCleanFormStockFix->setObjectName(QStringLiteral("TButtonCleanFormStockFix"));
        TButtonCleanFormStockFix->setGeometry(QRect(880, 460, 90, 80));
        TButtonCleanFormStockFix->setIcon(icon);
        TButtonCleanFormStockFix->setIconSize(QSize(48, 48));
        TButtonCleanFormStockFix->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSaveStockFix = new QToolButton(TabFixStock);
        TButtonSaveStockFix->setObjectName(QStringLiteral("TButtonSaveStockFix"));
        TButtonSaveStockFix->setGeometry(QRect(780, 460, 90, 80));
        TButtonSaveStockFix->setIcon(icon1);
        TButtonSaveStockFix->setIconSize(QSize(48, 48));
        TButtonSaveStockFix->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetEntryStock->addTab(TabFixStock, QString());
        TButtonExit = new QToolButton(MngFormStockByProduct);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(10, 610, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon3);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormStockByProduct);

        TabWidgetEntryStock->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MngFormStockByProduct);
    } // setupUi

    void retranslateUi(QDialog *MngFormStockByProduct)
    {
        MngFormStockByProduct->setWindowTitle(QApplication::translate("MngFormStockByProduct", "MngFormStockByProduct", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TabWidgetEntryStock->setToolTip(QApplication::translate("MngFormStockByProduct", "Seleciona a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormStockByProduct", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormStockByProduct", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("MngFormStockByProduct", "Confirmar a Atualiza\303\247\303\243o do Estoque para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("MngFormStockByProduct", "Salvar", Q_NULLPTR));
        GBoxProduct->setTitle(QApplication::translate("MngFormStockByProduct", "Produto", Q_NULLPTR));
        GBoxProductCode->setTitle(QApplication::translate("MngFormStockByProduct", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCode->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar ou Digitar o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductSearch->setToolTip(QApplication::translate("MngFormStockByProduct", "Clicar para Pesquisar o Produto pelo C\303\263digo Informado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductSearch->setText(QString());
        GBoxFullDescription->setTitle(QApplication::translate("MngFormStockByProduct", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescription->setToolTip(QApplication::translate("MngFormStockByProduct", "Informar uma Descri\303\247\303\243o para Pesquisa do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxActualStock->setTitle(QApplication::translate("MngFormStockByProduct", "Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditActualStock->setToolTip(QApplication::translate("MngFormStockByProduct", "Exibe o Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStockSum->setText(QApplication::translate("MngFormStockByProduct", "+", Q_NULLPTR));
        GBoxStockSum->setTitle(QApplication::translate("MngFormStockByProduct", "Estoque Soma", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditStockSum->setToolTip(QApplication::translate("MngFormStockByProduct", "Informar o Estoque a ser Acrescentado ao Atual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStockEqual->setText(QApplication::translate("MngFormStockByProduct", "=", Q_NULLPTR));
        GBoxNewActualStock->setTitle(QApplication::translate("MngFormStockByProduct", "Novo Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNewActualStock->setToolTip(QApplication::translate("MngFormStockByProduct", "Exibe o Novo Estoque Atual sem a Atualiza\303\247\303\243o Confirmada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNote->setTitle(QApplication::translate("MngFormStockByProduct", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNoteEntry->setToolTip(QApplication::translate("MngFormStockByProduct", "Informa uma Nota Referente a Atualiza\303\247\303\243o que est\303\241 sendo Feita...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFilter->setTitle(QApplication::translate("MngFormStockByProduct", "Filtros", Q_NULLPTR));
        GBoxLocalSite->setTitle(QApplication::translate("MngFormStockByProduct", "Local", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSite->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar o Local Deposito/Filial do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QApplication::translate("MngFormStockByProduct", "Fornecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplier->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCategory->setTitle(QApplication::translate("MngFormStockByProduct", "Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCategory->setToolTip(QApplication::translate("MngFormStockByProduct", "Seleciona a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSubCategory->setTitle(QApplication::translate("MngFormStockByProduct", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSubCategory->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetEntryStock->setTabText(TabWidgetEntryStock->indexOf(TabEntryStock), QApplication::translate("MngFormStockByProduct", "Entrada de Estoque", Q_NULLPTR));
        GBoxProductStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Produto", Q_NULLPTR));
        GBoxProductCodeStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductCodeStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar ou Digitar o C\303\263digo do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonProductSearchStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Clicar para Pesquisar o Produto pelo C\303\263digo Informado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductSearchStockFix->setText(QString());
        GBoxFullDescriptionStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullDescriptionStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Informar uma Descri\303\247\303\243o para Pesquisa do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxActualStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditActualStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Exibe o Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStockEqualStockFix->setText(QApplication::translate("MngFormStockByProduct", "=", Q_NULLPTR));
        GBoxStockFixNewValue->setTitle(QApplication::translate("MngFormStockByProduct", "Valor Corre\303\247\303\243o do Estoque", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditStockFixNewValue->setToolTip(QApplication::translate("MngFormStockByProduct", "Informar o Novo Estoque Atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStockFixNewEqual->setText(QApplication::translate("MngFormStockByProduct", "=", Q_NULLPTR));
        GBoxNewActualStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Novo Estoque Atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNewActualStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Exibe o Novo Estoque Atual do Produto sem a Confirma\303\247\303\243o de Altera\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNoteStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNoteEntryStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Informa uma Nota Referente ao Acerto do Estoque  que est\303\241 sendo Feito...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFilterStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Filtros", Q_NULLPTR));
        GBoxLocalSiteStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Local", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalSiteStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar o Local Deposito/Filial do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSupplierStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Fornecedor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSupplierStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCategoryStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Categoria", Q_NULLPTR));
        GBoxSubCategoryStockFix->setTitle(QApplication::translate("MngFormStockByProduct", "Sub-Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSubCategoryStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonCleanFormStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanFormStockFix->setText(QApplication::translate("MngFormStockByProduct", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveStockFix->setToolTip(QApplication::translate("MngFormStockByProduct", "Confirmar o Acerto do Estoque para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveStockFix->setText(QApplication::translate("MngFormStockByProduct", "Confirmar", Q_NULLPTR));
        TabWidgetEntryStock->setTabText(TabWidgetEntryStock->indexOf(TabFixStock), QApplication::translate("MngFormStockByProduct", "Acerto de Estoque", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormStockByProduct", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormStockByProduct", "Sa\303\255da", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormStockByProduct: public Ui_MngFormStockByProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSTOCKBYPRODUCT_H
