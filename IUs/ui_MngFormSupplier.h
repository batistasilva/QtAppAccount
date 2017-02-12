/********************************************************************************
** Form generated from reading UI file 'MngFormSupplier.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSUPPLIER_H
#define UI_MNGFORMSUPPLIER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMngSupplier
{
public:
    QTabWidget *TabWidgetSupplier;
    QWidget *TabMain;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxSupplierCode;
    QToolButton *TButtonSearchSupplierCode;
    QLabel *LabelFullName;
    QLineEdit *LEditFullName;
    QLabel *LabelShortName;
    QLineEdit *LEditShortName;
    QLabel *LabelCpfCnpj;
    QLineEdit *LEditCpfCnpj;
    QLabel *LabelCardRgStateReg;
    QLineEdit *LEditCardRgStateReg;
    QLabel *LabelDateExpCardRgStateReg;
    QDateEdit *DEditDateExpCardRgStateReg;
    QLabel *LabelLocalExpCardRgStateReg;
    QLineEdit *LEditLocalExpCardRgStateReg;
    QLabel *LabelDateCreated;
    QLabel *LabelSupplierCode;
    QGroupBox *GBoxNatureCorp;
    QRadioButton *RButtonNatureCorpJuridical;
    QRadioButton *RButtonNatureCorpPhysics;
    QGroupBox *GBoxGender;
    QRadioButton *RButtonGenderMale;
    QRadioButton *RButtonGenderFemale;
    QLabel *LabelStatus;
    QLineEdit *LEditDateCreated;
    QLineEdit *LEditSupplierID;
    QLabel *LabelDateInactive;
    QLineEdit *LEditDateInactive;
    QCheckBox *CHKBoxStatusSupplier;
    QWidget *TabBilling;
    QLabel *LabelZipCode;
    QLineEdit *LEditZipCode;
    QLabel *LabelStreetAddress;
    QLineEdit *LEditAddress;
    QLabel *LabelStreetAddressNumber;
    QLineEdit *LEditNumber;
    QLabel *LabelStreetAddressComplements;
    QLineEdit *LEditComplements;
    QLabel *LabelAddressDistrict;
    QLineEdit *LEditDistrict;
    QLabel *LabelAddressCity;
    QToolButton *TButtonSearchZipCode;
    QLineEdit *LEditAddressID;
    QComboBox *CBoxState;
    QLabel *LabelState;
    QComboBox *CBoxCity;
    QWidget *TabOthers;
    QLabel *LabelBusinessActivity;
    QLabel *LabelPaymentMthd;
    QLabel *LabelContact;
    QLineEdit *LEditContact;
    QLabel *LabelEmailContact;
    QLineEdit *LEditEmailContact;
    QLabel *LabelTelPhone;
    QLineEdit *LEditTelPhone;
    QLabel *LabelCelPhone;
    QLineEdit *LEditCelPhone;
    QLabel *LabelNextelPhone;
    QLineEdit *LEditNextelPhone;
    QGroupBox *GBoxBusinessActivity;
    QToolButton *TButtonToolsBusinessActivity;
    QComboBox *CBoxBusinessActivity;
    QGroupBox *GBoxPaymentMthd;
    QComboBox *CBoxPaymentMthd;
    QToolButton *TButtonToolsPaymentMthd;
    QLabel *LabelNotes;
    QTextEdit *TEditNotes;
    QLabel *LabelBillingMin;
    QLineEdit *LEditBillingMin;
    QGroupBox *GBoxTableView;
    QToolButton *TButtonValidate;
    QToolButton *TButtonSave;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonExit;
    QTableView *TableViewSupplier;

    void setupUi(QDialog *FormMngSupplier)
    {
        if (FormMngSupplier->objectName().isEmpty())
            FormMngSupplier->setObjectName(QStringLiteral("FormMngSupplier"));
        FormMngSupplier->resize(1010, 710);
        FormMngSupplier->setMinimumSize(QSize(1010, 710));
        FormMngSupplier->setMaximumSize(QSize(1010, 710));
        FormMngSupplier->setLayoutDirection(Qt::LeftToRight);
        TabWidgetSupplier = new QTabWidget(FormMngSupplier);
        TabWidgetSupplier->setObjectName(QStringLiteral("TabWidgetSupplier"));
        TabWidgetSupplier->setGeometry(QRect(0, 0, 1000, 290));
        TabMain = new QWidget();
        TabMain->setObjectName(QStringLiteral("TabMain"));
        GBoxSupplier = new QGroupBox(TabMain);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(100, 20, 190, 40));
        CBoxSupplierCode = new QComboBox(GBoxSupplier);
        CBoxSupplierCode->setObjectName(QStringLiteral("CBoxSupplierCode"));
        CBoxSupplierCode->setGeometry(QRect(5, 5, 150, 30));
        CBoxSupplierCode->setEditable(true);
        TButtonSearchSupplierCode = new QToolButton(GBoxSupplier);
        TButtonSearchSupplierCode->setObjectName(QStringLiteral("TButtonSearchSupplierCode"));
        TButtonSearchSupplierCode->setEnabled(false);
        TButtonSearchSupplierCode->setGeometry(QRect(155, 5, 30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/120x120/120px-Searchtool.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSearchSupplierCode->setIcon(icon);
        LabelFullName = new QLabel(TabMain);
        LabelFullName->setObjectName(QStringLiteral("LabelFullName"));
        LabelFullName->setGeometry(QRect(0, 70, 100, 30));
        LabelFullName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditFullName = new QLineEdit(TabMain);
        LEditFullName->setObjectName(QStringLiteral("LEditFullName"));
        LEditFullName->setGeometry(QRect(100, 70, 415, 30));
        LEditFullName->setAlignment(Qt::AlignCenter);
        LabelShortName = new QLabel(TabMain);
        LabelShortName->setObjectName(QStringLiteral("LabelShortName"));
        LabelShortName->setGeometry(QRect(0, 115, 100, 30));
        LabelShortName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditShortName = new QLineEdit(TabMain);
        LEditShortName->setObjectName(QStringLiteral("LEditShortName"));
        LEditShortName->setGeometry(QRect(100, 115, 220, 30));
        LEditShortName->setAlignment(Qt::AlignCenter);
        LabelCpfCnpj = new QLabel(TabMain);
        LabelCpfCnpj->setObjectName(QStringLiteral("LabelCpfCnpj"));
        LabelCpfCnpj->setGeometry(QRect(0, 205, 100, 30));
        LabelCpfCnpj->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCpfCnpj = new QLineEdit(TabMain);
        LEditCpfCnpj->setObjectName(QStringLiteral("LEditCpfCnpj"));
        LEditCpfCnpj->setGeometry(QRect(100, 205, 220, 31));
        LEditCpfCnpj->setAlignment(Qt::AlignCenter);
        LabelCardRgStateReg = new QLabel(TabMain);
        LabelCardRgStateReg->setObjectName(QStringLiteral("LabelCardRgStateReg"));
        LabelCardRgStateReg->setGeometry(QRect(0, 160, 100, 30));
        LabelCardRgStateReg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCardRgStateReg = new QLineEdit(TabMain);
        LEditCardRgStateReg->setObjectName(QStringLiteral("LEditCardRgStateReg"));
        LEditCardRgStateReg->setGeometry(QRect(100, 160, 220, 30));
        LEditCardRgStateReg->setLayoutDirection(Qt::LeftToRight);
        LEditCardRgStateReg->setAlignment(Qt::AlignCenter);
        LabelDateExpCardRgStateReg = new QLabel(TabMain);
        LabelDateExpCardRgStateReg->setObjectName(QStringLiteral("LabelDateExpCardRgStateReg"));
        LabelDateExpCardRgStateReg->setGeometry(QRect(340, 160, 130, 30));
        LabelDateExpCardRgStateReg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DEditDateExpCardRgStateReg = new QDateEdit(TabMain);
        DEditDateExpCardRgStateReg->setObjectName(QStringLiteral("DEditDateExpCardRgStateReg"));
        DEditDateExpCardRgStateReg->setGeometry(QRect(470, 160, 150, 30));
        DEditDateExpCardRgStateReg->setAlignment(Qt::AlignCenter);
        DEditDateExpCardRgStateReg->setDate(QDate(2013, 1, 1));
        DEditDateExpCardRgStateReg->setCalendarPopup(true);
        LabelLocalExpCardRgStateReg = new QLabel(TabMain);
        LabelLocalExpCardRgStateReg->setObjectName(QStringLiteral("LabelLocalExpCardRgStateReg"));
        LabelLocalExpCardRgStateReg->setGeometry(QRect(340, 205, 130, 30));
        LabelLocalExpCardRgStateReg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditLocalExpCardRgStateReg = new QLineEdit(TabMain);
        LEditLocalExpCardRgStateReg->setObjectName(QStringLiteral("LEditLocalExpCardRgStateReg"));
        LEditLocalExpCardRgStateReg->setGeometry(QRect(470, 205, 150, 30));
        LEditLocalExpCardRgStateReg->setAlignment(Qt::AlignCenter);
        LabelDateCreated = new QLabel(TabMain);
        LabelDateCreated->setObjectName(QStringLiteral("LabelDateCreated"));
        LabelDateCreated->setGeometry(QRect(640, 160, 130, 30));
        LabelDateCreated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelSupplierCode = new QLabel(TabMain);
        LabelSupplierCode->setObjectName(QStringLiteral("LabelSupplierCode"));
        LabelSupplierCode->setGeometry(QRect(0, 25, 100, 30));
        LabelSupplierCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GBoxNatureCorp = new QGroupBox(TabMain);
        GBoxNatureCorp->setObjectName(QStringLiteral("GBoxNatureCorp"));
        GBoxNatureCorp->setGeometry(QRect(770, 10, 210, 70));
        RButtonNatureCorpJuridical = new QRadioButton(GBoxNatureCorp);
        RButtonNatureCorpJuridical->setObjectName(QStringLiteral("RButtonNatureCorpJuridical"));
        RButtonNatureCorpJuridical->setGeometry(QRect(120, 30, 80, 22));
        RButtonNatureCorpPhysics = new QRadioButton(GBoxNatureCorp);
        RButtonNatureCorpPhysics->setObjectName(QStringLiteral("RButtonNatureCorpPhysics"));
        RButtonNatureCorpPhysics->setGeometry(QRect(20, 30, 80, 22));
        GBoxGender = new QGroupBox(TabMain);
        GBoxGender->setObjectName(QStringLiteral("GBoxGender"));
        GBoxGender->setGeometry(QRect(770, 80, 210, 70));
        RButtonGenderMale = new QRadioButton(GBoxGender);
        RButtonGenderMale->setObjectName(QStringLiteral("RButtonGenderMale"));
        RButtonGenderMale->setGeometry(QRect(20, 30, 105, 22));
        RButtonGenderFemale = new QRadioButton(GBoxGender);
        RButtonGenderFemale->setObjectName(QStringLiteral("RButtonGenderFemale"));
        RButtonGenderFemale->setGeometry(QRect(120, 30, 105, 22));
        LabelStatus = new QLabel(TabMain);
        LabelStatus->setObjectName(QStringLiteral("LabelStatus"));
        LabelStatus->setGeometry(QRect(550, 35, 70, 30));
        LabelStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditDateCreated = new QLineEdit(TabMain);
        LEditDateCreated->setObjectName(QStringLiteral("LEditDateCreated"));
        LEditDateCreated->setEnabled(false);
        LEditDateCreated->setGeometry(QRect(770, 160, 210, 30));
        LEditDateCreated->setFocusPolicy(Qt::NoFocus);
        LEditDateCreated->setAlignment(Qt::AlignCenter);
        LEditDateCreated->setReadOnly(true);
        LEditSupplierID = new QLineEdit(TabMain);
        LEditSupplierID->setObjectName(QStringLiteral("LEditSupplierID"));
        LEditSupplierID->setEnabled(false);
        LEditSupplierID->setGeometry(QRect(300, 25, 50, 30));
        LEditSupplierID->setFocusPolicy(Qt::NoFocus);
        LEditSupplierID->setAlignment(Qt::AlignCenter);
        LEditSupplierID->setReadOnly(true);
        LabelDateInactive = new QLabel(TabMain);
        LabelDateInactive->setObjectName(QStringLiteral("LabelDateInactive"));
        LabelDateInactive->setGeometry(QRect(640, 205, 130, 30));
        LabelDateInactive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditDateInactive = new QLineEdit(TabMain);
        LEditDateInactive->setObjectName(QStringLiteral("LEditDateInactive"));
        LEditDateInactive->setEnabled(false);
        LEditDateInactive->setGeometry(QRect(770, 205, 210, 30));
        LEditDateInactive->setFocusPolicy(Qt::NoFocus);
        LEditDateInactive->setAlignment(Qt::AlignCenter);
        LEditDateInactive->setReadOnly(true);
        CHKBoxStatusSupplier = new QCheckBox(TabMain);
        CHKBoxStatusSupplier->setObjectName(QStringLiteral("CHKBoxStatusSupplier"));
        CHKBoxStatusSupplier->setGeometry(QRect(630, 35, 97, 30));
        TabWidgetSupplier->addTab(TabMain, QString());
        TabBilling = new QWidget();
        TabBilling->setObjectName(QStringLiteral("TabBilling"));
        LabelZipCode = new QLabel(TabBilling);
        LabelZipCode->setObjectName(QStringLiteral("LabelZipCode"));
        LabelZipCode->setGeometry(QRect(300, 20, 60, 30));
        LabelZipCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditZipCode = new QLineEdit(TabBilling);
        LEditZipCode->setObjectName(QStringLiteral("LEditZipCode"));
        LEditZipCode->setGeometry(QRect(360, 20, 113, 30));
        LEditZipCode->setAlignment(Qt::AlignCenter);
        LabelStreetAddress = new QLabel(TabBilling);
        LabelStreetAddress->setObjectName(QStringLiteral("LabelStreetAddress"));
        LabelStreetAddress->setGeometry(QRect(0, 70, 100, 30));
        LabelStreetAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditAddress = new QLineEdit(TabBilling);
        LEditAddress->setObjectName(QStringLiteral("LEditAddress"));
        LEditAddress->setGeometry(QRect(100, 70, 400, 30));
        LEditAddress->setAlignment(Qt::AlignCenter);
        LabelStreetAddressNumber = new QLabel(TabBilling);
        LabelStreetAddressNumber->setObjectName(QStringLiteral("LabelStreetAddressNumber"));
        LabelStreetAddressNumber->setGeometry(QRect(620, 70, 100, 30));
        LabelStreetAddressNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditNumber = new QLineEdit(TabBilling);
        LEditNumber->setObjectName(QStringLiteral("LEditNumber"));
        LEditNumber->setGeometry(QRect(720, 70, 131, 30));
        LEditNumber->setAlignment(Qt::AlignCenter);
        LabelStreetAddressComplements = new QLabel(TabBilling);
        LabelStreetAddressComplements->setObjectName(QStringLiteral("LabelStreetAddressComplements"));
        LabelStreetAddressComplements->setGeometry(QRect(0, 120, 100, 30));
        LabelStreetAddressComplements->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditComplements = new QLineEdit(TabBilling);
        LEditComplements->setObjectName(QStringLiteral("LEditComplements"));
        LEditComplements->setGeometry(QRect(100, 120, 400, 30));
        LEditComplements->setAlignment(Qt::AlignCenter);
        LabelAddressDistrict = new QLabel(TabBilling);
        LabelAddressDistrict->setObjectName(QStringLiteral("LabelAddressDistrict"));
        LabelAddressDistrict->setGeometry(QRect(620, 120, 100, 30));
        LabelAddressDistrict->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditDistrict = new QLineEdit(TabBilling);
        LEditDistrict->setObjectName(QStringLiteral("LEditDistrict"));
        LEditDistrict->setGeometry(QRect(720, 120, 250, 30));
        LEditDistrict->setAlignment(Qt::AlignCenter);
        LabelAddressCity = new QLabel(TabBilling);
        LabelAddressCity->setObjectName(QStringLiteral("LabelAddressCity"));
        LabelAddressCity->setGeometry(QRect(620, 20, 100, 30));
        LabelAddressCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSearchZipCode = new QToolButton(TabBilling);
        TButtonSearchZipCode->setObjectName(QStringLiteral("TButtonSearchZipCode"));
        TButtonSearchZipCode->setEnabled(false);
        TButtonSearchZipCode->setGeometry(QRect(473, 20, 30, 30));
        TButtonSearchZipCode->setIcon(icon);
        LEditAddressID = new QLineEdit(TabBilling);
        LEditAddressID->setObjectName(QStringLiteral("LEditAddressID"));
        LEditAddressID->setEnabled(false);
        LEditAddressID->setGeometry(QRect(510, 20, 50, 30));
        LEditAddressID->setFocusPolicy(Qt::NoFocus);
        LEditAddressID->setAlignment(Qt::AlignCenter);
        LEditAddressID->setReadOnly(true);
        CBoxState = new QComboBox(TabBilling);
        CBoxState->setObjectName(QStringLiteral("CBoxState"));
        CBoxState->setGeometry(QRect(100, 20, 100, 30));
        LabelState = new QLabel(TabBilling);
        LabelState->setObjectName(QStringLiteral("LabelState"));
        LabelState->setGeometry(QRect(0, 20, 100, 30));
        LabelState->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxCity = new QComboBox(TabBilling);
        CBoxCity->setObjectName(QStringLiteral("CBoxCity"));
        CBoxCity->setGeometry(QRect(720, 20, 250, 30));
        TabWidgetSupplier->addTab(TabBilling, QString());
        TabOthers = new QWidget();
        TabOthers->setObjectName(QStringLiteral("TabOthers"));
        LabelBusinessActivity = new QLabel(TabOthers);
        LabelBusinessActivity->setObjectName(QStringLiteral("LabelBusinessActivity"));
        LabelBusinessActivity->setGeometry(QRect(10, 15, 140, 30));
        LabelBusinessActivity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelPaymentMthd = new QLabel(TabOthers);
        LabelPaymentMthd->setObjectName(QStringLiteral("LabelPaymentMthd"));
        LabelPaymentMthd->setGeometry(QRect(10, 65, 140, 30));
        LabelPaymentMthd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelContact = new QLabel(TabOthers);
        LabelContact->setObjectName(QStringLiteral("LabelContact"));
        LabelContact->setGeometry(QRect(10, 165, 140, 30));
        LabelContact->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditContact = new QLineEdit(TabOthers);
        LEditContact->setObjectName(QStringLiteral("LEditContact"));
        LEditContact->setGeometry(QRect(150, 165, 250, 30));
        LEditContact->setAlignment(Qt::AlignCenter);
        LabelEmailContact = new QLabel(TabOthers);
        LabelEmailContact->setObjectName(QStringLiteral("LabelEmailContact"));
        LabelEmailContact->setGeometry(QRect(10, 215, 140, 30));
        LabelEmailContact->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditEmailContact = new QLineEdit(TabOthers);
        LEditEmailContact->setObjectName(QStringLiteral("LEditEmailContact"));
        LEditEmailContact->setGeometry(QRect(150, 215, 250, 30));
        LEditEmailContact->setInputMethodHints(Qt::ImhEmailCharactersOnly);
        LEditEmailContact->setAlignment(Qt::AlignCenter);
        LabelTelPhone = new QLabel(TabOthers);
        LabelTelPhone->setObjectName(QStringLiteral("LabelTelPhone"));
        LabelTelPhone->setGeometry(QRect(420, 15, 140, 30));
        LabelTelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTelPhone = new QLineEdit(TabOthers);
        LEditTelPhone->setObjectName(QStringLiteral("LEditTelPhone"));
        LEditTelPhone->setGeometry(QRect(560, 15, 141, 30));
        LEditTelPhone->setAlignment(Qt::AlignCenter);
        LabelCelPhone = new QLabel(TabOthers);
        LabelCelPhone->setObjectName(QStringLiteral("LabelCelPhone"));
        LabelCelPhone->setGeometry(QRect(420, 64, 140, 30));
        LabelCelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCelPhone = new QLineEdit(TabOthers);
        LEditCelPhone->setObjectName(QStringLiteral("LEditCelPhone"));
        LEditCelPhone->setGeometry(QRect(560, 64, 141, 30));
        LEditCelPhone->setAlignment(Qt::AlignCenter);
        LabelNextelPhone = new QLabel(TabOthers);
        LabelNextelPhone->setObjectName(QStringLiteral("LabelNextelPhone"));
        LabelNextelPhone->setGeometry(QRect(420, 110, 140, 30));
        LabelNextelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditNextelPhone = new QLineEdit(TabOthers);
        LEditNextelPhone->setObjectName(QStringLiteral("LEditNextelPhone"));
        LEditNextelPhone->setGeometry(QRect(560, 110, 141, 30));
        LEditNextelPhone->setAlignment(Qt::AlignCenter);
        GBoxBusinessActivity = new QGroupBox(TabOthers);
        GBoxBusinessActivity->setObjectName(QStringLiteral("GBoxBusinessActivity"));
        GBoxBusinessActivity->setGeometry(QRect(150, 10, 241, 40));
        TButtonToolsBusinessActivity = new QToolButton(GBoxBusinessActivity);
        TButtonToolsBusinessActivity->setObjectName(QStringLiteral("TButtonToolsBusinessActivity"));
        TButtonToolsBusinessActivity->setGeometry(QRect(205, 5, 30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonToolsBusinessActivity->setIcon(icon1);
        CBoxBusinessActivity = new QComboBox(GBoxBusinessActivity);
        CBoxBusinessActivity->setObjectName(QStringLiteral("CBoxBusinessActivity"));
        CBoxBusinessActivity->setGeometry(QRect(5, 5, 200, 30));
        CBoxBusinessActivity->setEditable(true);
        GBoxPaymentMthd = new QGroupBox(TabOthers);
        GBoxPaymentMthd->setObjectName(QStringLiteral("GBoxPaymentMthd"));
        GBoxPaymentMthd->setGeometry(QRect(150, 60, 240, 40));
        CBoxPaymentMthd = new QComboBox(GBoxPaymentMthd);
        CBoxPaymentMthd->setObjectName(QStringLiteral("CBoxPaymentMthd"));
        CBoxPaymentMthd->setGeometry(QRect(5, 5, 200, 30));
        TButtonToolsPaymentMthd = new QToolButton(GBoxPaymentMthd);
        TButtonToolsPaymentMthd->setObjectName(QStringLiteral("TButtonToolsPaymentMthd"));
        TButtonToolsPaymentMthd->setGeometry(QRect(205, 5, 30, 30));
        TButtonToolsPaymentMthd->setIcon(icon1);
        LabelNotes = new QLabel(TabOthers);
        LabelNotes->setObjectName(QStringLiteral("LabelNotes"));
        LabelNotes->setGeometry(QRect(420, 150, 140, 30));
        LabelNotes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TEditNotes = new QTextEdit(TabOthers);
        TEditNotes->setObjectName(QStringLiteral("TEditNotes"));
        TEditNotes->setGeometry(QRect(560, 150, 421, 101));
        LabelBillingMin = new QLabel(TabOthers);
        LabelBillingMin->setObjectName(QStringLiteral("LabelBillingMin"));
        LabelBillingMin->setGeometry(QRect(10, 115, 140, 30));
        LabelBillingMin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditBillingMin = new QLineEdit(TabOthers);
        LEditBillingMin->setObjectName(QStringLiteral("LEditBillingMin"));
        LEditBillingMin->setGeometry(QRect(150, 115, 150, 30));
        LEditBillingMin->setInputMethodHints(Qt::ImhNone);
        LEditBillingMin->setAlignment(Qt::AlignCenter);
        TabWidgetSupplier->addTab(TabOthers, QString());
        GBoxTableView = new QGroupBox(FormMngSupplier);
        GBoxTableView->setObjectName(QStringLiteral("GBoxTableView"));
        GBoxTableView->setGeometry(QRect(5, 300, 1000, 401));
        TButtonValidate = new QToolButton(GBoxTableView);
        TButtonValidate->setObjectName(QStringLiteral("TButtonValidate"));
        TButtonValidate->setEnabled(false);
        TButtonValidate->setGeometry(QRect(890, 40, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidate->setIcon(icon2);
        TButtonValidate->setIconSize(QSize(48, 48));
        TButtonValidate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(GBoxTableView);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setEnabled(false);
        TButtonSave->setGeometry(QRect(890, 210, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon3);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(GBoxTableView);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setEnabled(false);
        TButtonCleanForm->setGeometry(QRect(890, 120, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/128x128/edit-clear-left-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon4);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExit = new QToolButton(GBoxTableView);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(890, 290, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon5);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TableViewSupplier = new QTableView(GBoxTableView);
        TableViewSupplier->setObjectName(QStringLiteral("TableViewSupplier"));
        TableViewSupplier->setGeometry(QRect(10, 20, 870, 370));

        retranslateUi(FormMngSupplier);

        TabWidgetSupplier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormMngSupplier);
    } // setupUi

    void retranslateUi(QDialog *FormMngSupplier)
    {
        FormMngSupplier->setWindowTitle(QApplication::translate("FormMngSupplier", "Cadastro de Fornecedores", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FormMngSupplier->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxSupplier->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxSupplierCode->setToolTip(QApplication::translate("FormMngSupplier", "Informar o C\303\263digo do Fornecedor para Pesquisar..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonSearchSupplierCode->setToolTip(QApplication::translate("FormMngSupplier", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchSupplierCode->setText(QApplication::translate("FormMngSupplier", "...", Q_NULLPTR));
        LabelFullName->setText(QApplication::translate("FormMngSupplier", "Nome:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullName->setToolTip(QApplication::translate("FormMngSupplier", "Informar a Raz\303\243o Social/Nome...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelShortName->setText(QApplication::translate("FormMngSupplier", "Nome Curto:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortName->setToolTip(QApplication::translate("FormMngSupplier", "Informar Apelido/Nome Fantasia...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelCpfCnpj->setText(QApplication::translate("FormMngSupplier", "Cpf/Cnpj:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCpfCnpj->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Cpf/Cnpj para o Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelCardRgStateReg->setText(QApplication::translate("FormMngSupplier", "RG/I.E.:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCardRgStateReg->setToolTip(QApplication::translate("FormMngSupplier", "Informar R.G./Inscri\303\247\303\243o Estadual... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDateExpCardRgStateReg->setText(QApplication::translate("FormMngSupplier", "Data de Expedi\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditDateExpCardRgStateReg->setToolTip(QApplication::translate("FormMngSupplier", "Data de Expedi\303\247\303\243o do RG/Inscri\303\247\303\243o Estadual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DEditDateExpCardRgStateReg->setDisplayFormat(QApplication::translate("FormMngSupplier", "dd/MM/yyyy", Q_NULLPTR));
        LabelLocalExpCardRgStateReg->setText(QApplication::translate("FormMngSupplier", "Local de Expedi\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditLocalExpCardRgStateReg->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Local de Expedi\303\247\303\243o do R.G./I.E...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDateCreated->setText(QApplication::translate("FormMngSupplier", "Data de Cria\303\247\303\243o:", Q_NULLPTR));
        LabelSupplierCode->setText(QApplication::translate("FormMngSupplier", "C\303\263digo:", Q_NULLPTR));
        GBoxNatureCorp->setTitle(QApplication::translate("FormMngSupplier", "Natureza", Q_NULLPTR));
        RButtonNatureCorpJuridical->setText(QApplication::translate("FormMngSupplier", "Jur\303\255dica", Q_NULLPTR));
        RButtonNatureCorpPhysics->setText(QApplication::translate("FormMngSupplier", "F\303\255sica", Q_NULLPTR));
        GBoxGender->setTitle(QApplication::translate("FormMngSupplier", "G\303\252nero", Q_NULLPTR));
        RButtonGenderMale->setText(QApplication::translate("FormMngSupplier", "Masculino", Q_NULLPTR));
        RButtonGenderFemale->setText(QApplication::translate("FormMngSupplier", "Feminino", Q_NULLPTR));
        LabelStatus->setText(QApplication::translate("FormMngSupplier", "Status:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDateCreated->setToolTip(QApplication::translate("FormMngSupplier", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditSupplierID->setToolTip(QApplication::translate("FormMngSupplier", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDateInactive->setText(QApplication::translate("FormMngSupplier", "Data  Inatividade:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDateInactive->setToolTip(QApplication::translate("FormMngSupplier", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditDateInactive->setText(QString());
#ifndef QT_NO_TOOLTIP
        CHKBoxStatusSupplier->setToolTip(QApplication::translate("FormMngSupplier", "Marcar o como Ativo/Inativo...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CHKBoxStatusSupplier->setText(QApplication::translate("FormMngSupplier", "Ativo", Q_NULLPTR));
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabMain), QApplication::translate("FormMngSupplier", "Principal", Q_NULLPTR));
        LabelZipCode->setText(QApplication::translate("FormMngSupplier", "Cep:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditZipCode->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Cep da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditZipCode->setInputMask(QApplication::translate("FormMngSupplier", "99999-999; ", Q_NULLPTR));
        LabelStreetAddress->setText(QApplication::translate("FormMngSupplier", "Endere\303\247o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddress->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Endere\303\247\303\265 do Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStreetAddressNumber->setText(QApplication::translate("FormMngSupplier", "N\303\272mero:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNumber->setToolTip(QApplication::translate("FormMngSupplier", "Informar o N\303\272mero para o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStreetAddressComplements->setText(QApplication::translate("FormMngSupplier", "Complemento:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditComplements->setToolTip(QApplication::translate("FormMngSupplier", "Informar um Complemento para o Endere\303\247o, caso tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddressDistrict->setText(QApplication::translate("FormMngSupplier", "Bairro:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDistrict->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Bairro/Regi\303\243o onde fica o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddressCity->setText(QApplication::translate("FormMngSupplier", "Cidade:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearchZipCode->setToolTip(QApplication::translate("FormMngSupplier", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchZipCode->setText(QApplication::translate("FormMngSupplier", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddressID->setToolTip(QApplication::translate("FormMngSupplier", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CBoxState->setToolTip(QApplication::translate("FormMngSupplier", "Selecionar o Estado da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelState->setText(QApplication::translate("FormMngSupplier", "Uf:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCity->setToolTip(QApplication::translate("FormMngSupplier", "Informar a Cidade do Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabBilling), QApplication::translate("FormMngSupplier", "Faturamento", Q_NULLPTR));
        LabelBusinessActivity->setText(QApplication::translate("FormMngSupplier", "Ramo de Atividade:", Q_NULLPTR));
        LabelPaymentMthd->setText(QApplication::translate("FormMngSupplier", "Tipo de Pagamento:", Q_NULLPTR));
        LabelContact->setText(QApplication::translate("FormMngSupplier", "Contato:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditContact->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Nome do Representande de Contato...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelEmailContact->setText(QApplication::translate("FormMngSupplier", "E-mail:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditEmailContact->setToolTip(QApplication::translate("FormMngSupplier", "Informar o E-mail de Contato com o Representante..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditEmailContact->setInputMask(QString());
        LEditEmailContact->setText(QString());
        LabelTelPhone->setText(QApplication::translate("FormMngSupplier", "Telefone:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTelPhone->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Telefone de Contato com Representante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditTelPhone->setInputMask(QApplication::translate("FormMngSupplier", "(99)(9999-9999); ", Q_NULLPTR));
        LabelCelPhone->setText(QApplication::translate("FormMngSupplier", "Celular:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCelPhone->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Celular de Contato com Representante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditCelPhone->setInputMask(QApplication::translate("FormMngSupplier", "(99)9(9999-9999); ", Q_NULLPTR));
        LabelNextelPhone->setText(QApplication::translate("FormMngSupplier", "Nextel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNextelPhone->setToolTip(QApplication::translate("FormMngSupplier", "Informar o N\303\272mero Nextel P/Contato com Representante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditNextelPhone->setInputMask(QApplication::translate("FormMngSupplier", "(99)(9999-9999); ", Q_NULLPTR));
        LEditNextelPhone->setText(QApplication::translate("FormMngSupplier", "()(-)", Q_NULLPTR));
        GBoxBusinessActivity->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        TButtonToolsBusinessActivity->setToolTip(QApplication::translate("FormMngSupplier", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolsBusinessActivity->setText(QApplication::translate("FormMngSupplier", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxBusinessActivity->setToolTip(QApplication::translate("FormMngSupplier", "Selecionar/Digitar o Ramo de Atividade do Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPaymentMthd->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxPaymentMthd->setToolTip(QApplication::translate("FormMngSupplier", "Selecionar uma Forma de Pagamento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolsPaymentMthd->setToolTip(QApplication::translate("FormMngSupplier", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolsPaymentMthd->setText(QApplication::translate("FormMngSupplier", "...", Q_NULLPTR));
        LabelNotes->setText(QApplication::translate("FormMngSupplier", "Nota:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNotes->setToolTip(QApplication::translate("FormMngSupplier", "Informar uma observa\303\247\303\243o importante para o Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelBillingMin->setText(QApplication::translate("FormMngSupplier", "Faturamento Min.:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditBillingMin->setToolTip(QApplication::translate("FormMngSupplier", "Informar o Valor Minimo para Faturamento para o Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditBillingMin->setInputMask(QString());
        LEditBillingMin->setText(QString());
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabOthers), QApplication::translate("FormMngSupplier", "Outros", Q_NULLPTR));
        GBoxTableView->setTitle(QApplication::translate("FormMngSupplier", "Fornecedores:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonValidate->setToolTip(QApplication::translate("FormMngSupplier", "Valida os dados Obrigat\303\263rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidate->setText(QApplication::translate("FormMngSupplier", "Validar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("FormMngSupplier", "Salva os dados do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("FormMngSupplier", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("FormMngSupplier", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("FormMngSupplier", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("FormMngSupplier", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("FormMngSupplier", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewSupplier->setToolTip(QApplication::translate("FormMngSupplier", "Selecione um Fornecedor para Exibir/Alterar seus dados...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class FormMngSupplier: public Ui_FormMngSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSUPPLIER_H
