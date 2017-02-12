/********************************************************************************
** Form generated from reading UI file 'MngFormConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMCONFIG_H
#define UI_MNGFORMCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FormConfig
{
public:
    QToolButton *TButtonConfigDbSave;
    QGroupBox *GBoxConfigDb;
    QLabel *ConfigLBDbHost;
    QLabel *ConfigLBDbPort;
    QLineEdit *ConfigLEDbPort;
    QLabel *ConfigLBDbName;
    QLineEdit *ConfigLEDbName;
    QLabel *ConfigLBDbUser;
    QLineEdit *ConfigLEDbUser;
    QLabel *ConfigLBDbPass;
    QLineEdit *ConfigLEDbPass;
    QToolButton *TButtonTestConn;
    QLabel *ConfigLBDbTestResult;
    QLineEdit *ConfigLEDbTestResult;
    QLineEdit *ConfigLEDbHost;
    QToolButton *TButtonConfigDbExit;

    void setupUi(QDialog *FormConfig)
    {
        if (FormConfig->objectName().isEmpty())
            FormConfig->setObjectName(QStringLiteral("FormConfig"));
        FormConfig->setEnabled(true);
        FormConfig->resize(629, 557);
        TButtonConfigDbSave = new QToolButton(FormConfig);
        TButtonConfigDbSave->setObjectName(QStringLiteral("TButtonConfigDbSave"));
        TButtonConfigDbSave->setGeometry(QRect(180, 370, 100, 75));
        TButtonConfigDbSave->setMinimumSize(QSize(100, 75));
        TButtonConfigDbSave->setMaximumSize(QSize(100, 75));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        TButtonConfigDbSave->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/Filesaveas-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonConfigDbSave->setIcon(icon);
        TButtonConfigDbSave->setIconSize(QSize(48, 48));
        TButtonConfigDbSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxConfigDb = new QGroupBox(FormConfig);
        GBoxConfigDb->setObjectName(QStringLiteral("GBoxConfigDb"));
        GBoxConfigDb->setGeometry(QRect(50, 30, 481, 331));
        GBoxConfigDb->setFont(font);
        ConfigLBDbHost = new QLabel(GBoxConfigDb);
        ConfigLBDbHost->setObjectName(QStringLiteral("ConfigLBDbHost"));
        ConfigLBDbHost->setGeometry(QRect(10, 80, 170, 30));
        ConfigLBDbHost->setMinimumSize(QSize(170, 30));
        ConfigLBDbHost->setMaximumSize(QSize(170, 30));
        ConfigLBDbHost->setFont(font);
        ConfigLBDbHost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLBDbPort = new QLabel(GBoxConfigDb);
        ConfigLBDbPort->setObjectName(QStringLiteral("ConfigLBDbPort"));
        ConfigLBDbPort->setGeometry(QRect(10, 120, 170, 30));
        ConfigLBDbPort->setMinimumSize(QSize(170, 30));
        ConfigLBDbPort->setMaximumSize(QSize(170, 30));
        ConfigLBDbPort->setFont(font);
        ConfigLBDbPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLEDbPort = new QLineEdit(GBoxConfigDb);
        ConfigLEDbPort->setObjectName(QStringLiteral("ConfigLEDbPort"));
        ConfigLEDbPort->setGeometry(QRect(190, 120, 100, 30));
        ConfigLEDbPort->setMinimumSize(QSize(100, 30));
        ConfigLEDbPort->setMaximumSize(QSize(100, 30));
        ConfigLEDbPort->setFont(font);
        ConfigLEDbPort->setAlignment(Qt::AlignCenter);
        ConfigLBDbName = new QLabel(GBoxConfigDb);
        ConfigLBDbName->setObjectName(QStringLiteral("ConfigLBDbName"));
        ConfigLBDbName->setGeometry(QRect(10, 40, 170, 30));
        ConfigLBDbName->setMinimumSize(QSize(170, 30));
        ConfigLBDbName->setMaximumSize(QSize(170, 30));
        ConfigLBDbName->setFont(font);
        ConfigLBDbName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLEDbName = new QLineEdit(GBoxConfigDb);
        ConfigLEDbName->setObjectName(QStringLiteral("ConfigLEDbName"));
        ConfigLEDbName->setGeometry(QRect(190, 40, 180, 30));
        ConfigLEDbName->setMinimumSize(QSize(180, 30));
        ConfigLEDbName->setMaximumSize(QSize(180, 30));
        ConfigLEDbName->setFont(font);
        ConfigLEDbName->setAlignment(Qt::AlignCenter);
        ConfigLBDbUser = new QLabel(GBoxConfigDb);
        ConfigLBDbUser->setObjectName(QStringLiteral("ConfigLBDbUser"));
        ConfigLBDbUser->setGeometry(QRect(10, 160, 170, 30));
        ConfigLBDbUser->setMinimumSize(QSize(170, 30));
        ConfigLBDbUser->setMaximumSize(QSize(170, 30));
        ConfigLBDbUser->setFont(font);
        ConfigLBDbUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLEDbUser = new QLineEdit(GBoxConfigDb);
        ConfigLEDbUser->setObjectName(QStringLiteral("ConfigLEDbUser"));
        ConfigLEDbUser->setGeometry(QRect(190, 160, 180, 30));
        ConfigLEDbUser->setMinimumSize(QSize(180, 30));
        ConfigLEDbUser->setMaximumSize(QSize(180, 30));
        ConfigLEDbUser->setFont(font);
        ConfigLEDbUser->setAlignment(Qt::AlignCenter);
        ConfigLBDbPass = new QLabel(GBoxConfigDb);
        ConfigLBDbPass->setObjectName(QStringLiteral("ConfigLBDbPass"));
        ConfigLBDbPass->setGeometry(QRect(10, 200, 170, 30));
        ConfigLBDbPass->setMinimumSize(QSize(170, 30));
        ConfigLBDbPass->setFont(font);
        ConfigLBDbPass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLEDbPass = new QLineEdit(GBoxConfigDb);
        ConfigLEDbPass->setObjectName(QStringLiteral("ConfigLEDbPass"));
        ConfigLEDbPass->setGeometry(QRect(190, 200, 180, 30));
        ConfigLEDbPass->setMinimumSize(QSize(180, 30));
        ConfigLEDbPass->setMaximumSize(QSize(180, 30));
        ConfigLEDbPass->setFont(font);
        ConfigLEDbPass->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        ConfigLEDbPass->setAlignment(Qt::AlignCenter);
        TButtonTestConn = new QToolButton(GBoxConfigDb);
        TButtonTestConn->setObjectName(QStringLiteral("TButtonTestConn"));
        TButtonTestConn->setGeometry(QRect(390, 200, 81, 61));
        TButtonTestConn->setFont(font);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/24x24/reload-24x24.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonTestConn->setIcon(icon1);
        TButtonTestConn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ConfigLBDbTestResult = new QLabel(GBoxConfigDb);
        ConfigLBDbTestResult->setObjectName(QStringLiteral("ConfigLBDbTestResult"));
        ConfigLBDbTestResult->setGeometry(QRect(0, 280, 100, 30));
        ConfigLBDbTestResult->setMinimumSize(QSize(100, 30));
        ConfigLBDbTestResult->setMaximumSize(QSize(100, 30));
        ConfigLBDbTestResult->setFont(font);
        ConfigLBDbTestResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConfigLEDbTestResult = new QLineEdit(GBoxConfigDb);
        ConfigLEDbTestResult->setObjectName(QStringLiteral("ConfigLEDbTestResult"));
        ConfigLEDbTestResult->setGeometry(QRect(100, 280, 370, 30));
        ConfigLEDbTestResult->setMinimumSize(QSize(270, 30));
        ConfigLEDbTestResult->setMaximumSize(QSize(370, 30));
        ConfigLEDbTestResult->setFont(font);
        ConfigLEDbTestResult->setFocusPolicy(Qt::NoFocus);
        ConfigLEDbTestResult->setAlignment(Qt::AlignCenter);
        ConfigLEDbTestResult->setReadOnly(true);
        ConfigLEDbHost = new QLineEdit(GBoxConfigDb);
        ConfigLEDbHost->setObjectName(QStringLiteral("ConfigLEDbHost"));
        ConfigLEDbHost->setGeometry(QRect(190, 80, 180, 30));
        ConfigLEDbHost->setMinimumSize(QSize(180, 30));
        ConfigLEDbHost->setMaximumSize(QSize(180, 30));
        ConfigLEDbHost->setFont(font);
        ConfigLEDbHost->setAlignment(Qt::AlignCenter);
        ConfigLEDbName->raise();
        ConfigLBDbHost->raise();
        ConfigLBDbPort->raise();
        ConfigLEDbPort->raise();
        ConfigLBDbName->raise();
        ConfigLBDbUser->raise();
        ConfigLEDbUser->raise();
        ConfigLBDbPass->raise();
        ConfigLEDbPass->raise();
        TButtonTestConn->raise();
        ConfigLBDbTestResult->raise();
        ConfigLEDbTestResult->raise();
        ConfigLEDbHost->raise();
        TButtonConfigDbExit = new QToolButton(FormConfig);
        TButtonConfigDbExit->setObjectName(QStringLiteral("TButtonConfigDbExit"));
        TButtonConfigDbExit->setGeometry(QRect(300, 370, 100, 75));
        TButtonConfigDbExit->setMinimumSize(QSize(100, 75));
        TButtonConfigDbExit->setMaximumSize(QSize(100, 75));
        TButtonConfigDbExit->setFont(font);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonConfigDbExit->setIcon(icon2);
        TButtonConfigDbExit->setIconSize(QSize(48, 48));
        TButtonConfigDbExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(FormConfig);

        QMetaObject::connectSlotsByName(FormConfig);
    } // setupUi

    void retranslateUi(QDialog *FormConfig)
    {
        FormConfig->setWindowTitle(QApplication::translate("FormConfig", "Dialog", Q_NULLPTR));
        TButtonConfigDbSave->setText(QApplication::translate("FormConfig", "Salvar", Q_NULLPTR));
        GBoxConfigDb->setTitle(QApplication::translate("FormConfig", "Configura\303\247\303\243o de Acesso a Banco", Q_NULLPTR));
        ConfigLBDbHost->setText(QApplication::translate("FormConfig", "Endere\303\247o do Banco:", Q_NULLPTR));
        ConfigLBDbPort->setText(QApplication::translate("FormConfig", "Porta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConfigLEDbPort->setToolTip(QApplication::translate("FormConfig", "Informe a porta de conex\303\243o com o banco!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConfigLBDbName->setText(QApplication::translate("FormConfig", "Nome do Banco:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConfigLEDbName->setToolTip(QApplication::translate("FormConfig", "Informe o nome do banco!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConfigLEDbName->setInputMask(QString());
        ConfigLBDbUser->setText(QApplication::translate("FormConfig", "Usu\303\241rio:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConfigLEDbUser->setToolTip(QApplication::translate("FormConfig", "Informe o usu\303\241rio de conex\303\243o com o banco!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ConfigLBDbPass->setText(QApplication::translate("FormConfig", "Senha:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConfigLEDbPass->setToolTip(QApplication::translate("FormConfig", "Informe a senha de conex\303\243o com banco!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonTestConn->setText(QApplication::translate("FormConfig", "Testar", Q_NULLPTR));
        ConfigLBDbTestResult->setText(QApplication::translate("FormConfig", "Reultado:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ConfigLEDbTestResult->setToolTip(QApplication::translate("FormConfig", "Mostra mensagens de erro ou sucesso!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ConfigLEDbHost->setToolTip(QApplication::translate("FormConfig", "Informe o endere\303\247o de conex\303\243o com o banco!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonConfigDbExit->setText(QApplication::translate("FormConfig", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormConfig: public Ui_FormConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMCONFIG_H
