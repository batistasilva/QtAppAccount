/********************************************************************************
** Form generated from reading UI file 'MngFormCompany.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCOMPANY_H
#define UI_MNGFORMCOMPANY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_MngFormCompany
{
public:
    QGroupBox *GBoxDataCompany;
    QLabel *LabelCompanyNumber;
    QToolButton *TButtonSaveCompany;
    QLineEdit *LEditCompanyID;
    QLineEdit *LEditCompanyNumber;
    QLabel *LabelLongDescripCompany;
    QLineEdit *LEditLongDescripCompany;
    QLabel *LabelShortDescrip;
    QLineEdit *LEditShortDescrip;
    QCheckBox *CheckBoxStatusActiveCompany;
    QLineEdit *LEditGainLoss;
    QLabel *LabelDiscrepancy;
    QLabel *LabelRetainedEarnings;
    QLineEdit *LEditRetainedEarnings;
    QLineEdit *LEditDiscrepancy;
    QLabel *LabelGainLoss;
    QGroupBox *GBoxViewCompany;
    QTableView *TableViewCompany;
    QToolButton *TButtonRemoveCompany;
    QToolButton *TButtonCleanCompany;
    QToolButton *TButtonExitCompany;

    void setupUi(QDialog *MngFormCompany)
    {
        if (MngFormCompany->objectName().isEmpty())
            MngFormCompany->setObjectName(QStringLiteral("MngFormCompany"));
        MngFormCompany->resize(750, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormCompany->setWindowIcon(icon);
        GBoxDataCompany = new QGroupBox(MngFormCompany);
        GBoxDataCompany->setObjectName(QStringLiteral("GBoxDataCompany"));
        GBoxDataCompany->setGeometry(QRect(10, 10, 731, 261));
        GBoxDataCompany->setAcceptDrops(true);
        LabelCompanyNumber = new QLabel(GBoxDataCompany);
        LabelCompanyNumber->setObjectName(QStringLiteral("LabelCompanyNumber"));
        LabelCompanyNumber->setGeometry(QRect(10, 30, 175, 30));
        LabelCompanyNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveCompany = new QToolButton(GBoxDataCompany);
        TButtonSaveCompany->setObjectName(QStringLiteral("TButtonSaveCompany"));
        TButtonSaveCompany->setGeometry(QRect(630, 170, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveCompany->setIcon(icon1);
        TButtonSaveCompany->setIconSize(QSize(48, 48));
        TButtonSaveCompany->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LEditCompanyID = new QLineEdit(GBoxDataCompany);
        LEditCompanyID->setObjectName(QStringLiteral("LEditCompanyID"));
        LEditCompanyID->setGeometry(QRect(340, 30, 50, 30));
        LEditCompanyNumber = new QLineEdit(GBoxDataCompany);
        LEditCompanyNumber->setObjectName(QStringLiteral("LEditCompanyNumber"));
        LEditCompanyNumber->setGeometry(QRect(190, 30, 150, 30));
        LabelLongDescripCompany = new QLabel(GBoxDataCompany);
        LabelLongDescripCompany->setObjectName(QStringLiteral("LabelLongDescripCompany"));
        LabelLongDescripCompany->setGeometry(QRect(10, 75, 175, 22));
        LabelLongDescripCompany->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditLongDescripCompany = new QLineEdit(GBoxDataCompany);
        LEditLongDescripCompany->setObjectName(QStringLiteral("LEditLongDescripCompany"));
        LEditLongDescripCompany->setGeometry(QRect(190, 70, 400, 30));
        LabelShortDescrip = new QLabel(GBoxDataCompany);
        LabelShortDescrip->setObjectName(QStringLiteral("LabelShortDescrip"));
        LabelShortDescrip->setGeometry(QRect(10, 100, 175, 30));
        LabelShortDescrip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditShortDescrip = new QLineEdit(GBoxDataCompany);
        LEditShortDescrip->setObjectName(QStringLiteral("LEditShortDescrip"));
        LEditShortDescrip->setGeometry(QRect(190, 100, 200, 30));
        LEditShortDescrip->setAlignment(Qt::AlignCenter);
        CheckBoxStatusActiveCompany = new QCheckBox(GBoxDataCompany);
        CheckBoxStatusActiveCompany->setObjectName(QStringLiteral("CheckBoxStatusActiveCompany"));
        CheckBoxStatusActiveCompany->setGeometry(QRect(620, 30, 100, 30));
        LEditGainLoss = new QLineEdit(GBoxDataCompany);
        LEditGainLoss->setObjectName(QStringLiteral("LEditGainLoss"));
        LEditGainLoss->setGeometry(QRect(190, 200, 170, 30));
        LabelDiscrepancy = new QLabel(GBoxDataCompany);
        LabelDiscrepancy->setObjectName(QStringLiteral("LabelDiscrepancy"));
        LabelDiscrepancy->setGeometry(QRect(10, 170, 175, 30));
        LabelDiscrepancy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelRetainedEarnings = new QLabel(GBoxDataCompany);
        LabelRetainedEarnings->setObjectName(QStringLiteral("LabelRetainedEarnings"));
        LabelRetainedEarnings->setGeometry(QRect(10, 140, 175, 30));
        LabelRetainedEarnings->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditRetainedEarnings = new QLineEdit(GBoxDataCompany);
        LEditRetainedEarnings->setObjectName(QStringLiteral("LEditRetainedEarnings"));
        LEditRetainedEarnings->setGeometry(QRect(190, 140, 170, 30));
        LEditDiscrepancy = new QLineEdit(GBoxDataCompany);
        LEditDiscrepancy->setObjectName(QStringLiteral("LEditDiscrepancy"));
        LEditDiscrepancy->setGeometry(QRect(190, 170, 170, 30));
        LabelGainLoss = new QLabel(GBoxDataCompany);
        LabelGainLoss->setObjectName(QStringLiteral("LabelGainLoss"));
        LabelGainLoss->setGeometry(QRect(10, 200, 175, 30));
        LabelGainLoss->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GBoxViewCompany = new QGroupBox(MngFormCompany);
        GBoxViewCompany->setObjectName(QStringLiteral("GBoxViewCompany"));
        GBoxViewCompany->setGeometry(QRect(10, 280, 731, 311));
        TableViewCompany = new QTableView(GBoxViewCompany);
        TableViewCompany->setObjectName(QStringLiteral("TableViewCompany"));
        TableViewCompany->setGeometry(QRect(20, 30, 591, 271));
        TButtonRemoveCompany = new QToolButton(GBoxViewCompany);
        TButtonRemoveCompany->setObjectName(QStringLiteral("TButtonRemoveCompany"));
        TButtonRemoveCompany->setGeometry(QRect(630, 120, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveCompany->setIcon(icon2);
        TButtonRemoveCompany->setIconSize(QSize(48, 48));
        TButtonRemoveCompany->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanCompany = new QToolButton(GBoxViewCompany);
        TButtonCleanCompany->setObjectName(QStringLiteral("TButtonCleanCompany"));
        TButtonCleanCompany->setGeometry(QRect(630, 30, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanCompany->setIcon(icon3);
        TButtonCleanCompany->setIconSize(QSize(48, 48));
        TButtonCleanCompany->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitCompany = new QToolButton(GBoxViewCompany);
        TButtonExitCompany->setObjectName(QStringLiteral("TButtonExitCompany"));
        TButtonExitCompany->setGeometry(QRect(630, 210, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitCompany->setIcon(icon4);
        TButtonExitCompany->setIconSize(QSize(48, 48));
        TButtonExitCompany->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TableViewCompany->raise();
        TButtonRemoveCompany->raise();
        TButtonCleanCompany->raise();
        TButtonExitCompany->raise();
        TButtonExitCompany->raise();

        retranslateUi(MngFormCompany);

        QMetaObject::connectSlotsByName(MngFormCompany);
    } // setupUi

    void retranslateUi(QDialog *MngFormCompany)
    {
        MngFormCompany->setWindowTitle(QApplication::translate("MngFormCompany", "Manuten\303\247\303\243o - Empresas/Filiais...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataCompany->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataCompany->setTitle(QApplication::translate("MngFormCompany", "Dados", Q_NULLPTR));
        LabelCompanyNumber->setText(QApplication::translate("MngFormCompany", "C\303\263digo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveCompany->setToolTip(QApplication::translate("MngFormCompany", "Salvar os dados para a Empresa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveCompany->setText(QApplication::translate("MngFormCompany", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCompanyNumber->setToolTip(QApplication::translate("MngFormCompany", "Informar um C\303\263digo para Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelLongDescripCompany->setText(QApplication::translate("MngFormCompany", "Descri\303\247\303\243o Longa:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditLongDescripCompany->setToolTip(QApplication::translate("MngFormCompany", "Informar uma Descri\303\247\303\243o Longa/Nome, para a Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelShortDescrip->setText(QApplication::translate("MngFormCompany", "Descri\303\247\303\243o Curta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortDescrip->setToolTip(QApplication::translate("MngFormCompany", "Informar uma Descri\303\247\303\243o Curta Para a Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditShortDescrip->setText(QString());
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveCompany->setToolTip(QApplication::translate("MngFormCompany", "Ativar/Desativar o Tipo de Despesa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveCompany->setText(QApplication::translate("MngFormCompany", "Ativa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditGainLoss->setToolTip(QApplication::translate("MngFormCompany", "Informar uma Conta de Despesa/Ganho para a Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditGainLoss->setText(QString());
        LabelDiscrepancy->setText(QApplication::translate("MngFormCompany", "Conta de Discrep\303\242ncia:", Q_NULLPTR));
        LabelRetainedEarnings->setText(QApplication::translate("MngFormCompany", "Conta de Lucros Obtidos:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditRetainedEarnings->setToolTip(QApplication::translate("MngFormCompany", "Informar uma Conta de Lucros para Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditDiscrepancy->setToolTip(QApplication::translate("MngFormCompany", "Informar uma Conta de Descrep\303\242ncia para a Empresa/Filial...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditDiscrepancy->setText(QString());
        LabelGainLoss->setText(QApplication::translate("MngFormCompany", "Conta de Ganho/Perda:", Q_NULLPTR));
        GBoxViewCompany->setTitle(QApplication::translate("MngFormCompany", "Empresas:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewCompany->setToolTip(QApplication::translate("MngFormCompany", "Empresas/Filiais Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveCompany->setToolTip(QApplication::translate("MngFormCompany", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveCompany->setText(QApplication::translate("MngFormCompany", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanCompany->setToolTip(QApplication::translate("MngFormCompany", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanCompany->setText(QApplication::translate("MngFormCompany", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitCompany->setToolTip(QApplication::translate("MngFormCompany", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitCompany->setText(QApplication::translate("MngFormCompany", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormCompany: public Ui_MngFormCompany {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCOMPANY_H
