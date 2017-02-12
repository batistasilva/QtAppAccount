/********************************************************************************
** Form generated from reading UI file 'MngFormSubSegment.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMSUBSEGMENT_H
#define UI_MNGFORMSUBSEGMENT_H

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

class Ui_MngFormSubSegment
{
public:
    QGroupBox *GBoxViewSubSegments;
    QTableView *TableViewItemSubSegments;
    QToolButton *TButtonRemoveSubSegments;
    QToolButton *TButtonCleanSubSegments;
    QGroupBox *GBoxDataSubSegments;
    QLabel *LabelCodeSubSegments;
    QLabel *LabelLongNameSubSegments;
    QLabel *LabelShortNameSubSegments;
    QToolButton *TButtonSaveSubSegments;
    QComboBox *CBoxCodeSubSegments;
    QLineEdit *LEditSubSegmentsID;
    QLineEdit *LEditLongNameSubSegments;
    QLineEdit *LEditShortNameSubSegments;
    QGroupBox *GBoxStatusActiveSubSegments;
    QCheckBox *CheckBoxStatusActiveSubSegments;
    QToolButton *TButtonExitSubSegments;

    void setupUi(QDialog *MngFormSubSegment)
    {
        if (MngFormSubSegment->objectName().isEmpty())
            MngFormSubSegment->setObjectName(QStringLiteral("MngFormSubSegment"));
        MngFormSubSegment->resize(750, 600);
        MngFormSubSegment->setMinimumSize(QSize(750, 600));
        MngFormSubSegment->setMaximumSize(QSize(750, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/128x128/gnome-system-config-128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormSubSegment->setWindowIcon(icon);
        GBoxViewSubSegments = new QGroupBox(MngFormSubSegment);
        GBoxViewSubSegments->setObjectName(QStringLiteral("GBoxViewSubSegments"));
        GBoxViewSubSegments->setGeometry(QRect(10, 180, 731, 311));
        TableViewItemSubSegments = new QTableView(GBoxViewSubSegments);
        TableViewItemSubSegments->setObjectName(QStringLiteral("TableViewItemSubSegments"));
        TableViewItemSubSegments->setGeometry(QRect(20, 30, 591, 261));
        TButtonRemoveSubSegments = new QToolButton(GBoxViewSubSegments);
        TButtonRemoveSubSegments->setObjectName(QStringLiteral("TButtonRemoveSubSegments"));
        TButtonRemoveSubSegments->setGeometry(QRect(630, 160, 90, 80));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/48x48/delete-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveSubSegments->setIcon(icon1);
        TButtonRemoveSubSegments->setIconSize(QSize(48, 48));
        TButtonRemoveSubSegments->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonCleanSubSegments = new QToolButton(GBoxViewSubSegments);
        TButtonCleanSubSegments->setObjectName(QStringLiteral("TButtonCleanSubSegments"));
        TButtonCleanSubSegments->setGeometry(QRect(630, 80, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanSubSegments->setIcon(icon2);
        TButtonCleanSubSegments->setIconSize(QSize(48, 48));
        TButtonCleanSubSegments->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxDataSubSegments = new QGroupBox(MngFormSubSegment);
        GBoxDataSubSegments->setObjectName(QStringLiteral("GBoxDataSubSegments"));
        GBoxDataSubSegments->setGeometry(QRect(10, 10, 731, 161));
        GBoxDataSubSegments->setAcceptDrops(true);
        LabelCodeSubSegments = new QLabel(GBoxDataSubSegments);
        LabelCodeSubSegments->setObjectName(QStringLiteral("LabelCodeSubSegments"));
        LabelCodeSubSegments->setGeometry(QRect(0, 30, 120, 30));
        LabelCodeSubSegments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelLongNameSubSegments = new QLabel(GBoxDataSubSegments);
        LabelLongNameSubSegments->setObjectName(QStringLiteral("LabelLongNameSubSegments"));
        LabelLongNameSubSegments->setGeometry(QRect(0, 80, 120, 30));
        LabelLongNameSubSegments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LabelShortNameSubSegments = new QLabel(GBoxDataSubSegments);
        LabelShortNameSubSegments->setObjectName(QStringLiteral("LabelShortNameSubSegments"));
        LabelShortNameSubSegments->setGeometry(QRect(0, 120, 120, 30));
        LabelShortNameSubSegments->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TButtonSaveSubSegments = new QToolButton(GBoxDataSubSegments);
        TButtonSaveSubSegments->setObjectName(QStringLiteral("TButtonSaveSubSegments"));
        TButtonSaveSubSegments->setGeometry(QRect(630, 50, 90, 80));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/48x48/Filesave-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSaveSubSegments->setIcon(icon3);
        TButtonSaveSubSegments->setIconSize(QSize(48, 48));
        TButtonSaveSubSegments->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        CBoxCodeSubSegments = new QComboBox(GBoxDataSubSegments);
        CBoxCodeSubSegments->setObjectName(QStringLiteral("CBoxCodeSubSegments"));
        CBoxCodeSubSegments->setGeometry(QRect(120, 30, 100, 30));
        CBoxCodeSubSegments->setEditable(true);
        LEditSubSegmentsID = new QLineEdit(GBoxDataSubSegments);
        LEditSubSegmentsID->setObjectName(QStringLiteral("LEditSubSegmentsID"));
        LEditSubSegmentsID->setGeometry(QRect(230, 30, 50, 30));
        LEditLongNameSubSegments = new QLineEdit(GBoxDataSubSegments);
        LEditLongNameSubSegments->setObjectName(QStringLiteral("LEditLongNameSubSegments"));
        LEditLongNameSubSegments->setGeometry(QRect(120, 80, 400, 30));
        LEditShortNameSubSegments = new QLineEdit(GBoxDataSubSegments);
        LEditShortNameSubSegments->setObjectName(QStringLiteral("LEditShortNameSubSegments"));
        LEditShortNameSubSegments->setGeometry(QRect(120, 120, 200, 30));
        GBoxStatusActiveSubSegments = new QGroupBox(GBoxDataSubSegments);
        GBoxStatusActiveSubSegments->setObjectName(QStringLiteral("GBoxStatusActiveSubSegments"));
        GBoxStatusActiveSubSegments->setGeometry(QRect(350, 20, 171, 50));
        CheckBoxStatusActiveSubSegments = new QCheckBox(GBoxStatusActiveSubSegments);
        CheckBoxStatusActiveSubSegments->setObjectName(QStringLiteral("CheckBoxStatusActiveSubSegments"));
        CheckBoxStatusActiveSubSegments->setGeometry(QRect(50, 10, 100, 30));
        TButtonExitSubSegments = new QToolButton(MngFormSubSegment);
        TButtonExitSubSegments->setObjectName(QStringLiteral("TButtonExitSubSegments"));
        TButtonExitSubSegments->setGeometry(QRect(20, 510, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExitSubSegments->setIcon(icon4);
        TButtonExitSubSegments->setIconSize(QSize(48, 48));
        TButtonExitSubSegments->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormSubSegment);

        QMetaObject::connectSlotsByName(MngFormSubSegment);
    } // setupUi

    void retranslateUi(QDialog *MngFormSubSegment)
    {
        MngFormSubSegment->setWindowTitle(QApplication::translate("MngFormSubSegment", "Manuten\303\247\303\243o - Sub-Segmentos...", Q_NULLPTR));
        GBoxViewSubSegments->setTitle(QApplication::translate("MngFormSubSegment", "Sub-Segmentos:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TableViewItemSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Sub-Segmentos Atuais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Fazer Remo\303\247\303\243o do Item selecionado da Tabela...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveSubSegments->setText(QApplication::translate("MngFormSubSegment", "Remover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Permite Limpar os Campos e Atualizar a Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanSubSegments->setText(QApplication::translate("MngFormSubSegment", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GBoxDataSubSegments->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GBoxDataSubSegments->setTitle(QApplication::translate("MngFormSubSegment", "Dados", Q_NULLPTR));
        LabelCodeSubSegments->setText(QApplication::translate("MngFormSubSegment", "C\303\263digo:", Q_NULLPTR));
        LabelLongNameSubSegments->setText(QApplication::translate("MngFormSubSegment", "Descri\303\247\303\243o Longa:", Q_NULLPTR));
        LabelShortNameSubSegments->setText(QApplication::translate("MngFormSubSegment", "Descri\303\247\303\243o Curta:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSaveSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Salvar os dados para o Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSaveSubSegments->setText(QApplication::translate("MngFormSubSegment", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxCodeSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Informar um C\303\263digo para o Sub-Segmento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditLongNameSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Informar uma Nome/Descri\303\247\303\243o para o Sub-Segmento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditShortNameSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Informar o Nome Curto/Sigla/Apelido para o Sub-Segmento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxStatusActiveSubSegments->setTitle(QApplication::translate("MngFormSubSegment", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CheckBoxStatusActiveSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Permite Ativar/Desativar  o Sub-Segmento...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CheckBoxStatusActiveSubSegments->setText(QApplication::translate("MngFormSubSegment", "Ativo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExitSubSegments->setToolTip(QApplication::translate("MngFormSubSegment", "Permite Sair da Janela de Manuten\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExitSubSegments->setText(QApplication::translate("MngFormSubSegment", "Sair", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormSubSegment: public Ui_MngFormSubSegment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMSUBSEGMENT_H
