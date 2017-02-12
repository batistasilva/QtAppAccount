/********************************************************************************
** Form generated from reading UI file 'MngFormSearchPostalCode.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSEARCHPOSTALCODE_H
#define UI_MNGFORMSEARCHPOSTALCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_SearchPostalCode
{
public:
    QGroupBox *GBoxDataPostalCode;
    QLabel *LabelState;
    QComboBox *CBoxState;
    QLabel *LabelCity;
    QLabel *LabelTypeAddress;
    QComboBox *CBoxTypeAddress;
    QLabel *LabelAddress;
    QLineEdit *LEditAddress;
    QLineEdit *LEditAddressNumber;
    QLabel *LabelAddressNumber;
    QLineEdit *LEditPostalCode;
    QLabel *LabelPostalCode;
    QToolButton *TButtonConfirm;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSearch;
    QLineEdit *LEditCity;
    QLabel *LabelDistrict;
    QLineEdit *LEditDistrict;
    QLineEdit *LEditComplements;
    QLabel *LabelComplements;
    QGroupBox *GBoxLocale;
    QTableView *TableViewLocale;
    QToolButton *TButtonExit;
    QLabel *LabelImg;

    void setupUi(QDialog *SearchPostalCode)
    {
        if (SearchPostalCode->objectName().isEmpty())
            SearchPostalCode->setObjectName(QStringLiteral("SearchPostalCode"));
        SearchPostalCode->resize(780, 700);
        SearchPostalCode->setMinimumSize(QSize(780, 700));
        SearchPostalCode->setMaximumSize(QSize(780, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        SearchPostalCode->setWindowIcon(icon);
        GBoxDataPostalCode = new QGroupBox(SearchPostalCode);
        GBoxDataPostalCode->setObjectName(QStringLiteral("GBoxDataPostalCode"));
        GBoxDataPostalCode->setGeometry(QRect(10, 10, 761, 241));
        LabelState = new QLabel(GBoxDataPostalCode);
        LabelState->setObjectName(QStringLiteral("LabelState"));
        LabelState->setGeometry(QRect(0, 20, 70, 30));
        LabelState->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxState = new QComboBox(GBoxDataPostalCode);
        CBoxState->setObjectName(QStringLiteral("CBoxState"));
        CBoxState->setGeometry(QRect(70, 20, 100, 30));
        LabelCity = new QLabel(GBoxDataPostalCode);
        LabelCity->setObjectName(QStringLiteral("LabelCity"));
        LabelCity->setGeometry(QRect(210, 20, 60, 30));
        LabelCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelTypeAddress = new QLabel(GBoxDataPostalCode);
        LabelTypeAddress->setObjectName(QStringLiteral("LabelTypeAddress"));
        LabelTypeAddress->setGeometry(QRect(560, 20, 70, 30));
        LabelTypeAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        CBoxTypeAddress = new QComboBox(GBoxDataPostalCode);
        CBoxTypeAddress->setObjectName(QStringLiteral("CBoxTypeAddress"));
        CBoxTypeAddress->setGeometry(QRect(630, 20, 100, 30));
        LabelAddress = new QLabel(GBoxDataPostalCode);
        LabelAddress->setObjectName(QStringLiteral("LabelAddress"));
        LabelAddress->setGeometry(QRect(0, 60, 70, 30));
        LabelAddress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditAddress = new QLineEdit(GBoxDataPostalCode);
        LEditAddress->setObjectName(QStringLiteral("LEditAddress"));
        LEditAddress->setGeometry(QRect(70, 60, 490, 30));
        LEditAddress->setAlignment(Qt::AlignCenter);
        LEditAddressNumber = new QLineEdit(GBoxDataPostalCode);
        LEditAddressNumber->setObjectName(QStringLiteral("LEditAddressNumber"));
        LEditAddressNumber->setGeometry(QRect(630, 60, 100, 30));
        LEditAddressNumber->setInputMethodHints(Qt::ImhDigitsOnly);
        LEditAddressNumber->setAlignment(Qt::AlignCenter);
        LabelAddressNumber = new QLabel(GBoxDataPostalCode);
        LabelAddressNumber->setObjectName(QStringLiteral("LabelAddressNumber"));
        LabelAddressNumber->setGeometry(QRect(560, 60, 70, 30));
        LabelAddressNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditPostalCode = new QLineEdit(GBoxDataPostalCode);
        LEditPostalCode->setObjectName(QStringLiteral("LEditPostalCode"));
        LEditPostalCode->setGeometry(QRect(70, 140, 100, 30));
        LEditPostalCode->setInputMethodHints(Qt::ImhNone);
        LEditPostalCode->setAlignment(Qt::AlignCenter);
        LEditPostalCode->setReadOnly(false);
        LabelPostalCode = new QLabel(GBoxDataPostalCode);
        LabelPostalCode->setObjectName(QStringLiteral("LabelPostalCode"));
        LabelPostalCode->setGeometry(QRect(0, 140, 70, 30));
        LabelPostalCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonConfirm = new QToolButton(GBoxDataPostalCode);
        TButtonConfirm->setObjectName(QStringLiteral("TButtonConfirm"));
        TButtonConfirm->setEnabled(false);
        TButtonConfirm->setGeometry(QRect(540, 150, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/128x128/agt_action_success-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonConfirm->setIcon(icon1);
        TButtonConfirm->setIconSize(QSize(48, 48));
        TButtonConfirm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanForm = new QToolButton(GBoxDataPostalCode);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setEnabled(false);
        TButtonCleanForm->setGeometry(QRect(640, 150, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon2);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSearch = new QToolButton(GBoxDataPostalCode);
        TButtonSearch->setObjectName(QStringLiteral("TButtonSearch"));
        TButtonSearch->setEnabled(false);
        TButtonSearch->setGeometry(QRect(440, 150, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/128x128/search-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSearch->setIcon(icon3);
        TButtonSearch->setIconSize(QSize(48, 48));
        TButtonSearch->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LEditCity = new QLineEdit(GBoxDataPostalCode);
        LEditCity->setObjectName(QStringLiteral("LEditCity"));
        LEditCity->setGeometry(QRect(270, 20, 290, 30));
        LEditCity->setAlignment(Qt::AlignCenter);
        LabelDistrict = new QLabel(GBoxDataPostalCode);
        LabelDistrict->setObjectName(QStringLiteral("LabelDistrict"));
        LabelDistrict->setGeometry(QRect(420, 100, 60, 30));
        LabelDistrict->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditDistrict = new QLineEdit(GBoxDataPostalCode);
        LEditDistrict->setObjectName(QStringLiteral("LEditDistrict"));
        LEditDistrict->setGeometry(QRect(480, 100, 250, 30));
        LEditDistrict->setAlignment(Qt::AlignCenter);
        LEditComplements = new QLineEdit(GBoxDataPostalCode);
        LEditComplements->setObjectName(QStringLiteral("LEditComplements"));
        LEditComplements->setGeometry(QRect(70, 100, 340, 30));
        LEditComplements->setAlignment(Qt::AlignCenter);
        LabelComplements = new QLabel(GBoxDataPostalCode);
        LabelComplements->setObjectName(QStringLiteral("LabelComplements"));
        LabelComplements->setGeometry(QRect(0, 100, 70, 30));
        LabelComplements->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GBoxLocale = new QGroupBox(SearchPostalCode);
        GBoxLocale->setObjectName(QStringLiteral("GBoxLocale"));
        GBoxLocale->setGeometry(QRect(10, 260, 761, 341));
        TableViewLocale = new QTableView(GBoxLocale);
        TableViewLocale->setObjectName(QStringLiteral("TableViewLocale"));
        TableViewLocale->setGeometry(QRect(10, 20, 741, 311));
        TButtonExit = new QToolButton(SearchPostalCode);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(10, 610, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon4);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LabelImg = new QLabel(SearchPostalCode);
        LabelImg->setObjectName(QStringLiteral("LabelImg"));
        LabelImg->setGeometry(QRect(570, 630, 201, 61));
        LabelImg->setPixmap(QPixmap(QString::fromUtf8(":/images/PNG/logo-194x42.png")));

        retranslateUi(SearchPostalCode);

        QMetaObject::connectSlotsByName(SearchPostalCode);
    } // setupUi

    void retranslateUi(QDialog *SearchPostalCode)
    {
        SearchPostalCode->setWindowTitle(QApplication::translate("SearchPostalCode", "Pesquisa de Cep Por Endere\303\247o...", Q_NULLPTR));
        GBoxDataPostalCode->setTitle(QApplication::translate("SearchPostalCode", "Dados", Q_NULLPTR));
        LabelState->setText(QApplication::translate("SearchPostalCode", "Uf:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxState->setToolTip(QApplication::translate("SearchPostalCode", "Selecionar o Estado da Localidade...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelCity->setText(QApplication::translate("SearchPostalCode", "Cidade:", Q_NULLPTR));
        LabelTypeAddress->setText(QApplication::translate("SearchPostalCode", "Tipo:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxTypeAddress->setToolTip(QApplication::translate("SearchPostalCode", "Selecionar o Tipo de Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddress->setText(QApplication::translate("SearchPostalCode", "Endere\303\247o:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddress->setToolTip(QApplication::translate("SearchPostalCode", "Informar o Nome do Local/Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditAddressNumber->setToolTip(QApplication::translate("SearchPostalCode", "Informar o N\303\272mero para uma Pesquisa Apurada...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelAddressNumber->setText(QApplication::translate("SearchPostalCode", "N\303\272mero:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditPostalCode->setToolTip(QApplication::translate("SearchPostalCode", "Informar o Cep/Cep localizado para o Endere\303\247o....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditPostalCode->setInputMask(QString());
        LabelPostalCode->setText(QApplication::translate("SearchPostalCode", "Cep:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonConfirm->setToolTip(QApplication::translate("SearchPostalCode", "Confirmar o uso do Cep Localizado...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonConfirm->setText(QApplication::translate("SearchPostalCode", "Confirmar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("SearchPostalCode", "Limpar os Campos do Formul\303\241rio e Tabela de Visualiza\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("SearchPostalCode", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSearch->setToolTip(QApplication::translate("SearchPostalCode", "Pesquisar o Cep Para os dados Informados....", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSearch->setText(QApplication::translate("SearchPostalCode", "Pesquisar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditCity->setToolTip(QApplication::translate("SearchPostalCode", "Informar a Cidade do Endere\303\247o de Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LabelDistrict->setText(QApplication::translate("SearchPostalCode", "Bairro:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditDistrict->setToolTip(QApplication::translate("SearchPostalCode", "Informar o Bairro/Localidade do Endere\303\247o de Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditComplements->setToolTip(QApplication::translate("SearchPostalCode", "Informar o Complemento do Endere\303\247o de Pesquisa...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditComplements->setText(QString());
        LabelComplements->setText(QApplication::translate("SearchPostalCode", "Comp..:", Q_NULLPTR));
        GBoxLocale->setTitle(QApplication::translate("SearchPostalCode", "Localidades:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewLocale->setToolTip(QApplication::translate("SearchPostalCode", "Exibe os Logradouros encontrados para o Endere\303\247o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("SearchPostalCode", "Sair da Janela de Pesquisa de Cep...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("SearchPostalCode", "Sair", Q_NULLPTR));
        LabelImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SearchPostalCode: public Ui_SearchPostalCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSEARCHPOSTALCODE_H
