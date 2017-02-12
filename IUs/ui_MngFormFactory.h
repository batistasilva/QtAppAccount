/********************************************************************************
** Form generated from reading UI file 'MngFormFactory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMFACTORY_H
#define UI_MNGFORMFACTORY_H

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

class Ui_MngFormFactory
{
public:
    QGroupBox *GBoxDataFactory;
    QLabel *LabelCodeFactory;
    QLabel *LabelNameFactory;
    QLabel *LabelShortNameFactory;
    QToolButton *TButtonSaveFactory;
    QComboBox *CBoxCodeFactory;
    QLineEdit *LEditIDFactory;
    QLineEdit *LEditNameFactory;
    QLineEdit *LEditShortNameFactory;
    QGroupBox *GBoxFactoryStatusActive;
    QCheckBox *CheckBoxFactoryStatusActive;
    QGroupBox *GBoxView;
    QTableView *TableViewItemFactory;
    QToolButton *TButtonRemoveFactory;
    QToolButton *TButtonCleanFactory;
    QToolButton *TButtonExitFactory;

    void setupUi(QDialog *MngFormFactory)
    {
        if (MngFormFactory->objectName().isEmpty())
            MngFormFactory->setObjectName(QStringLiteral("MngFormFactory"));
        MngFormFactory->resize(750, 600);
        MngFormFactory->setMinimumSize(QSize(750, 600));
        MngFormFactory->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/advancedsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormFactory->setWindowIcon(icon);
        GBoxDataFactory = new QGroupBox(MngFormFactory);
        GBoxDataFactory->setObjectName(QStringLiteral("GBoxDataFactory"));
        GBoxDataFactory->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataFactory->setAcceptDrops(true);
        LabelCodeFactory = new QLabel(GBoxDataFactory);
        LabelCodeFactory->setObjectName(QStringLiteral("LabelCodeFactory"));
        LabelCodeFactory->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeFactory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameFactory = new QLabel(GBoxDataFactory);
        LabelNameFactory->setObjectName(QStringLiteral("LabelNameFactory"));
        LabelNameFactory->setGeometry(QRect(0, 80, 120, 30));
        LabelNameFactory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameFactory = new QLabel(GBoxDataFactory);
        LabelShortNameFactory->setObjectName(QStringLiteral("LabelShortNameFactory"));
        LabelShortNameFactory->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameFactory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveFactory = new QToolButton(GBoxDataFactory);
        TButtonSaveFactory->setObjectName(QStringLiteral("TButtonSaveFactory"));
        TButtonSaveFactory->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveFactory->setIcon(icon1);
        TButtonSaveFactory->setIconSize(QSize(48, 48));
        TButtonSaveFactory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeFactory = new QComboBox(GBoxDataFactory);
        CBoxCodeFactory->setObjectName(QStringLiteral("CBoxCodeFactory"));
        CBoxCodeFactory->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeFactory->setEditable(true);
        LEditIDFactory = new QLineEdit(GBoxDataFactory);
        LEditIDFactory->setObjectName(QStringLiteral("LEditIDFactory"));
        LEditIDFactory->setGeometry(QRect(230, 30, 50, 30));
        LEditNameFactory = new QLineEdit(GBoxDataFactory);
        LEditNameFactory->setObjectName(QStringLiteral("LEditNameFactory"));
        LEditNameFactory->setGeometry(QRect(120, 80, 400, 30));
        LEditShortNameFactory = new QLineEdit(GBoxDataFactory);
        LEditShortNameFactory->setObjectName(QStringLiteral("LEditShortNameFactory"));
        LEditShortNameFactory->setGeometry(QRect(120, 120, 200, 30));
        GBoxFactoryStatusActive = new QGroupBox(GBoxDataFactory);
        GBoxFactoryStatusActive->setObjectName(QStringLiteral("GBoxFactoryStatusActive"));
        GBoxFactoryStatusActive->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxFactoryStatusActive = new QCheckBox(GBoxFactoryStatusActive);
        CheckBoxFactoryStatusActive->setObjectName(QStringLiteral("CheckBoxFactoryStatusActive"));
        CheckBoxFactoryStatusActive->setGeometry(QRect(50, 10, 100, 30));
        GBoxView = new QGroupBox(MngFormFactory);
        GBoxView->setObjectName(QStringLiteral("GBoxView"));
        GBoxView->setGeometry(QRect(10, 180, 731, 311));
        TableViewItemFactory = new QTableView(GBoxView);
        TableViewItemFactory->setObjectName(QStringLiteral("TableViewItemFactory"));
        TableViewItemFactory->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveFactory = new QToolButton(GBoxView);
        TButtonRemoveFactory->setObjectName(QStringLiteral("TButtonRemoveFactory"));
        TButtonRemoveFactory->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveFactory->setIcon(icon2);
        TButtonRemoveFactory->setIconSize(QSize(48, 48));
        TButtonRemoveFactory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanFactory = new QToolButton(GBoxView);
        TButtonCleanFactory->setObjectName(QStringLiteral("TButtonCleanFactory"));
        TButtonCleanFactory->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanFactory->setIcon(icon3);
        TButtonCleanFactory->setIconSize(QSize(48, 48));
        TButtonCleanFactory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitFactory = new QToolButton(MngFormFactory);
        TButtonExitFactory->setObjectName(QStringLiteral("TButtonExitFactory"));
        TButtonExitFactory->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitFactory->setIcon(icon4);
        TButtonExitFactory->setIconSize(QSize(48, 48));
        TButtonExitFactory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormFactory);

        QMetaObject::connectSlotsByName(MngFormFactory);
    } // setupUi

    void retranslateUi(QDialog *MngFormFactory)
    {
        MngFormFactory->setWindowTitle(QApplication::translate("MngFormFactory", "Manuten\303\247\303\243o em Fabricantes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MngFormFactory->setToolTip(QApplication::translate("MngFormFactory", "Permite Adicionar, Alterar ou Excluir um Fabricante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GBoxDataFactory->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataFactory->setTitle(QApplication::translate("MngFormFactory", "Dados", Q_NULLPTR));
        LabelCodeFactory->setText(QApplication::translate("MngFormFactory", "C\303\263digo:", Q_NULLPTR));
        LabelNameFactory->setText(QApplication::translate("MngFormFactory", "Raza\303\243o Social:", Q_NULLPTR));
        LabelShortNameFactory->setText(QApplication::translate("MngFormFactory", "Nome Fantasia:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveFactory->setToolTip(QApplication::translate("MngFormFactory", "Salvar os dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveFactory->setText(QApplication::translate("MngFormFactory", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeFactory->setToolTip(QApplication::translate("MngFormFactory", "Informar um C\303\263digo para o Fabricante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameFactory->setToolTip(QApplication::translate("MngFormFactory", "Informar a Raz\303\243o Social/Nome para o Fabricante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameFactory->setToolTip(QApplication::translate("MngFormFactory", "Informar o Nome Fantasia/Sigla/Apelido para o Fabricante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFactoryStatusActive->setTitle(QApplication::translate("MngFormFactory", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxFactoryStatusActive->setToolTip(QApplication::translate("MngFormFactory", "Permite Ativar o Fabricante para ser Usado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxFactoryStatusActive->setText(QApplication::translate("MngFormFactory", "Ativo", Q_NULLPTR));
        GBoxView->setTitle(QApplication::translate("MngFormFactory", "Fabricantes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewItemFactory->setToolTip(QApplication::translate("MngFormFactory", "Fabricantes Atuais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveFactory->setToolTip(QApplication::translate("MngFormFactory", "Fazer Remo\303\247\303\243o do Item selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveFactory->setText(QApplication::translate("MngFormFactory", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanFactory->setToolTip(QApplication::translate("MngFormFactory", "Permite Limpar os Campos de Cadastro e Atualizar a Janela de Manuten\303\247\303\243o de Fabricantes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanFactory->setText(QApplication::translate("MngFormFactory", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitFactory->setToolTip(QApplication::translate("MngFormFactory", "Permite Sair da Janela de Manuten\303\247\303\243o de Fabricantes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitFactory->setText(QApplication::translate("MngFormFactory", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormFactory: public Ui_MngFormFactory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMFACTORY_H
