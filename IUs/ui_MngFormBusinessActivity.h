/********************************************************************************
** Form generated from reading UI file 'MngFormBusinessActivity.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMBUSINESSACTIVITY_H
#define UI_MNGFORMBUSINESSACTIVITY_H

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

class Ui_FormBusinessActivity
{
public:
    QGroupBox *GBoxDataBusinessActivity;
    QLabel *LabelCodeBusinessActivity;
    QLabel *LabelNameBusinessActivity;
    QLabel *LabelShortNameBusinessActivity;
    QToolButton *TButtonSaveBusinessActivity;
    QComboBox *CBoxCodeBusinessActivity;
    QLineEdit *LEditIDBusinessActivity;
    QLineEdit *LEditNameBusinessActivity;
    QLineEdit *LEditShortNameBusinessActivity;
    QGroupBox *GBoxBusinessActivityStatusActive;
    QCheckBox *CheckBoxBusinessActivityStatusActive;
    QGroupBox *GBoxTableViewBusinessActivity;
    QTableView *TableViewBusinessActivity;
    QToolButton *TButtonRemoveBusinessActivity;
    QToolButton *TButtonCleanBusinessActivity;
    QToolButton *TButtonExitBusinessActivity;

    void setupUi(QDialog *FormBusinessActivity)
    {
        if (FormBusinessActivity->objectName().isEmpty())
            FormBusinessActivity->setObjectName(QStringLiteral("FormBusinessActivity"));
        FormBusinessActivity->resize(750, 600);
        FormBusinessActivity->setMinimumSize(QSize(750, 600));
        FormBusinessActivity->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormBusinessActivity->setWindowIcon(icon);
        GBoxDataBusinessActivity = new QGroupBox(FormBusinessActivity);
        GBoxDataBusinessActivity->setObjectName(QStringLiteral("GBoxDataBusinessActivity"));
        GBoxDataBusinessActivity->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataBusinessActivity->setAcceptDrops(true);
        LabelCodeBusinessActivity = new QLabel(GBoxDataBusinessActivity);
        LabelCodeBusinessActivity->setObjectName(QStringLiteral("LabelCodeBusinessActivity"));
        LabelCodeBusinessActivity->setGeometry(QRect(0, 30, 130, 30));
        LabelCodeBusinessActivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNameBusinessActivity = new QLabel(GBoxDataBusinessActivity);
        LabelNameBusinessActivity->setObjectName(QStringLiteral("LabelNameBusinessActivity"));
        LabelNameBusinessActivity->setGeometry(QRect(0, 80, 130, 30));
        LabelNameBusinessActivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameBusinessActivity = new QLabel(GBoxDataBusinessActivity);
        LabelShortNameBusinessActivity->setObjectName(QStringLiteral("LabelShortNameBusinessActivity"));
        LabelShortNameBusinessActivity->setGeometry(QRect(0, 120, 130, 30));
        LabelShortNameBusinessActivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveBusinessActivity = new QToolButton(GBoxDataBusinessActivity);
        TButtonSaveBusinessActivity->setObjectName(QStringLiteral("TButtonSaveBusinessActivity"));
        TButtonSaveBusinessActivity->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveBusinessActivity->setIcon(icon1);
        TButtonSaveBusinessActivity->setIconSize(QSize(48, 48));
        TButtonSaveBusinessActivity->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeBusinessActivity = new QComboBox(GBoxDataBusinessActivity);
        CBoxCodeBusinessActivity->setObjectName(QStringLiteral("CBoxCodeBusinessActivity"));
        CBoxCodeBusinessActivity->setGeometry(QRect(130, 30, 100, 30));
        CBoxCodeBusinessActivity->setEditable(true);
        LEditIDBusinessActivity = new QLineEdit(GBoxDataBusinessActivity);
        LEditIDBusinessActivity->setObjectName(QStringLiteral("LEditIDBusinessActivity"));
        LEditIDBusinessActivity->setGeometry(QRect(230, 30, 50, 30));
        LEditNameBusinessActivity = new QLineEdit(GBoxDataBusinessActivity);
        LEditNameBusinessActivity->setObjectName(QStringLiteral("LEditNameBusinessActivity"));
        LEditNameBusinessActivity->setGeometry(QRect(130, 80, 400, 30));
        LEditShortNameBusinessActivity = new QLineEdit(GBoxDataBusinessActivity);
        LEditShortNameBusinessActivity->setObjectName(QStringLiteral("LEditShortNameBusinessActivity"));
        LEditShortNameBusinessActivity->setGeometry(QRect(130, 120, 200, 30));
        GBoxBusinessActivityStatusActive = new QGroupBox(GBoxDataBusinessActivity);
        GBoxBusinessActivityStatusActive->setObjectName(QStringLiteral("GBoxBusinessActivityStatusActive"));
        GBoxBusinessActivityStatusActive->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxBusinessActivityStatusActive = new QCheckBox(GBoxBusinessActivityStatusActive);
        CheckBoxBusinessActivityStatusActive->setObjectName(QStringLiteral("CheckBoxBusinessActivityStatusActive"));
        CheckBoxBusinessActivityStatusActive->setGeometry(QRect(50, 10, 100, 30));
        GBoxTableViewBusinessActivity = new QGroupBox(FormBusinessActivity);
        GBoxTableViewBusinessActivity->setObjectName(QStringLiteral("GBoxTableViewBusinessActivity"));
        GBoxTableViewBusinessActivity->setGeometry(QRect(10, 180, 731, 311));
        TableViewBusinessActivity = new QTableView(GBoxTableViewBusinessActivity);
        TableViewBusinessActivity->setObjectName(QStringLiteral("TableViewBusinessActivity"));
        TableViewBusinessActivity->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveBusinessActivity = new QToolButton(GBoxTableViewBusinessActivity);
        TButtonRemoveBusinessActivity->setObjectName(QStringLiteral("TButtonRemoveBusinessActivity"));
        TButtonRemoveBusinessActivity->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveBusinessActivity->setIcon(icon2);
        TButtonRemoveBusinessActivity->setIconSize(QSize(48, 48));
        TButtonRemoveBusinessActivity->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanBusinessActivity = new QToolButton(GBoxTableViewBusinessActivity);
        TButtonCleanBusinessActivity->setObjectName(QStringLiteral("TButtonCleanBusinessActivity"));
        TButtonCleanBusinessActivity->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanBusinessActivity->setIcon(icon3);
        TButtonCleanBusinessActivity->setIconSize(QSize(48, 48));
        TButtonCleanBusinessActivity->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitBusinessActivity = new QToolButton(FormBusinessActivity);
        TButtonExitBusinessActivity->setObjectName(QStringLiteral("TButtonExitBusinessActivity"));
        TButtonExitBusinessActivity->setGeometry(QRect(10, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitBusinessActivity->setIcon(icon4);
        TButtonExitBusinessActivity->setIconSize(QSize(48, 48));
        TButtonExitBusinessActivity->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(FormBusinessActivity);

        QMetaObject::connectSlotsByName(FormBusinessActivity);
    } // setupUi

    void retranslateUi(QDialog *FormBusinessActivity)
    {
        FormBusinessActivity->setWindowTitle(QApplication::translate("FormBusinessActivity", "Manuten\303\247\303\243o em Ramo de Atividades...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataBusinessActivity->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataBusinessActivity->setTitle(QApplication::translate("FormBusinessActivity", "Dados", Q_NULLPTR));
        LabelCodeBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "C\303\263digo:", Q_NULLPTR));
        LabelNameBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Ramo da Empresa:", Q_NULLPTR));
        LabelShortNameBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Nome Curto:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Salvar os Dados para o Ramo de Atividade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Informar um C\303\263digo para o Ramo de Atividade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditNameBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Informar o uma Descri\303\247\303\243o para o Ramo de Atividade da Empresa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Informar o Nome/Sigla/Apelido para o Ramo de Atividade da Empresa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBusinessActivityStatusActive->setTitle(QApplication::translate("FormBusinessActivity", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxBusinessActivityStatusActive->setToolTip(QApplication::translate("FormBusinessActivity", "Permite Ativar o Ramo de Atividade para ser Usado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxBusinessActivityStatusActive->setText(QApplication::translate("FormBusinessActivity", "Ativo", Q_NULLPTR));
        GBoxTableViewBusinessActivity->setTitle(QApplication::translate("FormBusinessActivity", "Ramos de Atividades:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Ramos de Atividades de Empresas Atuais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Remo\303\247\303\243o do Ramo de Atividade  Atual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Limpar os Campos de Cadastro da Janela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitBusinessActivity->setToolTip(QApplication::translate("FormBusinessActivity", "Sair da Janela de Manuten\303\247\303\243o de Ramo de Atividade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitBusinessActivity->setText(QApplication::translate("FormBusinessActivity", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormBusinessActivity: public Ui_FormBusinessActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMBUSINESSACTIVITY_H
