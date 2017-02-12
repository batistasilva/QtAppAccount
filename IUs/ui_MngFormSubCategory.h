/********************************************************************************
** Form generated from reading UI file 'MngFormSubCategory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSUBCATEGORY_H
#define UI_MNGFORMSUBCATEGORY_H

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

class Ui_MngFormSubCategory
{
public:
    QGroupBox *GBoxViewSubCategory;
    QTableView *TableViewSubCategory;
    QToolButton *TButtonRemoveSubCategory;
    QToolButton *TButtonCleanSubCategory;
    QToolButton *TButtonExitSubCategory;
    QGroupBox *GBoxDataSubCategory;
    QLabel *LabelCodeSubCategory;
    QLabel *LabelNameSubCategory;
    QLabel *LabelShortNameSubCategory;
    QToolButton *TButtonSaveSubCategory;
    QComboBox *CBoxCodeSubCategory;
    QLineEdit *LEditIDSubCategory;
    QLineEdit *LEditNameSubCategory;
    QLineEdit *LEditShortNameSubCategory;
    QGroupBox *GBoxSubCategoryStatusActive;
    QCheckBox *CheckBoxSubCategoryStatusActive;

    void setupUi(QDialog *MngFormSubCategory)
    {
        if (MngFormSubCategory->objectName().isEmpty())
            MngFormSubCategory->setObjectName(QStringLiteral("MngFormSubCategory"));
        MngFormSubCategory->resize(750, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormSubCategory->setWindowIcon(icon);
        GBoxViewSubCategory = new QGroupBox(MngFormSubCategory);
        GBoxViewSubCategory->setObjectName(QStringLiteral("GBoxViewSubCategory"));
        GBoxViewSubCategory->setGeometry(QRect(10, 180, 731, 311));
        TableViewSubCategory = new QTableView(GBoxViewSubCategory);
        TableViewSubCategory->setObjectName(QStringLiteral("TableViewSubCategory"));
        TableViewSubCategory->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveSubCategory = new QToolButton(GBoxViewSubCategory);
        TButtonRemoveSubCategory->setObjectName(QStringLiteral("TButtonRemoveSubCategory"));
        TButtonRemoveSubCategory->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveSubCategory->setIcon(icon1);
        TButtonRemoveSubCategory->setIconSize(QSize(48, 48));
        TButtonRemoveSubCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanSubCategory = new QToolButton(GBoxViewSubCategory);
        TButtonCleanSubCategory->setObjectName(QStringLiteral("TButtonCleanSubCategory"));
        TButtonCleanSubCategory->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanSubCategory->setIcon(icon2);
        TButtonCleanSubCategory->setIconSize(QSize(48, 48));
        TButtonCleanSubCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitSubCategory = new QToolButton(MngFormSubCategory);
        TButtonExitSubCategory->setObjectName(QStringLiteral("TButtonExitSubCategory"));
        TButtonExitSubCategory->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitSubCategory->setIcon(icon3);
        TButtonExitSubCategory->setIconSize(QSize(48, 48));
        TButtonExitSubCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataSubCategory = new QGroupBox(MngFormSubCategory);
        GBoxDataSubCategory->setObjectName(QStringLiteral("GBoxDataSubCategory"));
        GBoxDataSubCategory->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataSubCategory->setAcceptDrops(true);
        LabelCodeSubCategory = new QLabel(GBoxDataSubCategory);
        LabelCodeSubCategory->setObjectName(QStringLiteral("LabelCodeSubCategory"));
        LabelCodeSubCategory->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeSubCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameSubCategory = new QLabel(GBoxDataSubCategory);
        LabelNameSubCategory->setObjectName(QStringLiteral("LabelNameSubCategory"));
        LabelNameSubCategory->setGeometry(QRect(0, 80, 120, 30));
        LabelNameSubCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameSubCategory = new QLabel(GBoxDataSubCategory);
        LabelShortNameSubCategory->setObjectName(QStringLiteral("LabelShortNameSubCategory"));
        LabelShortNameSubCategory->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameSubCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveSubCategory = new QToolButton(GBoxDataSubCategory);
        TButtonSaveSubCategory->setObjectName(QStringLiteral("TButtonSaveSubCategory"));
        TButtonSaveSubCategory->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveSubCategory->setIcon(icon4);
        TButtonSaveSubCategory->setIconSize(QSize(48, 48));
        TButtonSaveSubCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeSubCategory = new QComboBox(GBoxDataSubCategory);
        CBoxCodeSubCategory->setObjectName(QStringLiteral("CBoxCodeSubCategory"));
        CBoxCodeSubCategory->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeSubCategory->setEditable(true);
        LEditIDSubCategory = new QLineEdit(GBoxDataSubCategory);
        LEditIDSubCategory->setObjectName(QStringLiteral("LEditIDSubCategory"));
        LEditIDSubCategory->setGeometry(QRect(230, 30, 50, 30));
        LEditNameSubCategory = new QLineEdit(GBoxDataSubCategory);
        LEditNameSubCategory->setObjectName(QStringLiteral("LEditNameSubCategory"));
        LEditNameSubCategory->setGeometry(QRect(120, 80, 300, 30));
        LEditShortNameSubCategory = new QLineEdit(GBoxDataSubCategory);
        LEditShortNameSubCategory->setObjectName(QStringLiteral("LEditShortNameSubCategory"));
        LEditShortNameSubCategory->setGeometry(QRect(120, 120, 150, 30));
        GBoxSubCategoryStatusActive = new QGroupBox(GBoxDataSubCategory);
        GBoxSubCategoryStatusActive->setObjectName(QStringLiteral("GBoxSubCategoryStatusActive"));
        GBoxSubCategoryStatusActive->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxSubCategoryStatusActive = new QCheckBox(GBoxSubCategoryStatusActive);
        CheckBoxSubCategoryStatusActive->setObjectName(QStringLiteral("CheckBoxSubCategoryStatusActive"));
        CheckBoxSubCategoryStatusActive->setGeometry(QRect(50, 10, 100, 30));

        retranslateUi(MngFormSubCategory);

        QMetaObject::connectSlotsByName(MngFormSubCategory);
    } // setupUi

    void retranslateUi(QDialog *MngFormSubCategory)
    {
        MngFormSubCategory->setWindowTitle(QApplication::translate("MngFormSubCategory", "Manuten\303\247\303\243o de SubCategorias", Q_NULLPTR));
        GBoxViewSubCategory->setTitle(QApplication::translate("MngFormSubCategory", "Sub Categorias", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Sub-Categorias Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveSubCategory->setText(QApplication::translate("MngFormSubCategory", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanSubCategory->setText(QApplication::translate("MngFormSubCategory", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitSubCategory->setText(QApplication::translate("MngFormSubCategory", "Sair", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataSubCategory->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataSubCategory->setTitle(QApplication::translate("MngFormSubCategory", "Dados", Q_NULLPTR));
        LabelCodeSubCategory->setText(QApplication::translate("MngFormSubCategory", "C\303\263digo:", Q_NULLPTR));
        LabelNameSubCategory->setText(QApplication::translate("MngFormSubCategory", "Nome:", Q_NULLPTR));
        LabelShortNameSubCategory->setText(QApplication::translate("MngFormSubCategory", "Nome Curto:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Salvar os dados para a Sub-Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveSubCategory->setText(QApplication::translate("MngFormSubCategory", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Informar um C\303\263digo para a Sub-Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Informar uma  Descri\303\247\303\243o/Nome para a Sub-Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameSubCategory->setToolTip(QApplication::translate("MngFormSubCategory", "Informar um Nome Curto/Sigla/Apelido para a Sub-Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSubCategoryStatusActive->setTitle(QApplication::translate("MngFormSubCategory", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxSubCategoryStatusActive->setToolTip(QApplication::translate("MngFormSubCategory", "Ativar/Desativar a Sub-Categoria para ser ou n\303\243o Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxSubCategoryStatusActive->setText(QApplication::translate("MngFormSubCategory", "Ativo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormSubCategory: public Ui_MngFormSubCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSUBCATEGORY_H
