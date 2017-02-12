/********************************************************************************
** Form generated from reading UI file 'MngFormCategory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCATEGORY_H
#define UI_MNGFORMCATEGORY_H

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

class Ui_MngFormCategory
{
public:
    QGroupBox *GBoxViewCategory;
    QTableView *TableViewCategory;
    QToolButton *TButtonRemoveCategory;
    QToolButton *TButtonCleanCategory;
    QGroupBox *GBoxDataCategory;
    QLabel *LabelCodeCategory;
    QLabel *LabelNameCategory;
    QLabel *LabelShortNameCategory;
    QToolButton *TButtonSaveCategory;
    QComboBox *CBoxCodeCategory;
    QLineEdit *LEditIDCategory;
    QLineEdit *LEditNameCategory;
    QLineEdit *LEditShortNameCategory;
    QGroupBox *GBoxCategoryStatusActive;
    QCheckBox *CheckBoxCategoryStatusActive;
    QToolButton *TButtonExitCategory;

    void setupUi(QDialog *MngFormCategory)
    {
        if (MngFormCategory->objectName().isEmpty())
            MngFormCategory->setObjectName(QStringLiteral("MngFormCategory"));
        MngFormCategory->resize(750, 600);
        MngFormCategory->setMinimumSize(QSize(750, 600));
        MngFormCategory->setSizeIncrement(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormCategory->setWindowIcon(icon);
        GBoxViewCategory = new QGroupBox(MngFormCategory);
        GBoxViewCategory->setObjectName(QStringLiteral("GBoxViewCategory"));
        GBoxViewCategory->setGeometry(QRect(10, 180, 731, 311));
        TableViewCategory = new QTableView(GBoxViewCategory);
        TableViewCategory->setObjectName(QStringLiteral("TableViewCategory"));
        TableViewCategory->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveCategory = new QToolButton(GBoxViewCategory);
        TButtonRemoveCategory->setObjectName(QStringLiteral("TButtonRemoveCategory"));
        TButtonRemoveCategory->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveCategory->setIcon(icon1);
        TButtonRemoveCategory->setIconSize(QSize(48, 48));
        TButtonRemoveCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanCategory = new QToolButton(GBoxViewCategory);
        TButtonCleanCategory->setObjectName(QStringLiteral("TButtonCleanCategory"));
        TButtonCleanCategory->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanCategory->setIcon(icon2);
        TButtonCleanCategory->setIconSize(QSize(48, 48));
        TButtonCleanCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataCategory = new QGroupBox(MngFormCategory);
        GBoxDataCategory->setObjectName(QStringLiteral("GBoxDataCategory"));
        GBoxDataCategory->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataCategory->setAcceptDrops(true);
        LabelCodeCategory = new QLabel(GBoxDataCategory);
        LabelCodeCategory->setObjectName(QStringLiteral("LabelCodeCategory"));
        LabelCodeCategory->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameCategory = new QLabel(GBoxDataCategory);
        LabelNameCategory->setObjectName(QStringLiteral("LabelNameCategory"));
        LabelNameCategory->setGeometry(QRect(0, 80, 120, 30));
        LabelNameCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameCategory = new QLabel(GBoxDataCategory);
        LabelShortNameCategory->setObjectName(QStringLiteral("LabelShortNameCategory"));
        LabelShortNameCategory->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveCategory = new QToolButton(GBoxDataCategory);
        TButtonSaveCategory->setObjectName(QStringLiteral("TButtonSaveCategory"));
        TButtonSaveCategory->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveCategory->setIcon(icon3);
        TButtonSaveCategory->setIconSize(QSize(48, 48));
        TButtonSaveCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeCategory = new QComboBox(GBoxDataCategory);
        CBoxCodeCategory->setObjectName(QStringLiteral("CBoxCodeCategory"));
        CBoxCodeCategory->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeCategory->setEditable(true);
        LEditIDCategory = new QLineEdit(GBoxDataCategory);
        LEditIDCategory->setObjectName(QStringLiteral("LEditIDCategory"));
        LEditIDCategory->setGeometry(QRect(230, 30, 50, 30));
        LEditNameCategory = new QLineEdit(GBoxDataCategory);
        LEditNameCategory->setObjectName(QStringLiteral("LEditNameCategory"));
        LEditNameCategory->setGeometry(QRect(120, 80, 300, 30));
        LEditShortNameCategory = new QLineEdit(GBoxDataCategory);
        LEditShortNameCategory->setObjectName(QStringLiteral("LEditShortNameCategory"));
        LEditShortNameCategory->setGeometry(QRect(120, 120, 150, 30));
        GBoxCategoryStatusActive = new QGroupBox(GBoxDataCategory);
        GBoxCategoryStatusActive->setObjectName(QStringLiteral("GBoxCategoryStatusActive"));
        GBoxCategoryStatusActive->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxCategoryStatusActive = new QCheckBox(GBoxCategoryStatusActive);
        CheckBoxCategoryStatusActive->setObjectName(QStringLiteral("CheckBoxCategoryStatusActive"));
        CheckBoxCategoryStatusActive->setGeometry(QRect(50, 10, 100, 30));
        TButtonExitCategory = new QToolButton(MngFormCategory);
        TButtonExitCategory->setObjectName(QStringLiteral("TButtonExitCategory"));
        TButtonExitCategory->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitCategory->setIcon(icon4);
        TButtonExitCategory->setIconSize(QSize(48, 48));
        TButtonExitCategory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormCategory);

        QMetaObject::connectSlotsByName(MngFormCategory);
    } // setupUi

    void retranslateUi(QDialog *MngFormCategory)
    {
        MngFormCategory->setWindowTitle(QApplication::translate("MngFormCategory", "Manuten\303\247\303\243o de Categorias", Q_NULLPTR));
        GBoxViewCategory->setTitle(QApplication::translate("MngFormCategory", "Categorias", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewCategory->setToolTip(QApplication::translate("MngFormCategory", "Categorias Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveCategory->setToolTip(QApplication::translate("MngFormCategory", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveCategory->setText(QApplication::translate("MngFormCategory", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanCategory->setToolTip(QApplication::translate("MngFormCategory", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanCategory->setText(QApplication::translate("MngFormCategory", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataCategory->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataCategory->setTitle(QApplication::translate("MngFormCategory", "Dados", Q_NULLPTR));
        LabelCodeCategory->setText(QApplication::translate("MngFormCategory", "C\303\263digo:", Q_NULLPTR));
        LabelNameCategory->setText(QApplication::translate("MngFormCategory", "Nome:", Q_NULLPTR));
        LabelShortNameCategory->setText(QApplication::translate("MngFormCategory", "Nome Curto:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveCategory->setToolTip(QApplication::translate("MngFormCategory", "Salvar os dados para a Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveCategory->setText(QApplication::translate("MngFormCategory", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeCategory->setToolTip(QApplication::translate("MngFormCategory", "Informar um C\303\263digo para a Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameCategory->setToolTip(QApplication::translate("MngFormCategory", "Informar uma  Descri\303\247\303\243o/Nome para a Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameCategory->setToolTip(QApplication::translate("MngFormCategory", "Informar um Nome Curto/Sigla/Apelido para a Categoria...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCategoryStatusActive->setTitle(QApplication::translate("MngFormCategory", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxCategoryStatusActive->setToolTip(QApplication::translate("MngFormCategory", "Permite Ativar/Desativar a Categoria para ser ou n\303\243o Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxCategoryStatusActive->setText(QApplication::translate("MngFormCategory", "Ativo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitCategory->setToolTip(QApplication::translate("MngFormCategory", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitCategory->setText(QApplication::translate("MngFormCategory", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormCategory: public Ui_MngFormCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCATEGORY_H
