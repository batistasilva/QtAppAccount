/********************************************************************************
** Form generated from reading UI file 'MngFormUom.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMUOM_H
#define UI_MNGFORMUOM_H

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

class Ui_MngFormUom
{
public:
    QToolButton *TButtonExitUom;
    QGroupBox *GBoxViewUom;
    QTableView *TableViewUom;
    QToolButton *TButtonRemoveUom;
    QToolButton *TButtonCleanUom;
    QGroupBox *GBoxDataUom;
    QLabel *LabelNameUom;
    QLabel *LabelUnitUom;
    QToolButton *TButtonSaveUom;
    QLineEdit *LEditIDUnitUom;
    QLineEdit *LEditNameUom;
    QLineEdit *LEditUnitUom;
    QGroupBox *GBoxStatusActiveUom;
    QCheckBox *CheckBoxStatusActiveUom;
    QCheckBox *CheckBoxIsUnitOfWeight;

    void setupUi(QDialog *MngFormUom)
    {
        if (MngFormUom->objectName().isEmpty())
            MngFormUom->setObjectName(QStringLiteral("MngFormUom"));
        MngFormUom->resize(750, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormUom->setWindowIcon(icon);
        TButtonExitUom = new QToolButton(MngFormUom);
        TButtonExitUom->setObjectName(QStringLiteral("TButtonExitUom"));
        TButtonExitUom->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitUom->setIcon(icon1);
        TButtonExitUom->setIconSize(QSize(48, 48));
        TButtonExitUom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxViewUom = new QGroupBox(MngFormUom);
        GBoxViewUom->setObjectName(QStringLiteral("GBoxViewUom"));
        GBoxViewUom->setGeometry(QRect(10, 150, 731, 341));
        TableViewUom = new QTableView(GBoxViewUom);
        TableViewUom->setObjectName(QStringLiteral("TableViewUom"));
        TableViewUom->setGeometry(QRect(20, 30, 591, 291));
        TButtonRemoveUom = new QToolButton(GBoxViewUom);
        TButtonRemoveUom->setObjectName(QStringLiteral("TButtonRemoveUom"));
        TButtonRemoveUom->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveUom->setIcon(icon2);
        TButtonRemoveUom->setIconSize(QSize(48, 48));
        TButtonRemoveUom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanUom = new QToolButton(GBoxViewUom);
        TButtonCleanUom->setObjectName(QStringLiteral("TButtonCleanUom"));
        TButtonCleanUom->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanUom->setIcon(icon3);
        TButtonCleanUom->setIconSize(QSize(48, 48));
        TButtonCleanUom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataUom = new QGroupBox(MngFormUom);
        GBoxDataUom->setObjectName(QStringLiteral("GBoxDataUom"));
        GBoxDataUom->setGeometry(QRect(10, 10, 731, 131));
        GBoxDataUom->setAcceptDrops(true);
        LabelNameUom = new QLabel(GBoxDataUom);
        LabelNameUom->setObjectName(QStringLiteral("LabelNameUom"));
        LabelNameUom->setGeometry(QRect(0, 80, 120, 30));
        LabelNameUom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelUnitUom = new QLabel(GBoxDataUom);
        LabelUnitUom->setObjectName(QStringLiteral("LabelUnitUom"));
        LabelUnitUom->setGeometry(QRect(0, 30, 120, 30));
        LabelUnitUom->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveUom = new QToolButton(GBoxDataUom);
        TButtonSaveUom->setObjectName(QStringLiteral("TButtonSaveUom"));
        TButtonSaveUom->setGeometry(QRect(630, 30, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveUom->setIcon(icon4);
        TButtonSaveUom->setIconSize(QSize(48, 48));
        TButtonSaveUom->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LEditIDUnitUom = new QLineEdit(GBoxDataUom);
        LEditIDUnitUom->setObjectName(QStringLiteral("LEditIDUnitUom"));
        LEditIDUnitUom->setGeometry(QRect(210, 30, 50, 30));
        LEditNameUom = new QLineEdit(GBoxDataUom);
        LEditNameUom->setObjectName(QStringLiteral("LEditNameUom"));
        LEditNameUom->setGeometry(QRect(120, 80, 230, 30));
        LEditUnitUom = new QLineEdit(GBoxDataUom);
        LEditUnitUom->setObjectName(QStringLiteral("LEditUnitUom"));
        LEditUnitUom->setGeometry(QRect(120, 30, 80, 30));
        GBoxStatusActiveUom = new QGroupBox(GBoxDataUom);
        GBoxStatusActiveUom->setObjectName(QStringLiteral("GBoxStatusActiveUom"));
        GBoxStatusActiveUom->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxStatusActiveUom = new QCheckBox(GBoxStatusActiveUom);
        CheckBoxStatusActiveUom->setObjectName(QStringLiteral("CheckBoxStatusActiveUom"));
        CheckBoxStatusActiveUom->setGeometry(QRect(50, 10, 100, 30));
        CheckBoxIsUnitOfWeight = new QCheckBox(GBoxDataUom);
        CheckBoxIsUnitOfWeight->setObjectName(QStringLiteral("CheckBoxIsUnitOfWeight"));
        CheckBoxIsUnitOfWeight->setGeometry(QRect(400, 80, 191, 30));

        retranslateUi(MngFormUom);

        QMetaObject::connectSlotsByName(MngFormUom);
    } // setupUi

    void retranslateUi(QDialog *MngFormUom)
    {
        MngFormUom->setWindowTitle(QApplication::translate("MngFormUom", "Manuten\303\247\303\243o em Unidades de Medidas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitUom->setToolTip(QApplication::translate("MngFormUom", "Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitUom->setText(QApplication::translate("MngFormUom", "Sair", Q_NULLPTR));
        GBoxViewUom->setTitle(QApplication::translate("MngFormUom", "Unidades de Medidas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewUom->setToolTip(QApplication::translate("MngFormUom", "Unidades de Medidas Dispon\303\255veis...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveUom->setToolTip(QApplication::translate("MngFormUom", "Fazer a Remo\303\247\303\243o do Item Selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveUom->setText(QApplication::translate("MngFormUom", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanUom->setToolTip(QApplication::translate("MngFormUom", "Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanUom->setText(QApplication::translate("MngFormUom", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataUom->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataUom->setTitle(QApplication::translate("MngFormUom", "Dados", Q_NULLPTR));
        LabelNameUom->setText(QApplication::translate("MngFormUom", "Descri\303\247\303\243o:", Q_NULLPTR));
        LabelUnitUom->setText(QApplication::translate("MngFormUom", "Unidade:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveUom->setToolTip(QApplication::translate("MngFormUom", "Salvar os dados para a Unidade de Medida...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveUom->setText(QApplication::translate("MngFormUom", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNameUom->setToolTip(QApplication::translate("MngFormUom", "Informar uma  Descri\303\247\303\243o/Nome para a Unidade de Medida...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditUnitUom->setToolTip(QApplication::translate("MngFormUom", "Informar a Unidade de Medida para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusActiveUom->setTitle(QApplication::translate("MngFormUom", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveUom->setToolTip(QApplication::translate("MngFormUom", "Ativar/Desativar a Unidade de Medida para ser ou n\303\243o Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveUom->setText(QApplication::translate("MngFormUom", "Ativa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxIsUnitOfWeight->setToolTip(QApplication::translate("MngFormUom", "Marcar!, caso Seja uma Unidade de Medida para Peso...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxIsUnitOfWeight->setText(QApplication::translate("MngFormUom", "\303\211 uma Unidade de Peso?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormUom: public Ui_MngFormUom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMUOM_H
