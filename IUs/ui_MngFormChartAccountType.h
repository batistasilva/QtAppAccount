/********************************************************************************
** Form generated from reading UI file 'MngFormChartAccountType.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCHARTACCOUNTTYPE_H
#define UI_MNGFORMCHARTACCOUNTTYPE_H

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

class Ui_MngFormChartAccountType
{
public:
    QGroupBox *GBoxDataChartAccountType;
    QLabel *LabelCodeChartAccountType;
    QLabel *LabelLongNameChartAccountType;
    QLabel *LabelChartAccountType;
    QToolButton *TButtonSaveChartAccountType;
    QComboBox *CBoxCodeChartAccountType;
    QLineEdit *LEditChartAccountTypeID;
    QLineEdit *LEditLongNameChartAccountType;
    QGroupBox *GBoxStatusActiveChartAccountType;
    QCheckBox *CheckBoxStatusActiveChartAccountType;
    QLineEdit *LEditChartAccountType;
    QToolButton *TButtonExitChartAccountType;
    QGroupBox *GBoxViewChartAccountType;
    QTableView *TableViewChartAccountType;
    QToolButton *TButtonRemoveChartAccountType;
    QToolButton *TButtonCleanChartAccountType;

    void setupUi(QDialog *MngFormChartAccountType)
    {
        if (MngFormChartAccountType->objectName().isEmpty())
            MngFormChartAccountType->setObjectName(QStringLiteral("MngFormChartAccountType"));
        MngFormChartAccountType->resize(750, 600);
        MngFormChartAccountType->setMinimumSize(QSize(750, 600));
        MngFormChartAccountType->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormChartAccountType->setWindowIcon(icon);
        GBoxDataChartAccountType = new QGroupBox(MngFormChartAccountType);
        GBoxDataChartAccountType->setObjectName(QStringLiteral("GBoxDataChartAccountType"));
        GBoxDataChartAccountType->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataChartAccountType->setAcceptDrops(true);
        LabelCodeChartAccountType = new QLabel(GBoxDataChartAccountType);
        LabelCodeChartAccountType->setObjectName(QStringLiteral("LabelCodeChartAccountType"));
        LabelCodeChartAccountType->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeChartAccountType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelLongNameChartAccountType = new QLabel(GBoxDataChartAccountType);
        LabelLongNameChartAccountType->setObjectName(QStringLiteral("LabelLongNameChartAccountType"));
        LabelLongNameChartAccountType->setGeometry(QRect(0, 110, 120, 30));
        LabelLongNameChartAccountType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelChartAccountType = new QLabel(GBoxDataChartAccountType);
        LabelChartAccountType->setObjectName(QStringLiteral("LabelChartAccountType"));
        LabelChartAccountType->setGeometry(QRect(0, 70, 120, 30));
        LabelChartAccountType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveChartAccountType = new QToolButton(GBoxDataChartAccountType);
        TButtonSaveChartAccountType->setObjectName(QStringLiteral("TButtonSaveChartAccountType"));
        TButtonSaveChartAccountType->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveChartAccountType->setIcon(icon1);
        TButtonSaveChartAccountType->setIconSize(QSize(48, 48));
        TButtonSaveChartAccountType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeChartAccountType = new QComboBox(GBoxDataChartAccountType);
        CBoxCodeChartAccountType->setObjectName(QStringLiteral("CBoxCodeChartAccountType"));
        CBoxCodeChartAccountType->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeChartAccountType->setEditable(true);
        LEditChartAccountTypeID = new QLineEdit(GBoxDataChartAccountType);
        LEditChartAccountTypeID->setObjectName(QStringLiteral("LEditChartAccountTypeID"));
        LEditChartAccountTypeID->setGeometry(QRect(230, 30, 50, 30));
        LEditLongNameChartAccountType = new QLineEdit(GBoxDataChartAccountType);
        LEditLongNameChartAccountType->setObjectName(QStringLiteral("LEditLongNameChartAccountType"));
        LEditLongNameChartAccountType->setGeometry(QRect(120, 110, 400, 30));
        GBoxStatusActiveChartAccountType = new QGroupBox(GBoxDataChartAccountType);
        GBoxStatusActiveChartAccountType->setObjectName(QStringLiteral("GBoxStatusActiveChartAccountType"));
        GBoxStatusActiveChartAccountType->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxStatusActiveChartAccountType = new QCheckBox(GBoxStatusActiveChartAccountType);
        CheckBoxStatusActiveChartAccountType->setObjectName(QStringLiteral("CheckBoxStatusActiveChartAccountType"));
        CheckBoxStatusActiveChartAccountType->setGeometry(QRect(50, 10, 100, 30));
        LEditChartAccountType = new QLineEdit(GBoxDataChartAccountType);
        LEditChartAccountType->setObjectName(QStringLiteral("LEditChartAccountType"));
        LEditChartAccountType->setGeometry(QRect(120, 70, 200, 30));
        TButtonExitChartAccountType = new QToolButton(MngFormChartAccountType);
        TButtonExitChartAccountType->setObjectName(QStringLiteral("TButtonExitChartAccountType"));
        TButtonExitChartAccountType->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitChartAccountType->setIcon(icon2);
        TButtonExitChartAccountType->setIconSize(QSize(48, 48));
        TButtonExitChartAccountType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxViewChartAccountType = new QGroupBox(MngFormChartAccountType);
        GBoxViewChartAccountType->setObjectName(QStringLiteral("GBoxViewChartAccountType"));
        GBoxViewChartAccountType->setGeometry(QRect(10, 180, 731, 311));
        TableViewChartAccountType = new QTableView(GBoxViewChartAccountType);
        TableViewChartAccountType->setObjectName(QStringLiteral("TableViewChartAccountType"));
        TableViewChartAccountType->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveChartAccountType = new QToolButton(GBoxViewChartAccountType);
        TButtonRemoveChartAccountType->setObjectName(QStringLiteral("TButtonRemoveChartAccountType"));
        TButtonRemoveChartAccountType->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveChartAccountType->setIcon(icon3);
        TButtonRemoveChartAccountType->setIconSize(QSize(48, 48));
        TButtonRemoveChartAccountType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanChartAccountType = new QToolButton(GBoxViewChartAccountType);
        TButtonCleanChartAccountType->setObjectName(QStringLiteral("TButtonCleanChartAccountType"));
        TButtonCleanChartAccountType->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanChartAccountType->setIcon(icon4);
        TButtonCleanChartAccountType->setIconSize(QSize(48, 48));
        TButtonCleanChartAccountType->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormChartAccountType);

        QMetaObject::connectSlotsByName(MngFormChartAccountType);
    } // setupUi

    void retranslateUi(QDialog *MngFormChartAccountType)
    {
        MngFormChartAccountType->setWindowTitle(QApplication::translate("MngFormChartAccountType", "Manuten\303\247\303\243o - Tipo de Plano de Contas...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataChartAccountType->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataChartAccountType->setTitle(QApplication::translate("MngFormChartAccountType", "Dados", Q_NULLPTR));
        LabelCodeChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "C\303\263digo:", Q_NULLPTR));
        LabelLongNameChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Descri\303\247\303\243o Longa:", Q_NULLPTR));
        LabelChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Tipo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Salvar os dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Informar um C\303\263digo para Tipo de Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditLongNameChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Informar uma Nome/Descri\303\247\303\243o para o Tipo de Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusActiveChartAccountType->setTitle(QApplication::translate("MngFormChartAccountType", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Permite Ativar/Desativar  o Tipo de Plano de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Ativo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Informar um Tipo de Plano de Contas, Ex.(Ativos, Passivos, Despesas, Receitas)...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExitChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Permite Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Sair", Q_NULLPTR));
        GBoxViewChartAccountType->setTitle(QApplication::translate("MngFormChartAccountType", "Tipos de Planos de Contas:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Tipos de Planos de Contas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Fazer Remo\303\247\303\243o do Item selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanChartAccountType->setToolTip(QApplication::translate("MngFormChartAccountType", "Permite Limpar os Campos e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanChartAccountType->setText(QApplication::translate("MngFormChartAccountType", "Limpar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormChartAccountType: public Ui_MngFormChartAccountType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCHARTACCOUNTTYPE_H
