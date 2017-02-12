/********************************************************************************
** Form generated from reading UI file 'MngFormUsers.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMUSERS_H
#define UI_MNGFORMUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MngFormUsers
{
public:
    QTabWidget *TabWidgetUsers;
    QWidget *TabUser;
    QGroupBox *GBoxUserMobPhone;
    QLineEdit *LEditUserMobPhone;
    QCheckBox *ChKBoxActiveUsers;
    QGroupBox *GBoxInfoUser;
    QGroupBox *GBoxValidPass;
    QLineEdit *LEditValidPass;
    QGroupBox *GBoxShortName;
    QLineEdit *LEditShortName;
    QGroupBox *GBoxPassword;
    QLineEdit *LEditPassword;
    QGroupBox *GBoxUsername;
    QLineEdit *LEditUsername;
    QCheckBox *ChKBoxAllowOperatorCash;
    QCheckBox *ChKBoxAllowSales;
    QCheckBox *ChKBoxAllowPuchase;
    QCheckBox *ChKBoxAllowAddUser;
    QCheckBox *ChKBoxAllowSupervisorCash;
    QFrame *line;
    QGroupBox *GBoxEmployee;
    QLineEdit *LEditEmployee;
    QGroupBox *GBoxImagem;
    QLabel *QLabelImagem;
    QGroupBox *GBoxUserEmail;
    QLineEdit *LEditUserEmail;
    QGroupBox *GBoxUserTelephone;
    QLineEdit *LEditUserTelephone;
    QGroupBox *GBoxNote;
    QTextEdit *textEdit;
    QToolButton *TButtonCleanUserForm;
    QToolButton *TButtonValidate;
    QWidget *Privileges;
    QGroupBox *GBoxModules;
    QComboBox *CBoxModules;
    QTreeWidget *QXtreeWidgetAtualModules;
    QTreeWidget *QXtreeWidgetNewPrivileges;
    QToolButton *TButtonAddGrant;
    QToolButton *TButtonAddAllGrant;
    QToolButton *TButtonRemoveGrant;
    QToolButton *TButtonRemoveAllGrant;
    QWidget *TabRoles;
    QTreeWidget *QXtreeWidgetAtualRole;
    QTreeWidget *QXtreeWidgetNewRole;
    QToolButton *TButtonAddRole;
    QToolButton *TButtonRemoveRole;
    QWidget *TabLocal;
    QRadioButton *RButtonGrantAccessOnlyCurrentSites;
    QRadioButton *RButtonGrantAccessAllSites;
    QTreeWidget *QXtreeWidgetNewSites;
    QTreeWidget *QXtreeWidgetAtualSites;
    QToolButton *TButtonRemoveSite;
    QToolButton *TButtonAddSite;
    QToolButton *TButtonExit;
    QToolButton *TButtonSave;

    void setupUi(QDialog *MngFormUsers)
    {
        if (MngFormUsers->objectName().isEmpty())
            MngFormUsers->setObjectName(QStringLiteral("MngFormUsers"));
        MngFormUsers->resize(1029, 710);
        TabWidgetUsers = new QTabWidget(MngFormUsers);
        TabWidgetUsers->setObjectName(QStringLiteral("TabWidgetUsers"));
        TabWidgetUsers->setEnabled(true);
        TabWidgetUsers->setGeometry(QRect(0, 0, 1024, 768));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TabWidgetUsers->sizePolicy().hasHeightForWidth());
        TabWidgetUsers->setSizePolicy(sizePolicy);
        TabWidgetUsers->setMinimumSize(QSize(1024, 768));
        TabWidgetUsers->setBaseSize(QSize(1024, 768));
        TabUser = new QWidget();
        TabUser->setObjectName(QStringLiteral("TabUser"));
        GBoxUserMobPhone = new QGroupBox(TabUser);
        GBoxUserMobPhone->setObjectName(QStringLiteral("GBoxUserMobPhone"));
        GBoxUserMobPhone->setGeometry(QRect(420, 80, 170, 60));
        LEditUserMobPhone = new QLineEdit(GBoxUserMobPhone);
        LEditUserMobPhone->setObjectName(QStringLiteral("LEditUserMobPhone"));
        LEditUserMobPhone->setGeometry(QRect(10, 20, 150, 30));
        ChKBoxActiveUsers = new QCheckBox(TabUser);
        ChKBoxActiveUsers->setObjectName(QStringLiteral("ChKBoxActiveUsers"));
        ChKBoxActiveUsers->setGeometry(QRect(640, 70, 195, 30));
        GBoxInfoUser = new QGroupBox(TabUser);
        GBoxInfoUser->setObjectName(QStringLiteral("GBoxInfoUser"));
        GBoxInfoUser->setGeometry(QRect(0, 150, 991, 181));
        GBoxValidPass = new QGroupBox(GBoxInfoUser);
        GBoxValidPass->setObjectName(QStringLiteral("GBoxValidPass"));
        GBoxValidPass->setGeometry(QRect(250, 100, 200, 60));
        LEditValidPass = new QLineEdit(GBoxValidPass);
        LEditValidPass->setObjectName(QStringLiteral("LEditValidPass"));
        LEditValidPass->setGeometry(QRect(10, 20, 180, 30));
        GBoxShortName = new QGroupBox(GBoxInfoUser);
        GBoxShortName->setObjectName(QStringLiteral("GBoxShortName"));
        GBoxShortName->setGeometry(QRect(20, 30, 200, 60));
        LEditShortName = new QLineEdit(GBoxShortName);
        LEditShortName->setObjectName(QStringLiteral("LEditShortName"));
        LEditShortName->setGeometry(QRect(10, 20, 180, 30));
        GBoxPassword = new QGroupBox(GBoxInfoUser);
        GBoxPassword->setObjectName(QStringLiteral("GBoxPassword"));
        GBoxPassword->setGeometry(QRect(250, 30, 200, 60));
        LEditPassword = new QLineEdit(GBoxPassword);
        LEditPassword->setObjectName(QStringLiteral("LEditPassword"));
        LEditPassword->setGeometry(QRect(10, 20, 180, 30));
        GBoxUsername = new QGroupBox(GBoxInfoUser);
        GBoxUsername->setObjectName(QStringLiteral("GBoxUsername"));
        GBoxUsername->setGeometry(QRect(20, 100, 200, 60));
        LEditUsername = new QLineEdit(GBoxUsername);
        LEditUsername->setObjectName(QStringLiteral("LEditUsername"));
        LEditUsername->setGeometry(QRect(10, 20, 180, 30));
        ChKBoxAllowOperatorCash = new QCheckBox(GBoxInfoUser);
        ChKBoxAllowOperatorCash->setObjectName(QStringLiteral("ChKBoxAllowOperatorCash"));
        ChKBoxAllowOperatorCash->setGeometry(QRect(540, 100, 195, 30));
        ChKBoxAllowSales = new QCheckBox(GBoxInfoUser);
        ChKBoxAllowSales->setObjectName(QStringLiteral("ChKBoxAllowSales"));
        ChKBoxAllowSales->setGeometry(QRect(540, 20, 195, 30));
        ChKBoxAllowPuchase = new QCheckBox(GBoxInfoUser);
        ChKBoxAllowPuchase->setObjectName(QStringLiteral("ChKBoxAllowPuchase"));
        ChKBoxAllowPuchase->setGeometry(QRect(540, 60, 195, 30));
        ChKBoxAllowAddUser = new QCheckBox(GBoxInfoUser);
        ChKBoxAllowAddUser->setObjectName(QStringLiteral("ChKBoxAllowAddUser"));
        ChKBoxAllowAddUser->setGeometry(QRect(770, 60, 195, 30));
        ChKBoxAllowSupervisorCash = new QCheckBox(GBoxInfoUser);
        ChKBoxAllowSupervisorCash->setObjectName(QStringLiteral("ChKBoxAllowSupervisorCash"));
        ChKBoxAllowSupervisorCash->setGeometry(QRect(770, 20, 195, 30));
        line = new QFrame(GBoxInfoUser);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(480, 20, 21, 150));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        GBoxEmployee = new QGroupBox(TabUser);
        GBoxEmployee->setObjectName(QStringLiteral("GBoxEmployee"));
        GBoxEmployee->setGeometry(QRect(0, 10, 400, 60));
        LEditEmployee = new QLineEdit(GBoxEmployee);
        LEditEmployee->setObjectName(QStringLiteral("LEditEmployee"));
        LEditEmployee->setGeometry(QRect(10, 20, 380, 30));
        GBoxImagem = new QGroupBox(TabUser);
        GBoxImagem->setObjectName(QStringLiteral("GBoxImagem"));
        GBoxImagem->setGeometry(QRect(845, 0, 145, 145));
        QLabelImagem = new QLabel(GBoxImagem);
        QLabelImagem->setObjectName(QStringLiteral("QLabelImagem"));
        QLabelImagem->setGeometry(QRect(10, 20, 121, 121));
        QLabelImagem->setTextFormat(Qt::AutoText);
        QLabelImagem->setPixmap(QPixmap(QString::fromUtf8(":/images/PNG/128x128/user-128.png")));
        QLabelImagem->setScaledContents(false);
        QLabelImagem->setAlignment(Qt::AlignCenter);
        GBoxUserEmail = new QGroupBox(TabUser);
        GBoxUserEmail->setObjectName(QStringLiteral("GBoxUserEmail"));
        GBoxUserEmail->setGeometry(QRect(0, 80, 400, 60));
        LEditUserEmail = new QLineEdit(GBoxUserEmail);
        LEditUserEmail->setObjectName(QStringLiteral("LEditUserEmail"));
        LEditUserEmail->setGeometry(QRect(10, 20, 380, 30));
        GBoxUserTelephone = new QGroupBox(TabUser);
        GBoxUserTelephone->setObjectName(QStringLiteral("GBoxUserTelephone"));
        GBoxUserTelephone->setGeometry(QRect(420, 10, 170, 60));
        LEditUserTelephone = new QLineEdit(GBoxUserTelephone);
        LEditUserTelephone->setObjectName(QStringLiteral("LEditUserTelephone"));
        LEditUserTelephone->setGeometry(QRect(10, 20, 150, 30));
        GBoxNote = new QGroupBox(TabUser);
        GBoxNote->setObjectName(QStringLiteral("GBoxNote"));
        GBoxNote->setGeometry(QRect(0, 340, 991, 140));
        textEdit = new QTextEdit(GBoxNote);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 971, 110));
        TButtonCleanUserForm = new QToolButton(TabUser);
        TButtonCleanUserForm->setObjectName(QStringLiteral("TButtonCleanUserForm"));
        TButtonCleanUserForm->setGeometry(QRect(900, 490, 90, 80));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanUserForm->setIcon(icon);
        TButtonCleanUserForm->setIconSize(QSize(48, 48));
        TButtonCleanUserForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonValidate = new QToolButton(TabUser);
        TButtonValidate->setObjectName(QStringLiteral("TButtonValidate"));
        TButtonValidate->setGeometry(QRect(800, 490, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidate->setIcon(icon1);
        TButtonValidate->setIconSize(QSize(48, 48));
        TButtonValidate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TabWidgetUsers->addTab(TabUser, QString());
        Privileges = new QWidget();
        Privileges->setObjectName(QStringLiteral("Privileges"));
        GBoxModules = new QGroupBox(Privileges);
        GBoxModules->setObjectName(QStringLiteral("GBoxModules"));
        GBoxModules->setGeometry(QRect(10, 10, 211, 60));
        CBoxModules = new QComboBox(GBoxModules);
        CBoxModules->setObjectName(QStringLiteral("CBoxModules"));
        CBoxModules->setGeometry(QRect(10, 20, 191, 30));
        QXtreeWidgetAtualModules = new QTreeWidget(Privileges);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        QXtreeWidgetAtualModules->setHeaderItem(__qtreewidgetitem);
        QXtreeWidgetAtualModules->setObjectName(QStringLiteral("QXtreeWidgetAtualModules"));
        QXtreeWidgetAtualModules->setGeometry(QRect(10, 90, 400, 400));
        QXtreeWidgetNewPrivileges = new QTreeWidget(Privileges);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        QXtreeWidgetNewPrivileges->setHeaderItem(__qtreewidgetitem1);
        QXtreeWidgetNewPrivileges->setObjectName(QStringLiteral("QXtreeWidgetNewPrivileges"));
        QXtreeWidgetNewPrivileges->setGeometry(QRect(590, 90, 400, 400));
        TButtonAddGrant = new QToolButton(Privileges);
        TButtonAddGrant->setObjectName(QStringLiteral("TButtonAddGrant"));
        TButtonAddGrant->setGeometry(QRect(450, 130, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/1rightarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonAddGrant->setIcon(icon2);
        TButtonAddGrant->setIconSize(QSize(48, 48));
        TButtonAddAllGrant = new QToolButton(Privileges);
        TButtonAddAllGrant->setObjectName(QStringLiteral("TButtonAddAllGrant"));
        TButtonAddAllGrant->setGeometry(QRect(450, 220, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/2rightarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonAddAllGrant->setIcon(icon3);
        TButtonAddAllGrant->setIconSize(QSize(48, 48));
        TButtonRemoveGrant = new QToolButton(Privileges);
        TButtonRemoveGrant->setObjectName(QStringLiteral("TButtonRemoveGrant"));
        TButtonRemoveGrant->setGeometry(QRect(450, 310, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/1leftarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveGrant->setIcon(icon4);
        TButtonRemoveGrant->setIconSize(QSize(48, 48));
        TButtonRemoveAllGrant = new QToolButton(Privileges);
        TButtonRemoveAllGrant->setObjectName(QStringLiteral("TButtonRemoveAllGrant"));
        TButtonRemoveAllGrant->setGeometry(QRect(450, 400, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/2leftarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveAllGrant->setIcon(icon5);
        TButtonRemoveAllGrant->setIconSize(QSize(48, 48));
        TabWidgetUsers->addTab(Privileges, QString());
        TabRoles = new QWidget();
        TabRoles->setObjectName(QStringLiteral("TabRoles"));
        QXtreeWidgetAtualRole = new QTreeWidget(TabRoles);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QStringLiteral("1"));
        QXtreeWidgetAtualRole->setHeaderItem(__qtreewidgetitem2);
        QXtreeWidgetAtualRole->setObjectName(QStringLiteral("QXtreeWidgetAtualRole"));
        QXtreeWidgetAtualRole->setGeometry(QRect(10, 30, 400, 400));
        QXtreeWidgetNewRole = new QTreeWidget(TabRoles);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem();
        __qtreewidgetitem3->setText(0, QStringLiteral("1"));
        QXtreeWidgetNewRole->setHeaderItem(__qtreewidgetitem3);
        QXtreeWidgetNewRole->setObjectName(QStringLiteral("QXtreeWidgetNewRole"));
        QXtreeWidgetNewRole->setGeometry(QRect(580, 30, 400, 400));
        TButtonAddRole = new QToolButton(TabRoles);
        TButtonAddRole->setObjectName(QStringLiteral("TButtonAddRole"));
        TButtonAddRole->setGeometry(QRect(450, 140, 90, 80));
        TButtonAddRole->setIcon(icon2);
        TButtonAddRole->setIconSize(QSize(48, 48));
        TButtonRemoveRole = new QToolButton(TabRoles);
        TButtonRemoveRole->setObjectName(QStringLiteral("TButtonRemoveRole"));
        TButtonRemoveRole->setGeometry(QRect(450, 230, 90, 80));
        TButtonRemoveRole->setIcon(icon4);
        TButtonRemoveRole->setIconSize(QSize(48, 48));
        TabWidgetUsers->addTab(TabRoles, QString());
        TabLocal = new QWidget();
        TabLocal->setObjectName(QStringLiteral("TabLocal"));
        RButtonGrantAccessOnlyCurrentSites = new QRadioButton(TabLocal);
        RButtonGrantAccessOnlyCurrentSites->setObjectName(QStringLiteral("RButtonGrantAccessOnlyCurrentSites"));
        RButtonGrantAccessOnlyCurrentSites->setGeometry(QRect(230, 30, 341, 22));
        RButtonGrantAccessAllSites = new QRadioButton(TabLocal);
        RButtonGrantAccessAllSites->setObjectName(QStringLiteral("RButtonGrantAccessAllSites"));
        RButtonGrantAccessAllSites->setGeometry(QRect(10, 30, 211, 22));
        RButtonGrantAccessAllSites->setChecked(true);
        QXtreeWidgetNewSites = new QTreeWidget(TabLocal);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem();
        __qtreewidgetitem4->setText(0, QStringLiteral("1"));
        QXtreeWidgetNewSites->setHeaderItem(__qtreewidgetitem4);
        QXtreeWidgetNewSites->setObjectName(QStringLiteral("QXtreeWidgetNewSites"));
        QXtreeWidgetNewSites->setGeometry(QRect(580, 90, 400, 400));
        QXtreeWidgetAtualSites = new QTreeWidget(TabLocal);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem();
        __qtreewidgetitem5->setText(0, QStringLiteral("1"));
        QXtreeWidgetAtualSites->setHeaderItem(__qtreewidgetitem5);
        QXtreeWidgetAtualSites->setObjectName(QStringLiteral("QXtreeWidgetAtualSites"));
        QXtreeWidgetAtualSites->setGeometry(QRect(10, 90, 400, 400));
        TButtonRemoveSite = new QToolButton(TabLocal);
        TButtonRemoveSite->setObjectName(QStringLiteral("TButtonRemoveSite"));
        TButtonRemoveSite->setGeometry(QRect(450, 290, 90, 80));
        TButtonRemoveSite->setIcon(icon4);
        TButtonRemoveSite->setIconSize(QSize(48, 48));
        TButtonAddSite = new QToolButton(TabLocal);
        TButtonAddSite->setObjectName(QStringLiteral("TButtonAddSite"));
        TButtonAddSite->setGeometry(QRect(450, 200, 90, 80));
        TButtonAddSite->setIcon(icon2);
        TButtonAddSite->setIconSize(QSize(48, 48));
        TabWidgetUsers->addTab(TabLocal, QString());
        TButtonExit = new QToolButton(MngFormUsers);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(510, 620, 90, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon6);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(MngFormUsers);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setGeometry(QRect(410, 620, 90, 80));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon7);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormUsers);

        TabWidgetUsers->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MngFormUsers);
    } // setupUi

    void retranslateUi(QDialog *MngFormUsers)
    {
        MngFormUsers->setWindowTitle(QApplication::translate("MngFormUsers", "MngFormUsers", Q_NULLPTR));
        GBoxUserMobPhone->setTitle(QApplication::translate("MngFormUsers", "Celular", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUserMobPhone->setToolTip(QApplication::translate("MngFormUsers", "Exibe o Celular do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ChKBoxActiveUsers->setToolTip(QApplication::translate("MngFormUsers", "Marcar Para Ativar o Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxActiveUsers->setText(QApplication::translate("MngFormUsers", "Usu\303\241rio Ativo", Q_NULLPTR));
        GBoxInfoUser->setTitle(QApplication::translate("MngFormUsers", "Dados Usu\303\241rio", Q_NULLPTR));
        GBoxValidPass->setTitle(QApplication::translate("MngFormUsers", "Validar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditValidPass->setToolTip(QApplication::translate("MngFormUsers", "Repetir a Senha do Usu\303\241rio para ser Validada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxShortName->setTitle(QApplication::translate("MngFormUsers", "Nome Curto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortName->setToolTip(QApplication::translate("MngFormUsers", "Informar Nome Curto do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxPassword->setTitle(QApplication::translate("MngFormUsers", "Senha", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditPassword->setToolTip(QApplication::translate("MngFormUsers", "Informar Senha do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxUsername->setTitle(QApplication::translate("MngFormUsers", "Usu\303\241rio", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUsername->setToolTip(QApplication::translate("MngFormUsers", "Informar Nome do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ChKBoxAllowOperatorCash->setToolTip(QApplication::translate("MngFormUsers", "Habilitar para que o Usu\303\241rio possa ser Operador de Caixa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxAllowOperatorCash->setText(QApplication::translate("MngFormUsers", "Permite Operar Caixa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChKBoxAllowSales->setToolTip(QApplication::translate("MngFormUsers", "Habilitar para que o Usu\303\241rio possa Fazer Vendas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxAllowSales->setText(QApplication::translate("MngFormUsers", "Permite Fazer Vendas", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChKBoxAllowPuchase->setToolTip(QApplication::translate("MngFormUsers", "Habilitar para que o Usu\303\241rio possa Atuar como Comprador...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxAllowPuchase->setText(QApplication::translate("MngFormUsers", "Permite Fazer Compras", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChKBoxAllowAddUser->setToolTip(QApplication::translate("MngFormUsers", "Habilitar para que o Usu\303\241rio permita Criar Usu\303\241rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxAllowAddUser->setText(QApplication::translate("MngFormUsers", "Permite Criar Usu\303\241rios", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ChKBoxAllowSupervisorCash->setToolTip(QApplication::translate("MngFormUsers", "Habilitar para que o Usu\303\241rio possa Atuar como Fiscal de Caixa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ChKBoxAllowSupervisorCash->setText(QApplication::translate("MngFormUsers", "Permite Fiscalizar Caixa", Q_NULLPTR));
        GBoxEmployee->setTitle(QApplication::translate("MngFormUsers", "Funcion\303\241rio", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditEmployee->setToolTip(QApplication::translate("MngFormUsers", "Selecionar o Funcion\303\241rio para Cria\303\247\303\243o de Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxImagem->setTitle(QApplication::translate("MngFormUsers", "Foto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        QLabelImagem->setToolTip(QApplication::translate("MngFormUsers", "Exibe uma Foto do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QLabelImagem->setText(QString());
        GBoxUserEmail->setTitle(QApplication::translate("MngFormUsers", "E-mail", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUserEmail->setToolTip(QApplication::translate("MngFormUsers", "Exibe o E-mail do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxUserTelephone->setTitle(QApplication::translate("MngFormUsers", "Telefone", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditUserTelephone->setToolTip(QApplication::translate("MngFormUsers", "Exibe o Telefone do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNote->setTitle(QApplication::translate("MngFormUsers", "Nota", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("MngFormUsers", "Informar uma Nota para o Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonCleanUserForm->setToolTip(QApplication::translate("MngFormUsers", "Limpar Campos do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanUserForm->setText(QApplication::translate("MngFormUsers", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonValidate->setToolTip(QApplication::translate("MngFormUsers", "Valida os Campos Obrigat\303\263rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidate->setText(QApplication::translate("MngFormUsers", "Validar", Q_NULLPTR));
        TabWidgetUsers->setTabText(TabWidgetUsers->indexOf(TabUser), QApplication::translate("MngFormUsers", "Usu\303\241rio", Q_NULLPTR));
        GBoxModules->setTitle(QApplication::translate("MngFormUsers", "M\303\263dulos", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxModules->setToolTip(QApplication::translate("MngFormUsers", "Selecionar M\303\263dulos para Conceder Permiss\303\243o para Aplica\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetAtualModules->setToolTip(QApplication::translate("MngFormUsers", "Aplica\303\247\303\265es para Conceder Permiss\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        QXtreeWidgetAtualModules->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetNewPrivileges->setToolTip(QApplication::translate("MngFormUsers", "Aplica\303\247\303\265es para Revogar Permiss\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonAddGrant->setToolTip(QApplication::translate("MngFormUsers", "Concede Permiss\303\243o para Aplica\303\247\303\243o Selecionada para o Menu do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddGrant->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonAddAllGrant->setToolTip(QApplication::translate("MngFormUsers", "Concede Permiss\303\243o para Todas Aplica\303\247\303\265es Selecionadas para o Menu do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddAllGrant->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonRemoveGrant->setToolTip(QApplication::translate("MngFormUsers", "Revoga Permiss\303\243o para Aplica\303\247\303\243o Selecionada do Menu do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveGrant->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonRemoveAllGrant->setToolTip(QApplication::translate("MngFormUsers", "Revoga uma Permiss\303\243o para Todas Aplica\303\247\303\265es Selecionadas do Menu do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveAllGrant->setText(QString());
        TabWidgetUsers->setTabText(TabWidgetUsers->indexOf(Privileges), QApplication::translate("MngFormUsers", "Privil\303\251gios", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetAtualRole->setToolTip(QApplication::translate("MngFormUsers", "Selecionar o Grupo de Login para Adicionar o Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetNewRole->setToolTip(QApplication::translate("MngFormUsers", "Remove o Grupo de Login do Usu\303\241rio... ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonAddRole->setToolTip(QApplication::translate("MngFormUsers", "Concede Permiss\303\243o para Role de Login do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddRole->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonRemoveRole->setToolTip(QApplication::translate("MngFormUsers", "Revoga Permiss\303\243o para Role de Login do Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveRole->setText(QString());
        TabWidgetUsers->setTabText(TabWidgetUsers->indexOf(TabRoles), QApplication::translate("MngFormUsers", "Roles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonGrantAccessOnlyCurrentSites->setToolTip(QApplication::translate("MngFormUsers", "Selecionar para Permitir dar Acesso somente as Filiais/Centro de Distribui\303\247\303\243o Selecionados....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonGrantAccessOnlyCurrentSites->setText(QApplication::translate("MngFormUsers", "Dar Acesso Somente aos Locais Selecionados", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RButtonGrantAccessAllSites->setToolTip(QApplication::translate("MngFormUsers", "Selecionar para dar Acesso a Todas Filiais/Centros de Distribui\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RButtonGrantAccessAllSites->setText(QApplication::translate("MngFormUsers", "Dar Acesso a Todos Locais", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetNewSites->setToolTip(QApplication::translate("MngFormUsers", "Remover Local/Filial/Centro de Distribui\303\247\303\243o que o Usu\303\241rio tem Acesso...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetAtualSites->setToolTip(QApplication::translate("MngFormUsers", "Selecionar Local/Filial/Centro de Distribui\303\247\303\243o para dar Acesso ao Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveSite->setToolTip(QApplication::translate("MngFormUsers", "Revoga Permiss\303\243o para Local/Filial/Centro de Distribui\303\247\303\243o Selecionado para o Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveSite->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonAddSite->setToolTip(QApplication::translate("MngFormUsers", "Concede Permiss\303\243o para Local/Filial/Centro de Distribui\303\247\303\243o Selecionado para o Usu\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddSite->setText(QString());
        TabWidgetUsers->setTabText(TabWidgetUsers->indexOf(TabLocal), QApplication::translate("MngFormUsers", "Localidade", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormUsers", "Fechar a Janela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormUsers", "Sa\303\255da", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("MngFormUsers", "Salva os dados do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("MngFormUsers", "Salvar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormUsers: public Ui_MngFormUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMUSERS_H
