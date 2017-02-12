/********************************************************************************
** Form generated from reading UI file 'MngFormLocalWareHouse.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMLOCALWAREHOUSE_H
#define UI_MNGFORMLOCALWAREHOUSE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MngFormLocalWareHouse
{
public:
    QGroupBox *GBoxTableView;
    QTableView *TableViewSupplier;
    QTabWidget *TabWidgetSupplier;
    QWidget *TabMain;
    QGroupBox *GBoxLocalWhCode;
    QComboBox *CBoxLocalWhCode;
    QToolButton *TButtonSearchLocalWhCode;
    QLabel *LabelFullName;
    QLineEdit *LEditFullName;
    QLabel *LabelShortName;
    QLineEdit *LEditShortName;
    QLabel *LabelLocalWhCode;
    QLineEdit *LEditLocalWhID;
    QCheckBox *CHKBoxStatusLocalWh;
    QLabel *LabelLocalWhType;
    QComboBox *CBoxLocalWhType;
    QLabel *LabelMail;
    QLineEdit *LEditMail;
    QLabel *LabelTelPhone;
    QLineEdit *LEditTelPhone;
    QLineEdit *LEditFaxPhone;
    QLabel *LabelFaxPhone;
    QLineEdit *LEditNextelPhone;
    QLabel *LabelNextelPhone;
    QLineEdit *LEditContact;
    QLabel *LabelContact;
    QLineEdit *LEditCpfCnpj;
    QLabel *LabelCpfCnpj;
    QLabel *LabelCardRgStateReg;
    QLineEdit *LEditCardRgStateReg;
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
    QWidget *TabGeneral;
    QComboBox *CBoxTaxZone;
    QLabel *LabelTaxZone;
    QLabel *LabelNotes;
    QTextEdit *TEditNotes;
    QToolButton *TButtonValidate;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSave;
    QToolButton *TButtonExit;

    void setupUi(QDialog *MngFormLocalWareHouse)
    {
        if (MngFormLocalWareHouse->objectName().isEmpty())
            MngFormLocalWareHouse->setObjectName(QStringLiteral("MngFormLocalWareHouse"));
        MngFormLocalWareHouse->resize(850, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormLocalWareHouse->setWindowIcon(icon);
        GBoxTableView = new QGroupBox(MngFormLocalWareHouse);
        GBoxTableView->setObjectName(QStringLiteral("GBoxTableView"));
        GBoxTableView->setGeometry(QRect(5, 370, 840, 221));
        TableViewSupplier = new QTableView(GBoxTableView);
        TableViewSupplier->setObjectName(QStringLiteral("TableViewSupplier"));
        TableViewSupplier->setGeometry(QRect(10, 20, 821, 191));
        TabWidgetSupplier = new QTabWidget(MngFormLocalWareHouse);
        TabWidgetSupplier->setObjectName(QStringLiteral("TabWidgetSupplier"));
        TabWidgetSupplier->setGeometry(QRect(5, 5, 840, 280));
        TabMain = new QWidget();
        TabMain->setObjectName(QStringLiteral("TabMain"));
        GBoxLocalWhCode = new QGroupBox(TabMain);
        GBoxLocalWhCode->setObjectName(QStringLiteral("GBoxLocalWhCode"));
        GBoxLocalWhCode->setGeometry(QRect(100, 10, 190, 40));
        CBoxLocalWhCode = new QComboBox(GBoxLocalWhCode);
        CBoxLocalWhCode->setObjectName(QStringLiteral("CBoxLocalWhCode"));
        CBoxLocalWhCode->setGeometry(QRect(5, 5, 150, 30));
        CBoxLocalWhCode->setEditable(true);
        TButtonSearchLocalWhCode = new QToolButton(GBoxLocalWhCode);
        TButtonSearchLocalWhCode->setObjectName(QStringLiteral("TButtonSearchLocalWhCode"));
        TButtonSearchLocalWhCode->setEnabled(false);
        TButtonSearchLocalWhCode->setGeometry(QRect(155, 5, 30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/120x120/120px-Searchtool.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSearchLocalWhCode->setIcon(icon1);
        LabelFullName = new QLabel(TabMain);
        LabelFullName->setObjectName(QStringLiteral("LabelFullName"));
        LabelFullName->setGeometry(QRect(0, 60, 100, 30));
        LabelFullName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditFullName = new QLineEdit(TabMain);
        LEditFullName->setObjectName(QStringLiteral("LEditFullName"));
        LEditFullName->setGeometry(QRect(100, 60, 580, 30));
        LEditFullName->setAlignment(Qt::AlignCenter);
        LabelShortName = new QLabel(TabMain);
        LabelShortName->setObjectName(QStringLiteral("LabelShortName"));
        LabelShortName->setGeometry(QRect(0, 90, 100, 30));
        LabelShortName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditShortName = new QLineEdit(TabMain);
        LEditShortName->setObjectName(QStringLiteral("LEditShortName"));
        LEditShortName->setGeometry(QRect(100, 90, 245, 30));
        LEditShortName->setAlignment(Qt::AlignCenter);
        LabelLocalWhCode = new QLabel(TabMain);
        LabelLocalWhCode->setObjectName(QStringLiteral("LabelLocalWhCode"));
        LabelLocalWhCode->setGeometry(QRect(0, 15, 100, 30));
        LabelLocalWhCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditLocalWhID = new QLineEdit(TabMain);
        LEditLocalWhID->setObjectName(QStringLiteral("LEditLocalWhID"));
        LEditLocalWhID->setEnabled(false);
        LEditLocalWhID->setGeometry(QRect(300, 10, 50, 30));
        LEditLocalWhID->setFocusPolicy(Qt::NoFocus);
        LEditLocalWhID->setAlignment(Qt::AlignCenter);
        LEditLocalWhID->setReadOnly(true);
        CHKBoxStatusLocalWh = new QCheckBox(TabMain);
        CHKBoxStatusLocalWh->setObjectName(QStringLiteral("CHKBoxStatusLocalWh"));
        CHKBoxStatusLocalWh->setGeometry(QRect(740, 10, 81, 41));
        LabelLocalWhType = new QLabel(TabMain);
        LabelLocalWhType->setObjectName(QStringLiteral("LabelLocalWhType"));
        LabelLocalWhType->setGeometry(QRect(380, 15, 50, 30));
        LabelLocalWhType->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxLocalWhType = new QComboBox(TabMain);
        CBoxLocalWhType->setObjectName(QStringLiteral("CBoxLocalWhType"));
        CBoxLocalWhType->setGeometry(QRect(430, 15, 250, 30));
        CBoxLocalWhType->setEditable(true);
        LabelMail = new QLabel(TabMain);
        LabelMail->setObjectName(QStringLiteral("LabelMail"));
        LabelMail->setGeometry(QRect(380, 90, 50, 30));
        LabelMail->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditMail = new QLineEdit(TabMain);
        LEditMail->setObjectName(QStringLiteral("LEditMail"));
        LEditMail->setGeometry(QRect(430, 90, 250, 30));
        LEditMail->setAlignment(Qt::AlignCenter);
        LabelTelPhone = new QLabel(TabMain);
        LabelTelPhone->setObjectName(QStringLiteral("LabelTelPhone"));
        LabelTelPhone->setGeometry(QRect(0, 160, 100, 30));
        LabelTelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditTelPhone = new QLineEdit(TabMain);
        LEditTelPhone->setObjectName(QStringLiteral("LEditTelPhone"));
        LEditTelPhone->setGeometry(QRect(100, 160, 141, 30));
        LEditTelPhone->setAlignment(Qt::AlignCenter);
        LEditFaxPhone = new QLineEdit(TabMain);
        LEditFaxPhone->setObjectName(QStringLiteral("LEditFaxPhone"));
        LEditFaxPhone->setGeometry(QRect(430, 160, 141, 30));
        LEditFaxPhone->setAlignment(Qt::AlignCenter);
        LabelFaxPhone = new QLabel(TabMain);
        LabelFaxPhone->setObjectName(QStringLiteral("LabelFaxPhone"));
        LabelFaxPhone->setGeometry(QRect(290, 160, 140, 30));
        LabelFaxPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditNextelPhone = new QLineEdit(TabMain);
        LEditNextelPhone->setObjectName(QStringLiteral("LEditNextelPhone"));
        LEditNextelPhone->setGeometry(QRect(100, 190, 141, 30));
        LEditNextelPhone->setAlignment(Qt::AlignCenter);
        LabelNextelPhone = new QLabel(TabMain);
        LabelNextelPhone->setObjectName(QStringLiteral("LabelNextelPhone"));
        LabelNextelPhone->setGeometry(QRect(0, 190, 100, 30));
        LabelNextelPhone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditContact = new QLineEdit(TabMain);
        LEditContact->setObjectName(QStringLiteral("LEditContact"));
        LEditContact->setGeometry(QRect(430, 190, 250, 30));
        LEditContact->setAlignment(Qt::AlignCenter);
        LabelContact = new QLabel(TabMain);
        LabelContact->setObjectName(QStringLiteral("LabelContact"));
        LabelContact->setGeometry(QRect(290, 190, 140, 30));
        LabelContact->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCpfCnpj = new QLineEdit(TabMain);
        LEditCpfCnpj->setObjectName(QStringLiteral("LEditCpfCnpj"));
        LEditCpfCnpj->setGeometry(QRect(100, 120, 220, 31));
        LEditCpfCnpj->setAlignment(Qt::AlignCenter);
        LabelCpfCnpj = new QLabel(TabMain);
        LabelCpfCnpj->setObjectName(QStringLiteral("LabelCpfCnpj"));
        LabelCpfCnpj->setGeometry(QRect(0, 120, 100, 30));
        LabelCpfCnpj->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelCardRgStateReg = new QLabel(TabMain);
        LabelCardRgStateReg->setObjectName(QStringLiteral("LabelCardRgStateReg"));
        LabelCardRgStateReg->setGeometry(QRect(330, 120, 100, 30));
        LabelCardRgStateReg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditCardRgStateReg = new QLineEdit(TabMain);
        LEditCardRgStateReg->setObjectName(QStringLiteral("LEditCardRgStateReg"));
        LEditCardRgStateReg->setGeometry(QRect(430, 120, 220, 30));
        LEditCardRgStateReg->setLayoutDirection(Qt::LeftToRight);
        LEditCardRgStateReg->setAlignment(Qt::AlignCenter);
        TabWidgetSupplier->addTab(TabMain, QString());
        TabBilling = new QWidget();
        TabBilling->setObjectName(QStringLiteral("TabBilling"));
        LabelZipCode = new QLabel(TabBilling);
        LabelZipCode->setObjectName(QStringLiteral("LabelZipCode"));
        LabelZipCode->setGeometry(QRect(277, 20, 60, 30));
        LabelZipCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditZipCode = new QLineEdit(TabBilling);
        LEditZipCode->setObjectName(QStringLiteral("LEditZipCode"));
        LEditZipCode->setGeometry(QRect(337, 20, 113, 30));
        LEditZipCode->setAlignment(Qt::AlignCenter);
        LabelStreetAddress = new QLabel(TabBilling);
        LabelStreetAddress->setObjectName(QStringLiteral("LabelStreetAddress"));
        LabelStreetAddress->setGeometry(QRect(0, 70, 80, 30));
        LabelStreetAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditAddress = new QLineEdit(TabBilling);
        LEditAddress->setObjectName(QStringLiteral("LEditAddress"));
        LEditAddress->setGeometry(QRect(80, 70, 400, 30));
        LEditAddress->setAlignment(Qt::AlignCenter);
        LabelStreetAddressNumber = new QLabel(TabBilling);
        LabelStreetAddressNumber->setObjectName(QStringLiteral("LabelStreetAddressNumber"));
        LabelStreetAddressNumber->setGeometry(QRect(500, 70, 70, 30));
        LabelStreetAddressNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditNumber = new QLineEdit(TabBilling);
        LEditNumber->setObjectName(QStringLiteral("LEditNumber"));
        LEditNumber->setGeometry(QRect(570, 70, 131, 30));
        LEditNumber->setAlignment(Qt::AlignCenter);
        LabelStreetAddressComplements = new QLabel(TabBilling);
        LabelStreetAddressComplements->setObjectName(QStringLiteral("LabelStreetAddressComplements"));
        LabelStreetAddressComplements->setGeometry(QRect(0, 120, 80, 30));
        LabelStreetAddressComplements->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditComplements = new QLineEdit(TabBilling);
        LEditComplements->setObjectName(QStringLiteral("LEditComplements"));
        LEditComplements->setGeometry(QRect(80, 120, 400, 30));
        LEditComplements->setAlignment(Qt::AlignCenter);
        LabelAddressDistrict = new QLabel(TabBilling);
        LabelAddressDistrict->setObjectName(QStringLiteral("LabelAddressDistrict"));
        LabelAddressDistrict->setGeometry(QRect(500, 120, 70, 30));
        LabelAddressDistrict->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditDistrict = new QLineEdit(TabBilling);
        LEditDistrict->setObjectName(QStringLiteral("LEditDistrict"));
        LEditDistrict->setGeometry(QRect(570, 120, 250, 30));
        LEditDistrict->setAlignment(Qt::AlignCenter);
        LabelAddressCity = new QLabel(TabBilling);
        LabelAddressCity->setObjectName(QStringLiteral("LabelAddressCity"));
        LabelAddressCity->setGeometry(QRect(500, 20, 70, 30));
        LabelAddressCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSearchZipCode = new QToolButton(TabBilling);
        TButtonSearchZipCode->setObjectName(QStringLiteral("TButtonSearchZipCode"));
        TButtonSearchZipCode->setEnabled(false);
        TButtonSearchZipCode->setGeometry(QRect(450, 20, 30, 30));
        TButtonSearchZipCode->setIcon(icon1);
        LEditAddressID = new QLineEdit(TabBilling);
        LEditAddressID->setObjectName(QStringLiteral("LEditAddressID"));
        LEditAddressID->setEnabled(false);
        LEditAddressID->setGeometry(QRect(160, 20, 50, 30));
        LEditAddressID->setFocusPolicy(Qt::NoFocus);
        LEditAddressID->setAlignment(Qt::AlignCenter);
        LEditAddressID->setReadOnly(true);
        CBoxState = new QComboBox(TabBilling);
        CBoxState->setObjectName(QStringLiteral("CBoxState"));
        CBoxState->setGeometry(QRect(80, 20, 70, 30));
        LabelState = new QLabel(TabBilling);
        LabelState->setObjectName(QStringLiteral("LabelState"));
        LabelState->setGeometry(QRect(0, 20, 80, 30));
        LabelState->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxCity = new QComboBox(TabBilling);
        CBoxCity->setObjectName(QStringLiteral("CBoxCity"));
        CBoxCity->setGeometry(QRect(570, 20, 250, 30));
        TabWidgetSupplier->addTab(TabBilling, QString());
        TabGeneral = new QWidget();
        TabGeneral->setObjectName(QStringLiteral("TabGeneral"));
        CBoxTaxZone = new QComboBox(TabGeneral);
        CBoxTaxZone->setObjectName(QStringLiteral("CBoxTaxZone"));
        CBoxTaxZone->setGeometry(QRect(150, 10, 150, 30));
        CBoxTaxZone->setEditable(true);
        LabelTaxZone = new QLabel(TabGeneral);
        LabelTaxZone->setObjectName(QStringLiteral("LabelTaxZone"));
        LabelTaxZone->setGeometry(QRect(0, 10, 150, 30));
        LabelTaxZone->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelNotes = new QLabel(TabGeneral);
        LabelNotes->setObjectName(QStringLiteral("LabelNotes"));
        LabelNotes->setGeometry(QRect(0, 70, 140, 30));
        LabelNotes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TEditNotes = new QTextEdit(TabGeneral);
        TEditNotes->setObjectName(QStringLiteral("TEditNotes"));
        TEditNotes->setGeometry(QRect(150, 50, 421, 171));
        TabWidgetSupplier->addTab(TabGeneral, QString());
        TButtonValidate = new QToolButton(MngFormLocalWareHouse);
        TButtonValidate->setObjectName(QStringLiteral("TButtonValidate"));
        TButtonValidate->setEnabled(false);
        TButtonValidate->setGeometry(QRect(485, 295, 90, 75));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidate->setIcon(icon2);
        TButtonValidate->setIconSize(QSize(48, 48));
        TButtonValidate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(MngFormLocalWareHouse);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setEnabled(false);
        TButtonCleanForm->setGeometry(QRect(665, 295, 90, 75));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/128x128/edit-clear-left-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon3);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(MngFormLocalWareHouse);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setEnabled(false);
        TButtonSave->setGeometry(QRect(575, 295, 90, 75));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon4);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExit = new QToolButton(MngFormLocalWareHouse);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(755, 295, 90, 75));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon5);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormLocalWareHouse);

        TabWidgetSupplier->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MngFormLocalWareHouse);
    } // setupUi

    void retranslateUi(QDialog *MngFormLocalWareHouse)
    {
        MngFormLocalWareHouse->setWindowTitle(QApplication::translate("MngFormLocalWareHouse", "Manuten\303\247\303\243o de Locais...", Q_NULLPTR));
        GBoxTableView->setTitle(QApplication::translate("MngFormLocalWareHouse", "Locais/Armaz\303\251ns/Dep\303\263sitos:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewSupplier->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Selecione um Fornecedor para Exibir/Alterar seus dados...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxLocalWhCode->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxLocalWhCode->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o C\303\263digo do Local para Pesquisar..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonSearchLocalWhCode->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchLocalWhCode->setText(QApplication::translate("MngFormLocalWareHouse", "...", Q_NULLPTR));
        LabelFullName->setText(QApplication::translate("MngFormLocalWareHouse", "Descri\303\247\303\243o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullName->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar a Raz\303\243o Social/Descri\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelShortName->setText(QApplication::translate("MngFormLocalWareHouse", "Desc. Curta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortName->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar Apelido/Nome Fantasia...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelLocalWhCode->setText(QApplication::translate("MngFormLocalWareHouse", "C\303\263digo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditLocalWhID->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CHKBoxStatusLocalWh->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Marcar como Ativo/Inativo...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CHKBoxStatusLocalWh->setText(QApplication::translate("MngFormLocalWareHouse", "Ativo", Q_NULLPTR));
        LabelLocalWhType->setText(QApplication::translate("MngFormLocalWareHouse", "Tipo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxLocalWhType->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Selecionar o Tipo de Local..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelMail->setText(QApplication::translate("MngFormLocalWareHouse", "E-mail:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditMail->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar um Endere\303\247o de E-mail...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTelPhone->setText(QApplication::translate("MngFormLocalWareHouse", "Telefone:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditTelPhone->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Telefone...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditTelPhone->setInputMask(QApplication::translate("MngFormLocalWareHouse", "(99)(9999-9999); ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFaxPhone->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o N\303\272mero do Fax...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditFaxPhone->setInputMask(QApplication::translate("MngFormLocalWareHouse", "(99)9(9999-9999); ", Q_NULLPTR));
        LabelFaxPhone->setText(QApplication::translate("MngFormLocalWareHouse", "Fax:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNextelPhone->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o N\303\272mero Nextel P/Contato..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditNextelPhone->setInputMask(QApplication::translate("MngFormLocalWareHouse", "(99)(9999-9999); ", Q_NULLPTR));
        LEditNextelPhone->setText(QApplication::translate("MngFormLocalWareHouse", "()(-)", Q_NULLPTR));
        LabelNextelPhone->setText(QApplication::translate("MngFormLocalWareHouse", "Nextel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditContact->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Nome do Gerente/Respons\303\241vel...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelContact->setText(QApplication::translate("MngFormLocalWareHouse", "Respons\303\241vel:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCpfCnpj->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Cpf/Cnpj...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelCpfCnpj->setText(QApplication::translate("MngFormLocalWareHouse", "Cpf/Cnpj:", Q_NULLPTR));
        LabelCardRgStateReg->setText(QApplication::translate("MngFormLocalWareHouse", "RG/I.E.:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCardRgStateReg->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o R.G./Inscri\303\247\303\243o Estadual... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabMain), QApplication::translate("MngFormLocalWareHouse", "Principal", Q_NULLPTR));
        LabelZipCode->setText(QApplication::translate("MngFormLocalWareHouse", "Cep:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditZipCode->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Cep da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditZipCode->setInputMask(QApplication::translate("MngFormLocalWareHouse", "99999-999; ", Q_NULLPTR));
        LabelStreetAddress->setText(QApplication::translate("MngFormLocalWareHouse", "Endere\303\247o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddress->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStreetAddressNumber->setText(QApplication::translate("MngFormLocalWareHouse", "N\303\272mero:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditNumber->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o N\303\272mero para o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelStreetAddressComplements->setText(QApplication::translate("MngFormLocalWareHouse", "Comp.:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditComplements->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar um Complemento para o Endere\303\247o, caso tenha...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddressDistrict->setText(QApplication::translate("MngFormLocalWareHouse", "Bairro:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDistrict->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar o Bairro/Regi\303\243o onde fica o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddressCity->setText(QApplication::translate("MngFormLocalWareHouse", "Cidade:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearchZipCode->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Pesquisar o C\303\263digo Selecionado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearchZipCode->setText(QApplication::translate("MngFormLocalWareHouse", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddressID->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Exibe a Data de Cadastro... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CBoxState->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Selecionar o Estado da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelState->setText(QApplication::translate("MngFormLocalWareHouse", "Uf:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCity->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar a Cidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabBilling), QApplication::translate("MngFormLocalWareHouse", "Endere\303\247o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxTaxZone->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Selecionar o Regime Tribut\303\241rio..", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelTaxZone->setText(QApplication::translate("MngFormLocalWareHouse", "Regime Tribut\303\241rio:", Q_NULLPTR));
        LabelNotes->setText(QApplication::translate("MngFormLocalWareHouse", "Nota:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNotes->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Informar uma Observa\303\247\303\243o importante...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabWidgetSupplier->setTabText(TabWidgetSupplier->indexOf(TabGeneral), QApplication::translate("MngFormLocalWareHouse", "Detalhes Gerais", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonValidate->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Valida os dados Obrigat\303\263rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidate->setText(QApplication::translate("MngFormLocalWareHouse", "Validar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormLocalWareHouse", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Salva os dados do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("MngFormLocalWareHouse", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormLocalWareHouse", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormLocalWareHouse", "Sa\303\255da", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormLocalWareHouse: public Ui_MngFormLocalWareHouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMLOCALWAREHOUSE_H
