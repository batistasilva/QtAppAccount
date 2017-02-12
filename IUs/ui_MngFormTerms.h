/********************************************************************************
** Form generated from reading UI file 'MngFormTerms.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMTERMS_H
#define UI_MNGFORMTERMS_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTerms
{
public:
    QGroupBox *GBoxView;
    QTableView *TableViewTerms;
    QToolButton *TButtonRemoveTerm;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSaveTerm;
    QToolButton *TButtonExitTerm;
    QTabWidget *TabWidgetMain;
    QWidget *TabMain;
    QLineEdit *LEditTermsID;
    QLabel *LabelTermsCode;
    QComboBox *CBoxTermsCode;
    QGroupBox *GBoxTermsStatusActive;
    QCheckBox *CheckBoxTermsStatusActive;
    QLineEdit *LEditTermsDescrip;
    QLabel *LabelTermsDescrip;
    QCheckBox *CheckBoxPayable;
    QCheckBox *CheckBoxReceivables;
    QGroupBox *GBoxTermsType;
    QRadioButton *RButtonTermsInCash;
    QRadioButton *RButtonTermsSubDivision;
    QWidget *TabOthers;
    QGroupBox *GBoxTypeDue;
    QRadioButton *RButtonForTypeCutOffDay;
    QRadioButton *RButtonForTypeDueDays;
    QGroupBox *GBoxOthers;
    QSpinBox *SBoxTermsDueDaysLimite;
    QLabel *LabelTermsDiscountDaysLimite;
    QSpinBox *SBoxTermsCutOffDay;
    QLabel *LabelTermsDiscountPercentLimite;
    QSpinBox *SBoxTermsQuantOfDaysByInstall;
    QLabel *LabelTermsCutOffDay;
    QLabel *LabelTermsQuantOfInstallments;
    QSpinBox *SBoxTermsQuantitiesOfInstallments;
    QLabel *LabelTermsQuantOfDaysByInstall;
    QLabel *LabelTermsDueDaysLimite;
    QSpinBox *SBoxTermsDiscountDaysLimite;
    QLineEdit *LEditTermsDiscountPercentLimite;

    void setupUi(QDialog *FormTerms)
    {
        if (FormTerms->objectName().isEmpty())
            FormTerms->setObjectName(QStringLiteral("FormTerms"));
        FormTerms->resize(750, 600);
        FormTerms->setMinimumSize(QSize(750, 600));
        FormTerms->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormTerms->setWindowIcon(icon);
        GBoxView = new QGroupBox(FormTerms);
        GBoxView->setObjectName(QStringLiteral("GBoxView"));
        GBoxView->setGeometry(QRect(10, 190, 731, 311));
        TableViewTerms = new QTableView(GBoxView);
        TableViewTerms->setObjectName(QStringLiteral("TableViewTerms"));
        TableViewTerms->setGeometry(QRect(20, 30, 601, 261));
        TButtonRemoveTerm = new QToolButton(GBoxView);
        TButtonRemoveTerm->setObjectName(QStringLiteral("TButtonRemoveTerm"));
        TButtonRemoveTerm->setGeometry(QRect(630, 210, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveTerm->setIcon(icon1);
        TButtonRemoveTerm->setIconSize(QSize(48, 48));
        TButtonRemoveTerm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(GBoxView);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(630, 30, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon2);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSaveTerm = new QToolButton(GBoxView);
        TButtonSaveTerm->setObjectName(QStringLiteral("TButtonSaveTerm"));
        TButtonSaveTerm->setGeometry(QRect(630, 120, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveTerm->setIcon(icon3);
        TButtonSaveTerm->setIconSize(QSize(48, 48));
        TButtonSaveTerm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExitTerm = new QToolButton(FormTerms);
        TButtonExitTerm->setObjectName(QStringLiteral("TButtonExitTerm"));
        TButtonExitTerm->setGeometry(QRect(10, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitTerm->setIcon(icon4);
        TButtonExitTerm->setIconSize(QSize(48, 48));
        TButtonExitTerm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetMain = new QTabWidget(FormTerms);
        TabWidgetMain->setObjectName(QStringLiteral("TabWidgetMain"));
        TabWidgetMain->setGeometry(QRect(10, 0, 730, 190));
        TabMain = new QWidget();
        TabMain->setObjectName(QStringLiteral("TabMain"));
        LEditTermsID = new QLineEdit(TabMain);
        LEditTermsID->setObjectName(QStringLiteral("LEditTermsID"));
        LEditTermsID->setGeometry(QRect(230, 20, 50, 30));
        LabelTermsCode = new QLabel(TabMain);
        LabelTermsCode->setObjectName(QStringLiteral("LabelTermsCode"));
        LabelTermsCode->setGeometry(QRect(0, 20, 100, 30));
        LabelTermsCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxTermsCode = new QComboBox(TabMain);
        CBoxTermsCode->setObjectName(QStringLiteral("CBoxTermsCode"));
        CBoxTermsCode->setGeometry(QRect(100, 20, 130, 30));
        CBoxTermsCode->setEditable(true);
        GBoxTermsStatusActive = new QGroupBox(TabMain);
        GBoxTermsStatusActive->setObjectName(QStringLiteral("GBoxTermsStatusActive"));
        GBoxTermsStatusActive->setGeometry(QRect(490, 0, 230, 70));
        CheckBoxTermsStatusActive = new QCheckBox(GBoxTermsStatusActive);
        CheckBoxTermsStatusActive->setObjectName(QStringLiteral("CheckBoxTermsStatusActive"));
        CheckBoxTermsStatusActive->setGeometry(QRect(80, 30, 100, 30));
        LEditTermsDescrip = new QLineEdit(TabMain);
        LEditTermsDescrip->setObjectName(QStringLiteral("LEditTermsDescrip"));
        LEditTermsDescrip->setGeometry(QRect(100, 60, 300, 30));
        LEditTermsDescrip->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        LabelTermsDescrip = new QLabel(TabMain);
        LabelTermsDescrip->setObjectName(QStringLiteral("LabelTermsDescrip"));
        LabelTermsDescrip->setGeometry(QRect(0, 60, 100, 30));
        LabelTermsDescrip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CheckBoxPayable = new QCheckBox(TabMain);
        CheckBoxPayable->setObjectName(QStringLiteral("CheckBoxPayable"));
        CheckBoxPayable->setGeometry(QRect(100, 120, 120, 22));
        CheckBoxReceivables = new QCheckBox(TabMain);
        CheckBoxReceivables->setObjectName(QStringLiteral("CheckBoxReceivables"));
        CheckBoxReceivables->setGeometry(QRect(250, 120, 120, 22));
        GBoxTermsType = new QGroupBox(TabMain);
        GBoxTermsType->setObjectName(QStringLiteral("GBoxTermsType"));
        GBoxTermsType->setGeometry(QRect(490, 80, 230, 70));
        GBoxTermsType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RButtonTermsInCash = new QRadioButton(GBoxTermsType);
        RButtonTermsInCash->setObjectName(QStringLiteral("RButtonTermsInCash"));
        RButtonTermsInCash->setGeometry(QRect(20, 30, 100, 30));
        RButtonTermsSubDivision = new QRadioButton(GBoxTermsType);
        RButtonTermsSubDivision->setObjectName(QStringLiteral("RButtonTermsSubDivision"));
        RButtonTermsSubDivision->setGeometry(QRect(130, 30, 100, 30));
        TabWidgetMain->addTab(TabMain, QString());
        TabOthers = new QWidget();
        TabOthers->setObjectName(QStringLiteral("TabOthers"));
        GBoxTypeDue = new QGroupBox(TabOthers);
        GBoxTypeDue->setObjectName(QStringLiteral("GBoxTypeDue"));
        GBoxTypeDue->setGeometry(QRect(10, 10, 151, 130));
        RButtonForTypeCutOffDay = new QRadioButton(GBoxTypeDue);
        RButtonForTypeCutOffDay->setObjectName(QStringLiteral("RButtonForTypeCutOffDay"));
        RButtonForTypeCutOffDay->setGeometry(QRect(10, 80, 130, 22));
        RButtonForTypeDueDays = new QRadioButton(GBoxTypeDue);
        RButtonForTypeDueDays->setObjectName(QStringLiteral("RButtonForTypeDueDays"));
        RButtonForTypeDueDays->setGeometry(QRect(10, 40, 130, 22));
        GBoxOthers = new QGroupBox(TabOthers);
        GBoxOthers->setObjectName(QStringLiteral("GBoxOthers"));
        GBoxOthers->setGeometry(QRect(170, 10, 551, 130));
        SBoxTermsDueDaysLimite = new QSpinBox(GBoxOthers);
        SBoxTermsDueDaysLimite->setObjectName(QStringLiteral("SBoxTermsDueDaysLimite"));
        SBoxTermsDueDaysLimite->setGeometry(QRect(270, 30, 60, 30));
        SBoxTermsDueDaysLimite->setAlignment(Qt::AlignCenter);
        LabelTermsDiscountDaysLimite = new QLabel(GBoxOthers);
        LabelTermsDiscountDaysLimite->setObjectName(QStringLiteral("LabelTermsDiscountDaysLimite"));
        LabelTermsDiscountDaysLimite->setGeometry(QRect(340, 30, 140, 30));
        LabelTermsDiscountDaysLimite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SBoxTermsCutOffDay = new QSpinBox(GBoxOthers);
        SBoxTermsCutOffDay->setObjectName(QStringLiteral("SBoxTermsCutOffDay"));
        SBoxTermsCutOffDay->setGeometry(QRect(270, 80, 60, 30));
        SBoxTermsCutOffDay->setAlignment(Qt::AlignCenter);
        LabelTermsDiscountPercentLimite = new QLabel(GBoxOthers);
        LabelTermsDiscountPercentLimite->setObjectName(QStringLiteral("LabelTermsDiscountPercentLimite"));
        LabelTermsDiscountPercentLimite->setGeometry(QRect(350, 80, 130, 30));
        LabelTermsDiscountPercentLimite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SBoxTermsQuantOfDaysByInstall = new QSpinBox(GBoxOthers);
        SBoxTermsQuantOfDaysByInstall->setObjectName(QStringLiteral("SBoxTermsQuantOfDaysByInstall"));
        SBoxTermsQuantOfDaysByInstall->setGeometry(QRect(110, 80, 60, 30));
        SBoxTermsQuantOfDaysByInstall->setAlignment(Qt::AlignCenter);
        LabelTermsCutOffDay = new QLabel(GBoxOthers);
        LabelTermsCutOffDay->setObjectName(QStringLiteral("LabelTermsCutOffDay"));
        LabelTermsCutOffDay->setGeometry(QRect(170, 80, 100, 30));
        LabelTermsCutOffDay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelTermsQuantOfInstallments = new QLabel(GBoxOthers);
        LabelTermsQuantOfInstallments->setObjectName(QStringLiteral("LabelTermsQuantOfInstallments"));
        LabelTermsQuantOfInstallments->setGeometry(QRect(0, 30, 110, 30));
        LabelTermsQuantOfInstallments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SBoxTermsQuantitiesOfInstallments = new QSpinBox(GBoxOthers);
        SBoxTermsQuantitiesOfInstallments->setObjectName(QStringLiteral("SBoxTermsQuantitiesOfInstallments"));
        SBoxTermsQuantitiesOfInstallments->setGeometry(QRect(110, 30, 60, 30));
        SBoxTermsQuantitiesOfInstallments->setAlignment(Qt::AlignCenter);
        LabelTermsQuantOfDaysByInstall = new QLabel(GBoxOthers);
        LabelTermsQuantOfDaysByInstall->setObjectName(QStringLiteral("LabelTermsQuantOfDaysByInstall"));
        LabelTermsQuantOfDaysByInstall->setGeometry(QRect(10, 80, 100, 30));
        LabelTermsQuantOfDaysByInstall->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelTermsDueDaysLimite = new QLabel(GBoxOthers);
        LabelTermsDueDaysLimite->setObjectName(QStringLiteral("LabelTermsDueDaysLimite"));
        LabelTermsDueDaysLimite->setGeometry(QRect(170, 30, 100, 30));
        LabelTermsDueDaysLimite->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SBoxTermsDiscountDaysLimite = new QSpinBox(GBoxOthers);
        SBoxTermsDiscountDaysLimite->setObjectName(QStringLiteral("SBoxTermsDiscountDaysLimite"));
        SBoxTermsDiscountDaysLimite->setGeometry(QRect(480, 30, 60, 30));
        SBoxTermsDiscountDaysLimite->setAlignment(Qt::AlignCenter);
        LEditTermsDiscountPercentLimite = new QLineEdit(GBoxOthers);
        LEditTermsDiscountPercentLimite->setObjectName(QStringLiteral("LEditTermsDiscountPercentLimite"));
        LEditTermsDiscountPercentLimite->setGeometry(QRect(480, 80, 60, 30));
        LEditTermsDiscountPercentLimite->setAlignment(Qt::AlignCenter);
        TabWidgetMain->addTab(TabOthers, QString());

        retranslateUi(FormTerms);

        TabWidgetMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormTerms);
    } // setupUi

    void retranslateUi(QDialog *FormTerms)
    {
        FormTerms->setWindowTitle(QApplication::translate("FormTerms", "Manuten\303\247\303\243o em Condi\303\247\303\265es de Pagamentos", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FormTerms->setToolTip(QApplication::translate("FormTerms", "Permite Adicionar, Alterar ou Excluir uma Condi\303\247\303\243o de  Pagamento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxView->setTitle(QApplication::translate("FormTerms", "Condi\303\247\303\265es:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewTerms->setToolTip(QApplication::translate("FormTerms", "Condi\303\247\303\265es de Pagamentos Atuais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveTerm->setToolTip(QApplication::translate("FormTerms", "Fazer Remo\303\247\303\243o da Condi\303\247\303\243o de Pagamento Selecionada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveTerm->setText(QApplication::translate("FormTerms", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("FormTerms", "Permite Limpar os Campos do Formul\303\241rio das Condi\303\247\303\265es de Pagamentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("FormTerms", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveTerm->setToolTip(QApplication::translate("FormTerms", "Salvar os Dados para a Condi\303\247\303\243o de Pagamento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveTerm->setText(QApplication::translate("FormTerms", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitTerm->setToolTip(QApplication::translate("FormTerms", "Permite Sair da Janela de Manuten\303\247\303\243o de Condi\303\247\303\265es de Pagamentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitTerm->setText(QApplication::translate("FormTerms", "Sair", Q_NULLPTR));
        LabelTermsCode->setText(QApplication::translate("FormTerms", "C\303\263digo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxTermsCode->setToolTip(QApplication::translate("FormTerms", "Informar um C\303\263digo para a Condi\303\247\303\243o de Pagamento Desejada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTermsStatusActive->setTitle(QApplication::translate("FormTerms", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxTermsStatusActive->setToolTip(QApplication::translate("FormTerms", "Ativar para a Condi\303\247\303\243o poder ser Usada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxTermsStatusActive->setText(QApplication::translate("FormTerms", "Ativo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTermsDescrip->setToolTip(QApplication::translate("FormTerms", "Informar uma Descri\303\247\303\243o para a Condi\303\247\303\243o de Vendas/Compras...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTermsDescrip->setText(QApplication::translate("FormTerms", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxPayable->setToolTip(QApplication::translate("FormTerms", "Marcar para uma Condi\303\247\303\243o de Pagamentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxPayable->setText(QApplication::translate("FormTerms", "Pagamento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxReceivables->setToolTip(QApplication::translate("FormTerms", "Marcar para uma Condi\303\247\303\243o de Recebimentos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxReceivables->setText(QApplication::translate("FormTerms", "Recebimento", Q_NULLPTR));
        GBoxTermsType->setTitle(QApplication::translate("FormTerms", "Tipo de Condi\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonTermsInCash->setToolTip(QApplication::translate("FormTerms", "Ativar para uma Condi\303\247\303\243o A Vista...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonTermsInCash->setText(QApplication::translate("FormTerms", "A Vista", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonTermsSubDivision->setToolTip(QApplication::translate("FormTerms", "Ativar para uma Condi\303\247\303\243o Parcelada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonTermsSubDivision->setText(QApplication::translate("FormTerms", "Parcelada", Q_NULLPTR));
        TabWidgetMain->setTabText(TabWidgetMain->indexOf(TabMain), QApplication::translate("FormTerms", "Principal", Q_NULLPTR));
        GBoxTypeDue->setTitle(QApplication::translate("FormTerms", "Tipo Vencimento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonForTypeCutOffDay->setToolTip(QApplication::translate("FormTerms", "Marcar para o Faturamento para Uma Data  de Corte...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonForTypeCutOffDay->setText(QApplication::translate("FormTerms", "Dia(s) de Corte", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonForTypeDueDays->setToolTip(QApplication::translate("FormTerms", "Marcar para o Faturamento para a Quant. Dias Infomados...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonForTypeDueDays->setText(QApplication::translate("FormTerms", "Dias para Pagar", Q_NULLPTR));
        GBoxOthers->setTitle(QApplication::translate("FormTerms", "Outros", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SBoxTermsDueDaysLimite->setToolTip(QApplication::translate("FormTerms", "Informar a Quantidade de Dias para o Faturamento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTermsDiscountDaysLimite->setText(QApplication::translate("FormTerms", "Dias de Antecipa\303\247\303\243o: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SBoxTermsCutOffDay->setToolTip(QApplication::translate("FormTerms", "Informar a Quantidade de Dias para o Corte da Fatura...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTermsDiscountPercentLimite->setText(QApplication::translate("FormTerms", "Percentual (%): ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SBoxTermsQuantOfDaysByInstall->setToolTip(QApplication::translate("FormTerms", "Informar a Quantidade de Dias para Cada Parcela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTermsCutOffDay->setText(QApplication::translate("FormTerms", "Dia de Corte: ", Q_NULLPTR));
        LabelTermsQuantOfInstallments->setText(QApplication::translate("FormTerms", "N\303\272m. Parcelas: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SBoxTermsQuantitiesOfInstallments->setToolTip(QApplication::translate("FormTerms", "Informar as Quantidades de Parcelas para Vendas/Compras...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTermsQuantOfDaysByInstall->setText(QApplication::translate("FormTerms", "Dias  Parcela: ", Q_NULLPTR));
        LabelTermsDueDaysLimite->setText(QApplication::translate("FormTerms", "Dias devido: ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SBoxTermsDiscountDaysLimite->setToolTip(QApplication::translate("FormTerms", "Informar a Quantidade de Dias para Recebimento/Pagamentos com Descontos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditTermsDiscountPercentLimite->setToolTip(QApplication::translate("FormTerms", "Informar um Percentual de Desconto para Recebimento/Pagamento  Antecipado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetMain->setTabText(TabWidgetMain->indexOf(TabOthers), QApplication::translate("FormTerms", "Outros", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormTerms: public Ui_FormTerms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMTERMS_H
