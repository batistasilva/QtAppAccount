/********************************************************************************
** Form generated from reading UI file 'MngFormProdLines.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMPRODLINES_H
#define UI_MNGFORMPRODLINES_H

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

class Ui_MngFormProdLines
{
public:
    QGroupBox *GBoxViewProdLines;
    QTableView *TableViewProdLines;
    QToolButton *TButtonRemoveProdLines;
    QToolButton *TButtonCleanProdLines;
    QGroupBox *GBoxDataProdLines;
    QLabel *LabelCodeProdLines;
    QLabel *LabelNameProdLines;
    QLabel *LabelShortNameProdLines;
    QToolButton *TButtonSaveProdLines;
    QComboBox *CBoxCodeProdLines;
    QLineEdit *LEditIDProdLines;
    QLineEdit *LEditNameProdLines;
    QLineEdit *LEditShortNameProdLines;
    QGroupBox *GBoxProdLinesStatusActive;
    QCheckBox *CheckBoxProdLinesStatusActive;
    QToolButton *TButtonExitProdLines;

    void setupUi(QDialog *MngFormProdLines)
    {
        if (MngFormProdLines->objectName().isEmpty())
            MngFormProdLines->setObjectName(QStringLiteral("MngFormProdLines"));
        MngFormProdLines->resize(750, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormProdLines->setWindowIcon(icon);
        GBoxViewProdLines = new QGroupBox(MngFormProdLines);
        GBoxViewProdLines->setObjectName(QStringLiteral("GBoxViewProdLines"));
        GBoxViewProdLines->setGeometry(QRect(10, 180, 731, 311));
        TableViewProdLines = new QTableView(GBoxViewProdLines);
        TableViewProdLines->setObjectName(QStringLiteral("TableViewProdLines"));
        TableViewProdLines->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveProdLines = new QToolButton(GBoxViewProdLines);
        TButtonRemoveProdLines->setObjectName(QStringLiteral("TButtonRemoveProdLines"));
        TButtonRemoveProdLines->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveProdLines->setIcon(icon1);
        TButtonRemoveProdLines->setIconSize(QSize(48, 48));
        TButtonRemoveProdLines->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanProdLines = new QToolButton(GBoxViewProdLines);
        TButtonCleanProdLines->setObjectName(QStringLiteral("TButtonCleanProdLines"));
        TButtonCleanProdLines->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanProdLines->setIcon(icon2);
        TButtonCleanProdLines->setIconSize(QSize(48, 48));
        TButtonCleanProdLines->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataProdLines = new QGroupBox(MngFormProdLines);
        GBoxDataProdLines->setObjectName(QStringLiteral("GBoxDataProdLines"));
        GBoxDataProdLines->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataProdLines->setAcceptDrops(true);
        LabelCodeProdLines = new QLabel(GBoxDataProdLines);
        LabelCodeProdLines->setObjectName(QStringLiteral("LabelCodeProdLines"));
        LabelCodeProdLines->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeProdLines->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameProdLines = new QLabel(GBoxDataProdLines);
        LabelNameProdLines->setObjectName(QStringLiteral("LabelNameProdLines"));
        LabelNameProdLines->setGeometry(QRect(0, 80, 120, 30));
        LabelNameProdLines->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameProdLines = new QLabel(GBoxDataProdLines);
        LabelShortNameProdLines->setObjectName(QStringLiteral("LabelShortNameProdLines"));
        LabelShortNameProdLines->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameProdLines->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveProdLines = new QToolButton(GBoxDataProdLines);
        TButtonSaveProdLines->setObjectName(QStringLiteral("TButtonSaveProdLines"));
        TButtonSaveProdLines->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveProdLines->setIcon(icon3);
        TButtonSaveProdLines->setIconSize(QSize(48, 48));
        TButtonSaveProdLines->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeProdLines = new QComboBox(GBoxDataProdLines);
        CBoxCodeProdLines->setObjectName(QStringLiteral("CBoxCodeProdLines"));
        CBoxCodeProdLines->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeProdLines->setEditable(true);
        LEditIDProdLines = new QLineEdit(GBoxDataProdLines);
        LEditIDProdLines->setObjectName(QStringLiteral("LEditIDProdLines"));
        LEditIDProdLines->setGeometry(QRect(230, 30, 50, 30));
        LEditNameProdLines = new QLineEdit(GBoxDataProdLines);
        LEditNameProdLines->setObjectName(QStringLiteral("LEditNameProdLines"));
        LEditNameProdLines->setGeometry(QRect(120, 80, 300, 30));
        LEditShortNameProdLines = new QLineEdit(GBoxDataProdLines);
        LEditShortNameProdLines->setObjectName(QStringLiteral("LEditShortNameProdLines"));
        LEditShortNameProdLines->setGeometry(QRect(120, 120, 150, 30));
        GBoxProdLinesStatusActive = new QGroupBox(GBoxDataProdLines);
        GBoxProdLinesStatusActive->setObjectName(QStringLiteral("GBoxProdLinesStatusActive"));
        GBoxProdLinesStatusActive->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxProdLinesStatusActive = new QCheckBox(GBoxProdLinesStatusActive);
        CheckBoxProdLinesStatusActive->setObjectName(QStringLiteral("CheckBoxProdLinesStatusActive"));
        CheckBoxProdLinesStatusActive->setGeometry(QRect(50, 10, 100, 30));
        TButtonExitProdLines = new QToolButton(MngFormProdLines);
        TButtonExitProdLines->setObjectName(QStringLiteral("TButtonExitProdLines"));
        TButtonExitProdLines->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitProdLines->setIcon(icon4);
        TButtonExitProdLines->setIconSize(QSize(48, 48));
        TButtonExitProdLines->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormProdLines);

        QMetaObject::connectSlotsByName(MngFormProdLines);
    } // setupUi

    void retranslateUi(QDialog *MngFormProdLines)
    {
        MngFormProdLines->setWindowTitle(QApplication::translate("MngFormProdLines", "Manuten\303\247\303\243o de Linha de Produtos", Q_NULLPTR));
        GBoxViewProdLines->setTitle(QApplication::translate("MngFormProdLines", "Linhas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Linha de Produtos Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveProdLines->setText(QApplication::translate("MngFormProdLines", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanProdLines->setText(QApplication::translate("MngFormProdLines", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataProdLines->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataProdLines->setTitle(QApplication::translate("MngFormProdLines", "Dados", Q_NULLPTR));
        LabelCodeProdLines->setText(QApplication::translate("MngFormProdLines", "C\303\263digo:", Q_NULLPTR));
        LabelNameProdLines->setText(QApplication::translate("MngFormProdLines", "Nome:", Q_NULLPTR));
        LabelShortNameProdLines->setText(QApplication::translate("MngFormProdLines", "Nome Curto:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Salvar os dados para a Linha de Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveProdLines->setText(QApplication::translate("MngFormProdLines", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Informar um C\303\263digo para a Linha de Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Informar uma  Descri\303\247\303\243o/Nome para a Linha de Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Informar um Nome Curto/Sigla/Apelido para a Linha de Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProdLinesStatusActive->setTitle(QApplication::translate("MngFormProdLines", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxProdLinesStatusActive->setToolTip(QApplication::translate("MngFormProdLines", "Ativar/Desativar a Linha de Produtos para ser ou n\303\243o Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxProdLinesStatusActive->setText(QApplication::translate("MngFormProdLines", "Ativo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitProdLines->setToolTip(QApplication::translate("MngFormProdLines", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitProdLines->setText(QApplication::translate("MngFormProdLines", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormProdLines: public Ui_MngFormProdLines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMPRODLINES_H
