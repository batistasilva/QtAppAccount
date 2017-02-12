/********************************************************************************
** Form generated from reading UI file 'MngFormProfitCenter.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMPROFITCENTER_H
#define UI_MNGFORMPROFITCENTER_H

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

class Ui_MngFormProfitCenter
{
public:
    QGroupBox *GBoxDataProfitCenter;
    QLabel *LabelCodeProfitCenter;
    QLabel *LabelNameProfitCenter;
    QLabel *LabelShortNameProfitCenter;
    QToolButton *TButtonSaveProfitCenter;
    QComboBox *CBoxCodeProfitCenter;
    QLineEdit *LEditProfitCenterID;
    QLineEdit *LEditNameProfitCenter;
    QLineEdit *LEditShortNameProfitCenter;
    QGroupBox *GBoxStatusActiveProfitCenter;
    QCheckBox *CheckBoxStatusActiveProfitCenter;
    QGroupBox *GBoxViewProfitCenter;
    QTableView *TableViewItemProfitCenter;
    QToolButton *TButtonRemoveProfitCenter;
    QToolButton *TButtonCleanProfitCenter;
    QToolButton *TButtonExitProfitCenter;

    void setupUi(QDialog *MngFormProfitCenter)
    {
        if (MngFormProfitCenter->objectName().isEmpty())
            MngFormProfitCenter->setObjectName(QStringLiteral("MngFormProfitCenter"));
        MngFormProfitCenter->resize(750, 600);
        MngFormProfitCenter->setMinimumSize(QSize(750, 600));
        MngFormProfitCenter->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormProfitCenter->setWindowIcon(icon);
        GBoxDataProfitCenter = new QGroupBox(MngFormProfitCenter);
        GBoxDataProfitCenter->setObjectName(QStringLiteral("GBoxDataProfitCenter"));
        GBoxDataProfitCenter->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataProfitCenter->setAcceptDrops(true);
        LabelCodeProfitCenter = new QLabel(GBoxDataProfitCenter);
        LabelCodeProfitCenter->setObjectName(QStringLiteral("LabelCodeProfitCenter"));
        LabelCodeProfitCenter->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeProfitCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameProfitCenter = new QLabel(GBoxDataProfitCenter);
        LabelNameProfitCenter->setObjectName(QStringLiteral("LabelNameProfitCenter"));
        LabelNameProfitCenter->setGeometry(QRect(0, 80, 120, 30));
        LabelNameProfitCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameProfitCenter = new QLabel(GBoxDataProfitCenter);
        LabelShortNameProfitCenter->setObjectName(QStringLiteral("LabelShortNameProfitCenter"));
        LabelShortNameProfitCenter->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameProfitCenter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveProfitCenter = new QToolButton(GBoxDataProfitCenter);
        TButtonSaveProfitCenter->setObjectName(QStringLiteral("TButtonSaveProfitCenter"));
        TButtonSaveProfitCenter->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveProfitCenter->setIcon(icon1);
        TButtonSaveProfitCenter->setIconSize(QSize(48, 48));
        TButtonSaveProfitCenter->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeProfitCenter = new QComboBox(GBoxDataProfitCenter);
        CBoxCodeProfitCenter->setObjectName(QStringLiteral("CBoxCodeProfitCenter"));
        CBoxCodeProfitCenter->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeProfitCenter->setEditable(true);
        LEditProfitCenterID = new QLineEdit(GBoxDataProfitCenter);
        LEditProfitCenterID->setObjectName(QStringLiteral("LEditProfitCenterID"));
        LEditProfitCenterID->setGeometry(QRect(230, 30, 50, 30));
        LEditNameProfitCenter = new QLineEdit(GBoxDataProfitCenter);
        LEditNameProfitCenter->setObjectName(QStringLiteral("LEditNameProfitCenter"));
        LEditNameProfitCenter->setGeometry(QRect(120, 80, 400, 30));
        LEditShortNameProfitCenter = new QLineEdit(GBoxDataProfitCenter);
        LEditShortNameProfitCenter->setObjectName(QStringLiteral("LEditShortNameProfitCenter"));
        LEditShortNameProfitCenter->setGeometry(QRect(120, 120, 200, 30));
        GBoxStatusActiveProfitCenter = new QGroupBox(GBoxDataProfitCenter);
        GBoxStatusActiveProfitCenter->setObjectName(QStringLiteral("GBoxStatusActiveProfitCenter"));
        GBoxStatusActiveProfitCenter->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxStatusActiveProfitCenter = new QCheckBox(GBoxStatusActiveProfitCenter);
        CheckBoxStatusActiveProfitCenter->setObjectName(QStringLiteral("CheckBoxStatusActiveProfitCenter"));
        CheckBoxStatusActiveProfitCenter->setGeometry(QRect(50, 10, 100, 30));
        GBoxViewProfitCenter = new QGroupBox(MngFormProfitCenter);
        GBoxViewProfitCenter->setObjectName(QStringLiteral("GBoxViewProfitCenter"));
        GBoxViewProfitCenter->setGeometry(QRect(10, 180, 731, 311));
        TableViewItemProfitCenter = new QTableView(GBoxViewProfitCenter);
        TableViewItemProfitCenter->setObjectName(QStringLiteral("TableViewItemProfitCenter"));
        TableViewItemProfitCenter->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveProfitCenter = new QToolButton(GBoxViewProfitCenter);
        TButtonRemoveProfitCenter->setObjectName(QStringLiteral("TButtonRemoveProfitCenter"));
        TButtonRemoveProfitCenter->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveProfitCenter->setIcon(icon2);
        TButtonRemoveProfitCenter->setIconSize(QSize(48, 48));
        TButtonRemoveProfitCenter->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanProfitCenter = new QToolButton(GBoxViewProfitCenter);
        TButtonCleanProfitCenter->setObjectName(QStringLiteral("TButtonCleanProfitCenter"));
        TButtonCleanProfitCenter->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanProfitCenter->setIcon(icon3);
        TButtonCleanProfitCenter->setIconSize(QSize(48, 48));
        TButtonCleanProfitCenter->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitProfitCenter = new QToolButton(MngFormProfitCenter);
        TButtonExitProfitCenter->setObjectName(QStringLiteral("TButtonExitProfitCenter"));
        TButtonExitProfitCenter->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitProfitCenter->setIcon(icon4);
        TButtonExitProfitCenter->setIconSize(QSize(48, 48));
        TButtonExitProfitCenter->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormProfitCenter);

        QMetaObject::connectSlotsByName(MngFormProfitCenter);
    } // setupUi

    void retranslateUi(QDialog *MngFormProfitCenter)
    {
        MngFormProfitCenter->setWindowTitle(QApplication::translate("MngFormProfitCenter", "Manuten\303\247\303\243o - Centro de Lucros...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataProfitCenter->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataProfitCenter->setTitle(QApplication::translate("MngFormProfitCenter", "Dados", Q_NULLPTR));
        LabelCodeProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "C\303\263digo:", Q_NULLPTR));
        LabelNameProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Descri\303\247\303\243o Longa:", Q_NULLPTR));
        LabelShortNameProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Descri\303\247\303\243o Curta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Salvar os dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Informar um C\303\263digo para o Centro de Lucros...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Informar uma Nome/Descri\303\247\303\243o para o Centro de Lucros...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Informar o Nome Curto/Sigla/Apelido para o Centro de Lucros...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusActiveProfitCenter->setTitle(QApplication::translate("MngFormProfitCenter", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Permite Ativar/Desativar  o Centro de Lucros...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Ativo", Q_NULLPTR));
        GBoxViewProfitCenter->setTitle(QApplication::translate("MngFormProfitCenter", "Centros de Lucros:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewItemProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Centros de Lucros Atuais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Fazer Remo\303\247\303\243o do Item selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Permite Limpar os Campos e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitProfitCenter->setToolTip(QApplication::translate("MngFormProfitCenter", "Permite Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitProfitCenter->setText(QApplication::translate("MngFormProfitCenter", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormProfitCenter: public Ui_MngFormProfitCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMPROFITCENTER_H
