/********************************************************************************
** Form generated from reading UI file 'MngFormCustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCUSTOMER_H
#define UI_MNGFORMCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMngCustomer
{
public:
    QTabWidget *TabWidgetCustomer;
    QWidget *TabPersonal;
    QGroupBox *GBoxSearchCustomer;
    QGroupBox *GBoxCustomer;
    QComboBox *CBoxCustomer;
    QToolButton *TButtonCustomerLeftNextSearch;
    QToolButton *TButtonCustomerRightLastSearch;
    QToolButton *TButtonCustomerLeftFirstSearch;
    QToolButton *TButtonCustomerRightNextSearch;
    QGroupBox *GBoxStatusSupplier;
    QGroupBox *GBStatusCustomer;
    QComboBox *CBoxStatusCustomer;
    QGroupBox *GBDateAdded;
    QDateEdit *DEditAdded;
    QGroupBox *GBCustomerBusiness;
    QGroupBox *GBoxIDStrReg;
    QLineEdit *LEditIDStrReg;
    QGroupBox *GBoxDateExp;
    QDateEdit *DEditDateExp;
    QGroupBox *GBoxLocalExp;
    QLineEdit *LEditLocalExp;
    QGroupBox *GBoxCpfCnpj;
    QLineEdit *LEditCpfCnpj;
    QGroupBox *GBoxFullName;
    QLineEdit *LEditFullName;
    QGroupBox *GBoxShortName;
    QLineEdit *LEditShortName;
    QGroupBox *GBoxGender;
    QComboBox *CBoxGender;
    QGroupBox *GBoxNatureCorp;
    QComboBox *CBoxNatureCorp;
    QGroupBox *GBoxOthers;
    QGroupBox *GBoxCustomerType;
    QComboBox *CBoxCustomerType;
    QGroupBox *GBoxEmail;
    QLineEdit *LEditEmailContact;
    QGroupBox *GBoxTelPhone;
    QLineEdit *LEditTelPhone;
    QGroupBox *GBoxCelPhone;
    QLineEdit *LEditCelPhone;
    QGroupBox *GBoxNextelPhone;
    QLineEdit *LEditNextelPhone;
    QGroupBox *GBoxNotes;
    QTextEdit *TEditNotes;
    QGroupBox *GBoxLastOrder;
    QDateEdit *DEditLastOrder;
    QGroupBox *GBoxIndication;
    QComboBox *CBoxIndication;
    QGroupBox *GBoxLastSeller;
    QComboBox *CBoxLastSeller;
    QToolButton *TButtonValidPrsonal;
    QWidget *TabBilling;
    QGroupBox *GBoxPlaceAddress;
    QGroupBox *GBoxAddress;
    QLineEdit *LEditAddress;
    QGroupBox *GBoxNumber;
    QLineEdit *LEditNumber;
    QGroupBox *GBoxComplements;
    QLineEdit *LEditComplements;
    QGroupBox *GBoxDistrict;
    QLineEdit *LEditDistrict;
    QGroupBox *GBoxCity;
    QComboBox *CBoxCity;
    QGroupBox *GBoxState;
    QComboBox *CBoxState;
    QGroupBox *GBoxZipCode;
    QLineEdit *LEditZipCode;
    QGroupBox *GBoxOthersBilling;
    QGroupBox *GBoxPaymentSchd;
    QLineEdit *LEditPaymentSchd;
    QGroupBox *GBoxPaymentMthd;
    QComboBox *CBoxPaymentMthd;
    QGroupBox *GBoxNotesBilling;
    QTextEdit *TEditNotesBilling;
    QGroupBox *GBoxSetToDelivery;
    QComboBox *CBoxSetToDelivery;
    QGroupBox *GBoxCustomersCreditStatus;
    QLineEdit *LEditCustomersCreditStatus;
    QGroupBox *GBoxCustomerCreditLimit;
    QLineEdit *LEditCustomerCreditLimit;
    QGroupBox *GBoxBusinessArea;
    QComboBox *CBoxBusinessArea;
    QGroupBox *GBoxBusinessName;
    QLineEdit *LEditBusinessName;
    QGroupBox *GBoxBusinessContact;
    QLineEdit *LEditBusinessContact;
    QGroupBox *GBoxBusinessContactPhone;
    QLineEdit *LEditBusinessContactPhone1;
    QLineEdit *LEditBusinessContactPhone2;
    QToolButton *TButtonValidBilling;
    QWidget *TabDelivery;
    QGroupBox *GBoxPlaceDelivery;
    QGroupBox *GBoxAddressDelivery;
    QLineEdit *LEditAddressDelivery;
    QGroupBox *GBoxNumberDelivery;
    QLineEdit *LEditNumberDelivery;
    QGroupBox *GBoxComplementsDelivery;
    QLineEdit *LEditComplementsDelivery;
    QGroupBox *GBoxDistrictDelivery;
    QLineEdit *LEditDistrictDelivery;
    QGroupBox *GBoxCityDelivery;
    QComboBox *CBoxCityDelivery;
    QGroupBox *GBoxStateDelivery;
    QComboBox *CBoxStateDelivery;
    QGroupBox *GBoxZipCodeDelivery;
    QLineEdit *LEditZipCodeDelivery;
    QGroupBox *GBoxOthersDelivery;
    QGroupBox *GBoxNotesDelivery;
    QTextEdit *TEditNotesDelivery;
    QToolButton *TButtonValidDelivery;
    QToolButton *TButtonExit;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSave;

    void setupUi(QDialog *FormMngCustomer)
    {
        if (FormMngCustomer->objectName().isEmpty())
            FormMngCustomer->setObjectName(QStringLiteral("FormMngCustomer"));
        FormMngCustomer->resize(1010, 710);
        TabWidgetCustomer = new QTabWidget(FormMngCustomer);
        TabWidgetCustomer->setObjectName(QStringLiteral("TabWidgetCustomer"));
        TabWidgetCustomer->setGeometry(QRect(10, 10, 981, 600));
        TabPersonal = new QWidget();
        TabPersonal->setObjectName(QStringLiteral("TabPersonal"));
        GBoxSearchCustomer = new QGroupBox(TabPersonal);
        GBoxSearchCustomer->setObjectName(QStringLiteral("GBoxSearchCustomer"));
        GBoxSearchCustomer->setGeometry(QRect(10, 10, 561, 105));
        GBoxCustomer = new QGroupBox(GBoxSearchCustomer);
        GBoxCustomer->setObjectName(QStringLiteral("GBoxCustomer"));
        GBoxCustomer->setGeometry(QRect(10, 10, 171, 80));
        GBoxCustomer->setMinimumSize(QSize(150, 55));
        GBoxCustomer->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CBoxCustomer = new QComboBox(GBoxCustomer);
        CBoxCustomer->setObjectName(QStringLiteral("CBoxCustomer"));
        CBoxCustomer->setGeometry(QRect(10, 30, 150, 30));
        TButtonCustomerLeftNextSearch = new QToolButton(GBoxSearchCustomer);
        TButtonCustomerLeftNextSearch->setObjectName(QStringLiteral("TButtonCustomerLeftNextSearch"));
        TButtonCustomerLeftNextSearch->setGeometry(QRect(280, 20, 80, 70));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-go-back-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCustomerLeftNextSearch->setIcon(icon);
        TButtonCustomerLeftNextSearch->setIconSize(QSize(30, 30));
        TButtonCustomerRightLastSearch = new QToolButton(GBoxSearchCustomer);
        TButtonCustomerRightLastSearch->setObjectName(QStringLiteral("TButtonCustomerRightLastSearch"));
        TButtonCustomerRightLastSearch->setGeometry(QRect(460, 20, 80, 70));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-goto-last-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCustomerRightLastSearch->setIcon(icon1);
        TButtonCustomerRightLastSearch->setIconSize(QSize(30, 30));
        TButtonCustomerLeftFirstSearch = new QToolButton(GBoxSearchCustomer);
        TButtonCustomerLeftFirstSearch->setObjectName(QStringLiteral("TButtonCustomerLeftFirstSearch"));
        TButtonCustomerLeftFirstSearch->setGeometry(QRect(190, 20, 80, 70));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-goto-first-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCustomerLeftFirstSearch->setIcon(icon2);
        TButtonCustomerLeftFirstSearch->setIconSize(QSize(30, 30));
        TButtonCustomerRightNextSearch = new QToolButton(GBoxSearchCustomer);
        TButtonCustomerRightNextSearch->setObjectName(QStringLiteral("TButtonCustomerRightNextSearch"));
        TButtonCustomerRightNextSearch->setGeometry(QRect(370, 20, 80, 70));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-go-forward-ltr.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCustomerRightNextSearch->setIcon(icon3);
        TButtonCustomerRightNextSearch->setIconSize(QSize(30, 30));
        GBoxStatusSupplier = new QGroupBox(TabPersonal);
        GBoxStatusSupplier->setObjectName(QStringLiteral("GBoxStatusSupplier"));
        GBoxStatusSupplier->setGeometry(QRect(580, 10, 381, 105));
        GBStatusCustomer = new QGroupBox(GBoxStatusSupplier);
        GBStatusCustomer->setObjectName(QStringLiteral("GBStatusCustomer"));
        GBStatusCustomer->setGeometry(QRect(20, 10, 171, 80));
        CBoxStatusCustomer = new QComboBox(GBStatusCustomer);
        CBoxStatusCustomer->setObjectName(QStringLiteral("CBoxStatusCustomer"));
        CBoxStatusCustomer->setGeometry(QRect(20, 30, 131, 30));
        GBDateAdded = new QGroupBox(GBoxStatusSupplier);
        GBDateAdded->setObjectName(QStringLiteral("GBDateAdded"));
        GBDateAdded->setGeometry(QRect(210, 10, 151, 80));
        DEditAdded = new QDateEdit(GBDateAdded);
        DEditAdded->setObjectName(QStringLiteral("DEditAdded"));
        DEditAdded->setGeometry(QRect(20, 30, 110, 30));
        DEditAdded->setAlignment(Qt::AlignCenter);
        GBCustomerBusiness = new QGroupBox(TabPersonal);
        GBCustomerBusiness->setObjectName(QStringLiteral("GBCustomerBusiness"));
        GBCustomerBusiness->setGeometry(QRect(10, 110, 951, 151));
        GBoxIDStrReg = new QGroupBox(GBCustomerBusiness);
        GBoxIDStrReg->setObjectName(QStringLiteral("GBoxIDStrReg"));
        GBoxIDStrReg->setGeometry(QRect(10, 20, 201, 60));
        LEditIDStrReg = new QLineEdit(GBoxIDStrReg);
        LEditIDStrReg->setObjectName(QStringLiteral("LEditIDStrReg"));
        LEditIDStrReg->setGeometry(QRect(10, 20, 181, 30));
        LEditIDStrReg->setLayoutDirection(Qt::LeftToRight);
        LEditIDStrReg->setAlignment(Qt::AlignCenter);
        GBoxDateExp = new QGroupBox(GBCustomerBusiness);
        GBoxDateExp->setObjectName(QStringLiteral("GBoxDateExp"));
        GBoxDateExp->setGeometry(QRect(220, 20, 141, 60));
        DEditDateExp = new QDateEdit(GBoxDateExp);
        DEditDateExp->setObjectName(QStringLiteral("DEditDateExp"));
        DEditDateExp->setGeometry(QRect(10, 20, 121, 30));
        DEditDateExp->setAlignment(Qt::AlignCenter);
        GBoxLocalExp = new QGroupBox(GBCustomerBusiness);
        GBoxLocalExp->setObjectName(QStringLiteral("GBoxLocalExp"));
        GBoxLocalExp->setGeometry(QRect(370, 20, 221, 60));
        LEditLocalExp = new QLineEdit(GBoxLocalExp);
        LEditLocalExp->setObjectName(QStringLiteral("LEditLocalExp"));
        LEditLocalExp->setGeometry(QRect(10, 20, 201, 31));
        LEditLocalExp->setAlignment(Qt::AlignCenter);
        GBoxCpfCnpj = new QGroupBox(GBCustomerBusiness);
        GBoxCpfCnpj->setObjectName(QStringLiteral("GBoxCpfCnpj"));
        GBoxCpfCnpj->setGeometry(QRect(710, 20, 231, 60));
        LEditCpfCnpj = new QLineEdit(GBoxCpfCnpj);
        LEditCpfCnpj->setObjectName(QStringLiteral("LEditCpfCnpj"));
        LEditCpfCnpj->setGeometry(QRect(10, 20, 211, 31));
        LEditCpfCnpj->setAlignment(Qt::AlignCenter);
        GBoxFullName = new QGroupBox(GBCustomerBusiness);
        GBoxFullName->setObjectName(QStringLiteral("GBoxFullName"));
        GBoxFullName->setGeometry(QRect(10, 80, 451, 60));
        LEditFullName = new QLineEdit(GBoxFullName);
        LEditFullName->setObjectName(QStringLiteral("LEditFullName"));
        LEditFullName->setGeometry(QRect(20, 20, 415, 30));
        LEditFullName->setAlignment(Qt::AlignCenter);
        GBoxShortName = new QGroupBox(GBCustomerBusiness);
        GBoxShortName->setObjectName(QStringLiteral("GBoxShortName"));
        GBoxShortName->setGeometry(QRect(470, 80, 281, 60));
        LEditShortName = new QLineEdit(GBoxShortName);
        LEditShortName->setObjectName(QStringLiteral("LEditShortName"));
        LEditShortName->setGeometry(QRect(20, 20, 241, 30));
        LEditShortName->setAlignment(Qt::AlignCenter);
        GBoxGender = new QGroupBox(GBCustomerBusiness);
        GBoxGender->setObjectName(QStringLiteral("GBoxGender"));
        GBoxGender->setGeometry(QRect(760, 80, 181, 60));
        CBoxGender = new QComboBox(GBoxGender);
        CBoxGender->setObjectName(QStringLiteral("CBoxGender"));
        CBoxGender->setGeometry(QRect(10, 20, 151, 30));
        CBoxGender->setLayoutDirection(Qt::LeftToRight);
        GBoxNatureCorp = new QGroupBox(GBCustomerBusiness);
        GBoxNatureCorp->setObjectName(QStringLiteral("GBoxNatureCorp"));
        GBoxNatureCorp->setGeometry(QRect(600, 20, 101, 60));
        CBoxNatureCorp = new QComboBox(GBoxNatureCorp);
        CBoxNatureCorp->setObjectName(QStringLiteral("CBoxNatureCorp"));
        CBoxNatureCorp->setGeometry(QRect(10, 20, 80, 30));
        GBoxOthers = new QGroupBox(TabPersonal);
        GBoxOthers->setObjectName(QStringLiteral("GBoxOthers"));
        GBoxOthers->setGeometry(QRect(10, 260, 951, 291));
        GBoxCustomerType = new QGroupBox(GBoxOthers);
        GBoxCustomerType->setObjectName(QStringLiteral("GBoxCustomerType"));
        GBoxCustomerType->setGeometry(QRect(10, 20, 180, 60));
        CBoxCustomerType = new QComboBox(GBoxCustomerType);
        CBoxCustomerType->setObjectName(QStringLiteral("CBoxCustomerType"));
        CBoxCustomerType->setGeometry(QRect(10, 20, 161, 30));
        CBoxCustomerType->setEditable(true);
        GBoxEmail = new QGroupBox(GBoxOthers);
        GBoxEmail->setObjectName(QStringLiteral("GBoxEmail"));
        GBoxEmail->setGeometry(QRect(580, 80, 361, 60));
        LEditEmailContact = new QLineEdit(GBoxEmail);
        LEditEmailContact->setObjectName(QStringLiteral("LEditEmailContact"));
        LEditEmailContact->setGeometry(QRect(10, 20, 341, 30));
        LEditEmailContact->setAlignment(Qt::AlignCenter);
        GBoxTelPhone = new QGroupBox(GBoxOthers);
        GBoxTelPhone->setObjectName(QStringLiteral("GBoxTelPhone"));
        GBoxTelPhone->setGeometry(QRect(10, 80, 180, 60));
        LEditTelPhone = new QLineEdit(GBoxTelPhone);
        LEditTelPhone->setObjectName(QStringLiteral("LEditTelPhone"));
        LEditTelPhone->setGeometry(QRect(10, 20, 161, 30));
        LEditTelPhone->setAlignment(Qt::AlignCenter);
        GBoxCelPhone = new QGroupBox(GBoxOthers);
        GBoxCelPhone->setObjectName(QStringLiteral("GBoxCelPhone"));
        GBoxCelPhone->setGeometry(QRect(200, 80, 180, 60));
        LEditCelPhone = new QLineEdit(GBoxCelPhone);
        LEditCelPhone->setObjectName(QStringLiteral("LEditCelPhone"));
        LEditCelPhone->setGeometry(QRect(10, 20, 161, 30));
        LEditCelPhone->setAlignment(Qt::AlignCenter);
        GBoxNextelPhone = new QGroupBox(GBoxOthers);
        GBoxNextelPhone->setObjectName(QStringLiteral("GBoxNextelPhone"));
        GBoxNextelPhone->setGeometry(QRect(390, 80, 181, 60));
        LEditNextelPhone = new QLineEdit(GBoxNextelPhone);
        LEditNextelPhone->setObjectName(QStringLiteral("LEditNextelPhone"));
        LEditNextelPhone->setGeometry(QRect(10, 20, 161, 30));
        LEditNextelPhone->setAlignment(Qt::AlignCenter);
        GBoxNotes = new QGroupBox(GBoxOthers);
        GBoxNotes->setObjectName(QStringLiteral("GBoxNotes"));
        GBoxNotes->setGeometry(QRect(10, 140, 791, 141));
        TEditNotes = new QTextEdit(GBoxNotes);
        TEditNotes->setObjectName(QStringLiteral("TEditNotes"));
        TEditNotes->setGeometry(QRect(50, 30, 691, 101));
        GBoxLastOrder = new QGroupBox(GBoxOthers);
        GBoxLastOrder->setObjectName(QStringLiteral("GBoxLastOrder"));
        GBoxLastOrder->setGeometry(QRect(200, 20, 180, 60));
        DEditLastOrder = new QDateEdit(GBoxLastOrder);
        DEditLastOrder->setObjectName(QStringLiteral("DEditLastOrder"));
        DEditLastOrder->setGeometry(QRect(10, 20, 161, 31));
        DEditLastOrder->setAlignment(Qt::AlignCenter);
        GBoxIndication = new QGroupBox(GBoxOthers);
        GBoxIndication->setObjectName(QStringLiteral("GBoxIndication"));
        GBoxIndication->setGeometry(QRect(630, 20, 311, 60));
        CBoxIndication = new QComboBox(GBoxIndication);
        CBoxIndication->setObjectName(QStringLiteral("CBoxIndication"));
        CBoxIndication->setGeometry(QRect(10, 20, 291, 30));
        CBoxIndication->setMinimumSize(QSize(280, 30));
        GBoxLastSeller = new QGroupBox(GBoxOthers);
        GBoxLastSeller->setObjectName(QStringLiteral("GBoxLastSeller"));
        GBoxLastSeller->setGeometry(QRect(390, 20, 231, 60));
        CBoxLastSeller = new QComboBox(GBoxLastSeller);
        CBoxLastSeller->setObjectName(QStringLiteral("CBoxLastSeller"));
        CBoxLastSeller->setGeometry(QRect(10, 20, 211, 30));
        TButtonValidPrsonal = new QToolButton(GBoxOthers);
        TButtonValidPrsonal->setObjectName(QStringLiteral("TButtonValidPrsonal"));
        TButtonValidPrsonal->setGeometry(QRect(830, 170, 100, 80));
        TButtonValidPrsonal->setMinimumSize(QSize(100, 80));
        TButtonValidPrsonal->setMaximumSize(QSize(100, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidPrsonal->setIcon(icon4);
        TButtonValidPrsonal->setIconSize(QSize(48, 48));
        TButtonValidPrsonal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetCustomer->addTab(TabPersonal, QString());
        TabBilling = new QWidget();
        TabBilling->setObjectName(QStringLiteral("TabBilling"));
        GBoxPlaceAddress = new QGroupBox(TabBilling);
        GBoxPlaceAddress->setObjectName(QStringLiteral("GBoxPlaceAddress"));
        GBoxPlaceAddress->setGeometry(QRect(10, 10, 951, 211));
        GBoxAddress = new QGroupBox(GBoxPlaceAddress);
        GBoxAddress->setObjectName(QStringLiteral("GBoxAddress"));
        GBoxAddress->setGeometry(QRect(10, 30, 451, 80));
        LEditAddress = new QLineEdit(GBoxAddress);
        LEditAddress->setObjectName(QStringLiteral("LEditAddress"));
        LEditAddress->setGeometry(QRect(20, 30, 415, 30));
        LEditAddress->setAlignment(Qt::AlignCenter);
        GBoxNumber = new QGroupBox(GBoxPlaceAddress);
        GBoxNumber->setObjectName(QStringLiteral("GBoxNumber"));
        GBoxNumber->setGeometry(QRect(470, 30, 151, 80));
        LEditNumber = new QLineEdit(GBoxNumber);
        LEditNumber->setObjectName(QStringLiteral("LEditNumber"));
        LEditNumber->setGeometry(QRect(10, 30, 131, 30));
        LEditNumber->setAlignment(Qt::AlignCenter);
        GBoxComplements = new QGroupBox(GBoxPlaceAddress);
        GBoxComplements->setObjectName(QStringLiteral("GBoxComplements"));
        GBoxComplements->setGeometry(QRect(630, 30, 311, 80));
        LEditComplements = new QLineEdit(GBoxComplements);
        LEditComplements->setObjectName(QStringLiteral("LEditComplements"));
        LEditComplements->setGeometry(QRect(10, 30, 291, 30));
        LEditComplements->setAlignment(Qt::AlignCenter);
        GBoxDistrict = new QGroupBox(GBoxPlaceAddress);
        GBoxDistrict->setObjectName(QStringLiteral("GBoxDistrict"));
        GBoxDistrict->setGeometry(QRect(10, 120, 331, 80));
        LEditDistrict = new QLineEdit(GBoxDistrict);
        LEditDistrict->setObjectName(QStringLiteral("LEditDistrict"));
        LEditDistrict->setGeometry(QRect(10, 30, 311, 30));
        LEditDistrict->setAlignment(Qt::AlignCenter);
        GBoxCity = new QGroupBox(GBoxPlaceAddress);
        GBoxCity->setObjectName(QStringLiteral("GBoxCity"));
        GBoxCity->setGeometry(QRect(490, 120, 291, 80));
        GBoxCity->setCursor(QCursor(Qt::SizeVerCursor));
        GBoxCity->setLayoutDirection(Qt::LeftToRight);
        GBoxCity->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CBoxCity = new QComboBox(GBoxCity);
        CBoxCity->setObjectName(QStringLiteral("CBoxCity"));
        CBoxCity->setGeometry(QRect(10, 30, 271, 30));
        CBoxCity->setEditable(true);
        GBoxState = new QGroupBox(GBoxPlaceAddress);
        GBoxState->setObjectName(QStringLiteral("GBoxState"));
        GBoxState->setGeometry(QRect(350, 120, 131, 80));
        CBoxState = new QComboBox(GBoxState);
        CBoxState->setObjectName(QStringLiteral("CBoxState"));
        CBoxState->setGeometry(QRect(10, 30, 111, 31));
        CBoxState->setCursor(QCursor(Qt::IBeamCursor));
        CBoxState->setLayoutDirection(Qt::LeftToRight);
        CBoxState->setEditable(true);
        GBoxZipCode = new QGroupBox(GBoxPlaceAddress);
        GBoxZipCode->setObjectName(QStringLiteral("GBoxZipCode"));
        GBoxZipCode->setGeometry(QRect(790, 120, 151, 80));
        LEditZipCode = new QLineEdit(GBoxZipCode);
        LEditZipCode->setObjectName(QStringLiteral("LEditZipCode"));
        LEditZipCode->setGeometry(QRect(10, 30, 131, 30));
        LEditZipCode->setAlignment(Qt::AlignCenter);
        GBoxOthersBilling = new QGroupBox(TabBilling);
        GBoxOthersBilling->setObjectName(QStringLiteral("GBoxOthersBilling"));
        GBoxOthersBilling->setGeometry(QRect(10, 220, 951, 331));
        GBoxPaymentSchd = new QGroupBox(GBoxOthersBilling);
        GBoxPaymentSchd->setObjectName(QStringLiteral("GBoxPaymentSchd"));
        GBoxPaymentSchd->setGeometry(QRect(610, 100, 121, 80));
        LEditPaymentSchd = new QLineEdit(GBoxPaymentSchd);
        LEditPaymentSchd->setObjectName(QStringLiteral("LEditPaymentSchd"));
        LEditPaymentSchd->setGeometry(QRect(10, 30, 101, 31));
        LEditPaymentSchd->setAlignment(Qt::AlignCenter);
        GBoxPaymentMthd = new QGroupBox(GBoxOthersBilling);
        GBoxPaymentMthd->setObjectName(QStringLiteral("GBoxPaymentMthd"));
        GBoxPaymentMthd->setGeometry(QRect(220, 100, 171, 80));
        CBoxPaymentMthd = new QComboBox(GBoxPaymentMthd);
        CBoxPaymentMthd->setObjectName(QStringLiteral("CBoxPaymentMthd"));
        CBoxPaymentMthd->setGeometry(QRect(10, 30, 150, 27));
        CBoxPaymentMthd->setMinimumSize(QSize(150, 0));
        GBoxNotesBilling = new QGroupBox(GBoxOthersBilling);
        GBoxNotesBilling->setObjectName(QStringLiteral("GBoxNotesBilling"));
        GBoxNotesBilling->setGeometry(QRect(210, 180, 531, 141));
        GBoxNotesBilling->setMinimumSize(QSize(350, 110));
        TEditNotesBilling = new QTextEdit(GBoxNotesBilling);
        TEditNotesBilling->setObjectName(QStringLiteral("TEditNotesBilling"));
        TEditNotesBilling->setGeometry(QRect(20, 30, 491, 91));
        TEditNotesBilling->setMinimumSize(QSize(300, 90));
        GBoxSetToDelivery = new QGroupBox(GBoxOthersBilling);
        GBoxSetToDelivery->setObjectName(QStringLiteral("GBoxSetToDelivery"));
        GBoxSetToDelivery->setGeometry(QRect(750, 100, 191, 80));
        CBoxSetToDelivery = new QComboBox(GBoxSetToDelivery);
        CBoxSetToDelivery->setObjectName(QStringLiteral("CBoxSetToDelivery"));
        CBoxSetToDelivery->setGeometry(QRect(20, 30, 150, 31));
        GBoxCustomersCreditStatus = new QGroupBox(GBoxOthersBilling);
        GBoxCustomersCreditStatus->setObjectName(QStringLiteral("GBoxCustomersCreditStatus"));
        GBoxCustomersCreditStatus->setGeometry(QRect(10, 100, 191, 80));
        LEditCustomersCreditStatus = new QLineEdit(GBoxCustomersCreditStatus);
        LEditCustomersCreditStatus->setObjectName(QStringLiteral("LEditCustomersCreditStatus"));
        LEditCustomersCreditStatus->setGeometry(QRect(10, 30, 171, 31));
        LEditCustomersCreditStatus->setAlignment(Qt::AlignCenter);
        GBoxCustomerCreditLimit = new QGroupBox(GBoxOthersBilling);
        GBoxCustomerCreditLimit->setObjectName(QStringLiteral("GBoxCustomerCreditLimit"));
        GBoxCustomerCreditLimit->setGeometry(QRect(410, 100, 181, 80));
        LEditCustomerCreditLimit = new QLineEdit(GBoxCustomerCreditLimit);
        LEditCustomerCreditLimit->setObjectName(QStringLiteral("LEditCustomerCreditLimit"));
        LEditCustomerCreditLimit->setGeometry(QRect(10, 30, 161, 31));
        LEditCustomerCreditLimit->setAlignment(Qt::AlignCenter);
        GBoxBusinessArea = new QGroupBox(GBoxOthersBilling);
        GBoxBusinessArea->setObjectName(QStringLiteral("GBoxBusinessArea"));
        GBoxBusinessArea->setGeometry(QRect(10, 20, 211, 80));
        CBoxBusinessArea = new QComboBox(GBoxBusinessArea);
        CBoxBusinessArea->setObjectName(QStringLiteral("CBoxBusinessArea"));
        CBoxBusinessArea->setGeometry(QRect(10, 30, 191, 31));
        GBoxBusinessName = new QGroupBox(GBoxOthersBilling);
        GBoxBusinessName->setObjectName(QStringLiteral("GBoxBusinessName"));
        GBoxBusinessName->setGeometry(QRect(230, 20, 211, 80));
        LEditBusinessName = new QLineEdit(GBoxBusinessName);
        LEditBusinessName->setObjectName(QStringLiteral("LEditBusinessName"));
        LEditBusinessName->setGeometry(QRect(10, 30, 191, 31));
        LEditBusinessName->setAlignment(Qt::AlignCenter);
        GBoxBusinessContact = new QGroupBox(GBoxOthersBilling);
        GBoxBusinessContact->setObjectName(QStringLiteral("GBoxBusinessContact"));
        GBoxBusinessContact->setGeometry(QRect(450, 20, 181, 80));
        LEditBusinessContact = new QLineEdit(GBoxBusinessContact);
        LEditBusinessContact->setObjectName(QStringLiteral("LEditBusinessContact"));
        LEditBusinessContact->setGeometry(QRect(10, 30, 161, 31));
        LEditBusinessContact->setAlignment(Qt::AlignCenter);
        GBoxBusinessContactPhone = new QGroupBox(GBoxOthersBilling);
        GBoxBusinessContactPhone->setObjectName(QStringLiteral("GBoxBusinessContactPhone"));
        GBoxBusinessContactPhone->setGeometry(QRect(640, 20, 301, 80));
        LEditBusinessContactPhone1 = new QLineEdit(GBoxBusinessContactPhone);
        LEditBusinessContactPhone1->setObjectName(QStringLiteral("LEditBusinessContactPhone1"));
        LEditBusinessContactPhone1->setGeometry(QRect(10, 30, 141, 31));
        LEditBusinessContactPhone1->setAlignment(Qt::AlignCenter);
        LEditBusinessContactPhone2 = new QLineEdit(GBoxBusinessContactPhone);
        LEditBusinessContactPhone2->setObjectName(QStringLiteral("LEditBusinessContactPhone2"));
        LEditBusinessContactPhone2->setGeometry(QRect(150, 30, 141, 31));
        LEditBusinessContactPhone2->setAlignment(Qt::AlignCenter);
        TButtonValidBilling = new QToolButton(GBoxOthersBilling);
        TButtonValidBilling->setObjectName(QStringLiteral("TButtonValidBilling"));
        TButtonValidBilling->setGeometry(QRect(810, 210, 100, 80));
        TButtonValidBilling->setMinimumSize(QSize(100, 80));
        TButtonValidBilling->setMaximumSize(QSize(100, 80));
        TButtonValidBilling->setIcon(icon4);
        TButtonValidBilling->setIconSize(QSize(48, 48));
        TButtonValidBilling->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetCustomer->addTab(TabBilling, QString());
        TabDelivery = new QWidget();
        TabDelivery->setObjectName(QStringLiteral("TabDelivery"));
        GBoxPlaceDelivery = new QGroupBox(TabDelivery);
        GBoxPlaceDelivery->setObjectName(QStringLiteral("GBoxPlaceDelivery"));
        GBoxPlaceDelivery->setGeometry(QRect(10, 20, 951, 211));
        GBoxAddressDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxAddressDelivery->setObjectName(QStringLiteral("GBoxAddressDelivery"));
        GBoxAddressDelivery->setGeometry(QRect(10, 30, 451, 80));
        LEditAddressDelivery = new QLineEdit(GBoxAddressDelivery);
        LEditAddressDelivery->setObjectName(QStringLiteral("LEditAddressDelivery"));
        LEditAddressDelivery->setGeometry(QRect(20, 30, 415, 30));
        LEditAddressDelivery->setAlignment(Qt::AlignCenter);
        GBoxNumberDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxNumberDelivery->setObjectName(QStringLiteral("GBoxNumberDelivery"));
        GBoxNumberDelivery->setGeometry(QRect(470, 30, 151, 80));
        LEditNumberDelivery = new QLineEdit(GBoxNumberDelivery);
        LEditNumberDelivery->setObjectName(QStringLiteral("LEditNumberDelivery"));
        LEditNumberDelivery->setGeometry(QRect(10, 30, 131, 30));
        LEditNumberDelivery->setAlignment(Qt::AlignCenter);
        GBoxComplementsDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxComplementsDelivery->setObjectName(QStringLiteral("GBoxComplementsDelivery"));
        GBoxComplementsDelivery->setGeometry(QRect(630, 30, 311, 80));
        LEditComplementsDelivery = new QLineEdit(GBoxComplementsDelivery);
        LEditComplementsDelivery->setObjectName(QStringLiteral("LEditComplementsDelivery"));
        LEditComplementsDelivery->setGeometry(QRect(10, 30, 291, 30));
        GBoxDistrictDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxDistrictDelivery->setObjectName(QStringLiteral("GBoxDistrictDelivery"));
        GBoxDistrictDelivery->setGeometry(QRect(10, 120, 331, 80));
        LEditDistrictDelivery = new QLineEdit(GBoxDistrictDelivery);
        LEditDistrictDelivery->setObjectName(QStringLiteral("LEditDistrictDelivery"));
        LEditDistrictDelivery->setGeometry(QRect(10, 30, 311, 30));
        LEditDistrictDelivery->setAlignment(Qt::AlignCenter);
        GBoxCityDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxCityDelivery->setObjectName(QStringLiteral("GBoxCityDelivery"));
        GBoxCityDelivery->setGeometry(QRect(490, 120, 291, 80));
        GBoxCityDelivery->setCursor(QCursor(Qt::SizeVerCursor));
        GBoxCityDelivery->setLayoutDirection(Qt::LeftToRight);
        GBoxCityDelivery->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        CBoxCityDelivery = new QComboBox(GBoxCityDelivery);
        CBoxCityDelivery->setObjectName(QStringLiteral("CBoxCityDelivery"));
        CBoxCityDelivery->setGeometry(QRect(10, 30, 271, 30));
        CBoxCityDelivery->setEditable(true);
        GBoxStateDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxStateDelivery->setObjectName(QStringLiteral("GBoxStateDelivery"));
        GBoxStateDelivery->setGeometry(QRect(350, 120, 131, 80));
        CBoxStateDelivery = new QComboBox(GBoxStateDelivery);
        CBoxStateDelivery->setObjectName(QStringLiteral("CBoxStateDelivery"));
        CBoxStateDelivery->setGeometry(QRect(10, 30, 111, 31));
        CBoxStateDelivery->setCursor(QCursor(Qt::IBeamCursor));
        CBoxStateDelivery->setLayoutDirection(Qt::LeftToRight);
        CBoxStateDelivery->setEditable(true);
        GBoxZipCodeDelivery = new QGroupBox(GBoxPlaceDelivery);
        GBoxZipCodeDelivery->setObjectName(QStringLiteral("GBoxZipCodeDelivery"));
        GBoxZipCodeDelivery->setGeometry(QRect(790, 120, 151, 80));
        LEditZipCodeDelivery = new QLineEdit(GBoxZipCodeDelivery);
        LEditZipCodeDelivery->setObjectName(QStringLiteral("LEditZipCodeDelivery"));
        LEditZipCodeDelivery->setGeometry(QRect(10, 30, 131, 30));
        LEditZipCodeDelivery->setAlignment(Qt::AlignCenter);
        GBoxOthersDelivery = new QGroupBox(TabDelivery);
        GBoxOthersDelivery->setObjectName(QStringLiteral("GBoxOthersDelivery"));
        GBoxOthersDelivery->setGeometry(QRect(10, 240, 951, 211));
        GBoxNotesDelivery = new QGroupBox(GBoxOthersDelivery);
        GBoxNotesDelivery->setObjectName(QStringLiteral("GBoxNotesDelivery"));
        GBoxNotesDelivery->setGeometry(QRect(30, 40, 731, 141));
        GBoxNotesDelivery->setMinimumSize(QSize(350, 110));
        TEditNotesDelivery = new QTextEdit(GBoxNotesDelivery);
        TEditNotesDelivery->setObjectName(QStringLiteral("TEditNotesDelivery"));
        TEditNotesDelivery->setGeometry(QRect(20, 30, 691, 91));
        TEditNotesDelivery->setMinimumSize(QSize(300, 90));
        TButtonValidDelivery = new QToolButton(GBoxOthersDelivery);
        TButtonValidDelivery->setObjectName(QStringLiteral("TButtonValidDelivery"));
        TButtonValidDelivery->setGeometry(QRect(810, 70, 100, 80));
        TButtonValidDelivery->setMinimumSize(QSize(100, 80));
        TButtonValidDelivery->setMaximumSize(QSize(100, 80));
        TButtonValidDelivery->setIcon(icon4);
        TButtonValidDelivery->setIconSize(QSize(48, 48));
        TButtonValidDelivery->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetCustomer->addTab(TabDelivery, QString());
        TButtonExit = new QToolButton(FormMngCustomer);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(460, 620, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon5);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(FormMngCustomer);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(560, 620, 90, 80));
        TButtonCleanForm->setIcon(icon4);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(FormMngCustomer);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setGeometry(QRect(360, 620, 90, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon6);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(FormMngCustomer);

        TabWidgetCustomer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormMngCustomer);
    } // setupUi

    void retranslateUi(QDialog *FormMngCustomer)
    {
        FormMngCustomer->setWindowTitle(QApplication::translate("FormMngCustomer", "Dialog", Q_NULLPTR));
        GBoxSearchCustomer->setTitle(QString());
        GBoxCustomer->setTitle(QApplication::translate("FormMngCustomer", "C\303\263digo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCustomer->setToolTip(QApplication::translate("FormMngCustomer", "Selecione um C\303\263digo de Cliente para Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonCustomerLeftNextSearch->setToolTip(QApplication::translate("FormMngCustomer", "Vai para o Pr\303\263ximo Registro Inferior...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCustomerLeftNextSearch->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonCustomerRightLastSearch->setToolTip(QApplication::translate("FormMngCustomer", "Vai para o \303\232ltimo Registro...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCustomerRightLastSearch->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonCustomerLeftFirstSearch->setToolTip(QApplication::translate("FormMngCustomer", "Vai para o Primeiro Registro...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCustomerLeftFirstSearch->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonCustomerRightNextSearch->setToolTip(QApplication::translate("FormMngCustomer", "Vai para o Pr\303\263ximo Registro Superior...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCustomerRightNextSearch->setText(QString());
        GBoxStatusSupplier->setTitle(QString());
        GBStatusCustomer->setTitle(QApplication::translate("FormMngCustomer", "Estatus Cliente", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxStatusCustomer->setToolTip(QApplication::translate("FormMngCustomer", "Selecione um Estatus para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBDateAdded->setTitle(QApplication::translate("FormMngCustomer", "Cadastrado", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditAdded->setToolTip(QApplication::translate("FormMngCustomer", "Data de Cadastro para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBCustomerBusiness->setTitle(QApplication::translate("FormMngCustomer", "Persoal/Empresarial", Q_NULLPTR));
        GBoxIDStrReg->setTitle(QApplication::translate("FormMngCustomer", "RG/I.E.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditIDStrReg->setToolTip(QApplication::translate("FormMngCustomer", "Informar R.G./Inscri\303\247\303\243o Estadual ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDateExp->setTitle(QApplication::translate("FormMngCustomer", "Data de Expedi\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditDateExp->setToolTip(QApplication::translate("FormMngCustomer", "Data de Expedi\303\247\303\243o do RG/Inscri\303\247\303\243o Estadual...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLocalExp->setTitle(QApplication::translate("FormMngCustomer", "Local de Expedi\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditLocalExp->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Local de Expedi\303\247\303\243o do R.G./I.E...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCpfCnpj->setTitle(QApplication::translate("FormMngCustomer", "Cpf/Cnpj", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCpfCnpj->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Cpf/Cnpj para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxFullName->setTitle(QApplication::translate("FormMngCustomer", "Nome", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullName->setToolTip(QApplication::translate("FormMngCustomer", "Informar Nome do Cliente/Raz\303\243o Social...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxShortName->setTitle(QApplication::translate("FormMngCustomer", "Apelido", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortName->setToolTip(QApplication::translate("FormMngCustomer", "Informar Apelido/Nome Fantasia do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxGender->setTitle(QApplication::translate("FormMngCustomer", "G\303\252nero", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxGender->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar o Genero do Cliente, Masculino/Feminino...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNatureCorp->setTitle(QApplication::translate("FormMngCustomer", "Nat. Juridica", Q_NULLPTR));
        CBoxNatureCorp->clear();
        CBoxNatureCorp->insertItems(0, QStringList()
         << QApplication::translate("FormMngCustomer", "F\303\255sica", Q_NULLPTR)
         << QApplication::translate("FormMngCustomer", "Juridica", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        CBoxNatureCorp->setToolTip(QApplication::translate("FormMngCustomer", "Informar se o Cliente de Natureza F\303\255sica ou Juridica...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOthers->setTitle(QApplication::translate("FormMngCustomer", "Outros", Q_NULLPTR));
        GBoxCustomerType->setTitle(QApplication::translate("FormMngCustomer", "Tipo de Cliente", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCustomerType->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar/Digitar o Ramo de Atividade do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxEmail->setTitle(QApplication::translate("FormMngCustomer", "E-mail", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditEmailContact->setToolTip(QApplication::translate("FormMngCustomer", "Informar o E-mail de Contato com o Cliente..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxTelPhone->setTitle(QApplication::translate("FormMngCustomer", "Telefone", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTelPhone->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Telefone de Contato com Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCelPhone->setTitle(QApplication::translate("FormMngCustomer", "Celular", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCelPhone->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Celular de Contato com o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNextelPhone->setTitle(QApplication::translate("FormMngCustomer", "Nextel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNextelPhone->setToolTip(QApplication::translate("FormMngCustomer", "Informar o N\303\272mero Nextel P/Contato com o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNotes->setTitle(QApplication::translate("FormMngCustomer", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNotes->setToolTip(QApplication::translate("FormMngCustomer", "Informar Alguma Informa\303\247\303\243o Importante Sobre o Cliente....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLastOrder->setTitle(QApplication::translate("FormMngCustomer", "Dt. \303\232ltima Compra", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DEditLastOrder->setToolTip(QApplication::translate("FormMngCustomer", "Exibe a data da Ultima Compra do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxIndication->setTitle(QApplication::translate("FormMngCustomer", "Qual o meio de indica\303\247\303\243o?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxIndication->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar o Meio de Indica\303\247\303\243o do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLastSeller->setTitle(QApplication::translate("FormMngCustomer", "Atendente", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLastSeller->setToolTip(QApplication::translate("FormMngCustomer", "Mostra o Nome do \303\232ltimo Atende para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonValidPrsonal->setToolTip(QApplication::translate("FormMngCustomer", "Validar campos e dados..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidPrsonal->setText(QApplication::translate("FormMngCustomer", "Validar", Q_NULLPTR));
        TabWidgetCustomer->setTabText(TabWidgetCustomer->indexOf(TabPersonal), QApplication::translate("FormMngCustomer", "Persoal", Q_NULLPTR));
        GBoxPlaceAddress->setTitle(QApplication::translate("FormMngCustomer", "Localidade", Q_NULLPTR));
        GBoxAddress->setTitle(QApplication::translate("FormMngCustomer", "Endere\303\247o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddress->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Endere\303\247\303\265 do Fornecedor...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNumber->setTitle(QApplication::translate("FormMngCustomer", "N\303\272mero", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNumber->setToolTip(QApplication::translate("FormMngCustomer", "Informar o N\303\272mero para o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxComplements->setTitle(QApplication::translate("FormMngCustomer", "Complemento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditComplements->setToolTip(QApplication::translate("FormMngCustomer", "Informar um Complemento para o Endere\303\247o, caso tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDistrict->setTitle(QApplication::translate("FormMngCustomer", "Bairro", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDistrict->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Bairro/Regi\303\243o onde fica o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCity->setTitle(QApplication::translate("FormMngCustomer", "Cidade", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCity->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar a Cidade ou Digitar, Caso n\303\243o tenha..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxState->setTitle(QApplication::translate("FormMngCustomer", "Uf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxState->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar a Sigla para o Estado do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxZipCode->setTitle(QApplication::translate("FormMngCustomer", "Cep", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditZipCode->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Cep da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOthersBilling->setTitle(QApplication::translate("FormMngCustomer", "Outros", Q_NULLPTR));
        GBoxPaymentSchd->setTitle(QApplication::translate("FormMngCustomer", "Dias P/Fat.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditPaymentSchd->setToolTip(QApplication::translate("FormMngCustomer", "Dias para fatura, exemplo: 30, 60, 90", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPaymentMthd->setTitle(QApplication::translate("FormMngCustomer", "Condi\303\247\303\243o PG", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxPaymentMthd->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar Condi\303\247\303\243o de Pagamento Desejada para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNotesBilling->setTitle(QApplication::translate("FormMngCustomer", "Nota:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNotesBilling->setToolTip(QApplication::translate("FormMngCustomer", "Informar alguma Observa\303\247\303\243o para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxSetToDelivery->setTitle(QApplication::translate("FormMngCustomer", "Seta em Entrega", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSetToDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Seta o Endere\303\247o de Faturamento para Entrega...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCustomersCreditStatus->setTitle(QApplication::translate("FormMngCustomer", "Situa\303\247\303\243o do Cliente", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCustomersCreditStatus->setToolTip(QApplication::translate("FormMngCustomer", "Mostra a Situa\303\247\303\243o Financeira do Cliente para Compras...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCustomerCreditLimit->setTitle(QApplication::translate("FormMngCustomer", "Limite de Cr\303\251dito", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCustomerCreditLimit->setToolTip(QApplication::translate("FormMngCustomer", "Mostra o Limite de Cr\303\251dito Aprovado para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBusinessArea->setTitle(QApplication::translate("FormMngCustomer", "Area de Atua\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxBusinessArea->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar a \303\201rea de Atua\303\247\303\243o do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBusinessName->setTitle(QApplication::translate("FormMngCustomer", "Nome da Empresa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditBusinessName->setToolTip(QApplication::translate("FormMngCustomer", "Informa o nome da Empresa do Cliente, para Refer\303\252ncias...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBusinessContact->setTitle(QApplication::translate("FormMngCustomer", "Contato", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditBusinessContact->setToolTip(QApplication::translate("FormMngCustomer", "Informar Contato de Refer\303\252cia na Empresa para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxBusinessContactPhone->setTitle(QApplication::translate("FormMngCustomer", "Telefones", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditBusinessContactPhone1->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Primeiro Telefone de Contato para Refer\303\252ncia para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditBusinessContactPhone2->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Segundo Telefone de Contato para Refer\303\252ncia do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonValidBilling->setToolTip(QApplication::translate("FormMngCustomer", "Validar campos e dados..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidBilling->setText(QApplication::translate("FormMngCustomer", "Validar", Q_NULLPTR));
        TabWidgetCustomer->setTabText(TabWidgetCustomer->indexOf(TabBilling), QApplication::translate("FormMngCustomer", "Faruramento", Q_NULLPTR));
        GBoxPlaceDelivery->setTitle(QApplication::translate("FormMngCustomer", "Localidade", Q_NULLPTR));
        GBoxAddressDelivery->setTitle(QApplication::translate("FormMngCustomer", "Endere\303\247o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddressDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Endere\303\247\303\265 de Entrega do Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNumberDelivery->setTitle(QApplication::translate("FormMngCustomer", "N\303\272mero", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNumberDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar o N\303\272mero para o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxComplementsDelivery->setTitle(QApplication::translate("FormMngCustomer", "Complemento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditComplementsDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar um Complemento para o Endere\303\247o, caso tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxDistrictDelivery->setTitle(QApplication::translate("FormMngCustomer", "Bairro", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDistrictDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Bairro/Regi\303\243o onde fica o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxCityDelivery->setTitle(QApplication::translate("FormMngCustomer", "Cidade", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCityDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar a Cidade ou Digitar, Caso n\303\243o tenha..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStateDelivery->setTitle(QApplication::translate("FormMngCustomer", "Uf", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxStateDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Selecionar o Estado de Entrega para o Cliente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxZipCodeDelivery->setTitle(QApplication::translate("FormMngCustomer", "Cep", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditZipCodeDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar o Cep da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxOthersDelivery->setTitle(QApplication::translate("FormMngCustomer", "Outros", Q_NULLPTR));
        GBoxNotesDelivery->setTitle(QApplication::translate("FormMngCustomer", "Nota:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNotesDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Informar alguma Observa\303\247\303\243o para Entrega...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonValidDelivery->setToolTip(QApplication::translate("FormMngCustomer", "Validar campos e dados..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidDelivery->setText(QApplication::translate("FormMngCustomer", "Validar", Q_NULLPTR));
        TabWidgetCustomer->setTabText(TabWidgetCustomer->indexOf(TabDelivery), QApplication::translate("FormMngCustomer", "Entrega", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("FormMngCustomer", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("FormMngCustomer", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("FormMngCustomer", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("FormMngCustomer", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("FormMngCustomer", "Salva os dados do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("FormMngCustomer", "Salvar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormMngCustomer: public Ui_FormMngCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCUSTOMER_H
