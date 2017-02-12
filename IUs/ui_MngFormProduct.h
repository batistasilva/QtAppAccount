/********************************************************************************
** Form generated from reading UI file 'MngFormProduct.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNGFORMPRODUCT_H
#define UI_MNGFORMPRODUCT_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MngFormProduct
{
public:
    QTabWidget *TabProduct;
    QWidget *DataOfProduct;
    QGroupBox *GBSearchProduct;
    QGroupBox *GBoxProduct;
    QLineEdit *LEditProduct;
    QToolButton *ToolButtonProductSearch;
    QGroupBox *GBStatusProduct;
    QCheckBox *CKBoxStatusProduct;
    QGroupBox *GBoxProductPic;
    QToolButton *TButtonProductImg;
    QToolButton *TButtonValidate;
    QLabel *LBProductWeight;
    QLineEdit *LEditProductWeight;
    QLabel *LBProductPrice;
    QLineEdit *LEditProductPrice;
    QLabel *LBProductStock;
    QLineEdit *LEditProductStock;
    QLabel *LBProductWidthAndHeight;
    QLineEdit *LEditProductHeight;
    QLineEdit *LEditProductWidth;
    QLabel *LBDelimitProduct1;
    QLabel *LBProductBarCode;
    QLineEdit *LEditProductBarCode;
    QLabel *LBFullProductName;
    QLineEdit *LEditFullProductName;
    QLabel *LBShortProductName;
    QLineEdit *LEditShortProductName;
    QLabel *LBProductFactory;
    QLabel *LBProductSupplier;
    QLabel *LBProductCategory;
    QLabel *LBProductSubCategory;
    QLabel *LBProductLine;
    QLabel *LBProductUnitOfMeasure;
    QGroupBox *GBoxFactory;
    QComboBox *CBoxProductFactory;
    QToolButton *TButtonToolFactory;
    QGroupBox *GBoxSupplier;
    QComboBox *CBoxProductSupplier;
    QToolButton *TButtonToolSupplier;
    QGroupBox *GBoxCategory;
    QComboBox *CBoxProductCategory;
    QToolButton *TButtonToolCategory;
    QGroupBox *GBoxSubCategory;
    QComboBox *CBoxProductSubCategory;
    QToolButton *TButtonToolSubCategory;
    QGroupBox *GBoxProductLine;
    QComboBox *CBoxProductLine;
    QToolButton *TButtonToolProductLine;
    QGroupBox *GBoxProductUnitOfMeasure;
    QComboBox *CBoxProductUnitOfMeasure;
    QToolButton *TButtonToolProductUnitOfMeasure;
    QWidget *TabCodMercosul;
    QGroupBox *GBoxDataDocuments;
    QGroupBox *GBoxProductNCMCode;
    QLineEdit *LEditProductNCMCode;
    QGroupBox *GBoxNoteDocs;
    QTextEdit *TEditNoteDocs;
    QGroupBox *GBoxProductEXTIPICode;
    QLineEdit *LEditProductEXTIPICode;
    QGroupBox *GBoxProductNCMGender;
    QLineEdit *LEditProductNCMGender;
    QWidget *TabLocalSite;
    QGroupBox *GBoxSite;
    QComboBox *CBoxSite;
    QToolButton *TButtonToolSite;
    QLabel *LBDelimitProduct1_2;
    QLabel *LBDelimitProduct1_3;
    QLabel *LBAddressAisle;
    QLineEdit *LEditAddressRack;
    QLabel *LBAddressLocation;
    QLineEdit *LEditAddressBin;
    QLineEdit *LEditAddressAisle;
    QLineEdit *LEditAddressLocation;
    QToolButton *TButtonRemoveAllSites;
    QToolButton *TButtonAddSite;
    QToolButton *TButtonAddAllSites;
    QToolButton *TButtonRemoveSite;
    QTreeWidget *QXtreeWidgetNewAtualSites;
    QTreeWidget *QXtreeWidgetAtualSites;
    QWidget *TabPlanner;
    QGroupBox *GBoxProductStockMax;
    QLineEdit *LEditProductStockMax;
    QGroupBox *GBoxProductTimOfDelivery;
    QLineEdit *LEditProductTimeOfDelivery;
    QGroupBox *GBoxProductStockMin;
    QLineEdit *LEditProductStockMin;
    QGroupBox *GBoxProductAverageDaily;
    QLineEdit *LEditProductAverageDaily;
    QWidget *TabSetup;
    QToolButton *TButtonValidateSetup;
    QGroupBox *GBoxProductICMSGroup;
    QComboBox *CBoxProductICMSGroup;
    QToolButton *TButtonToolProductICMSGroup;
    QGroupBox *GBoxProductIPIGroup;
    QComboBox *CBoxProductIPIGroup;
    QToolButton *TButtonToolProductIPIGroup;
    QGroupBox *GBoxProductPurchaserPrice;
    QLineEdit *LEditProductPurchaserPrice;
    QGroupBox *GBoxProductPriceFloor;
    QLineEdit *LEditProductPriceFloor;
    QGroupBox *GBoxProductPriceSale;
    QLineEdit *LEditProductPriceSale;
    QGroupBox *GBoxProductMarkupSingle;
    QLineEdit *LEditProductMarkupSingle;
    QGroupBox *GBoxProductMarkupRough;
    QLineEdit *LEditProductMarkupRough;
    QGroupBox *GBoxProductPremiumCat;
    QComboBox *CBoxProductIPremiumCat;
    QToolButton *TButtonToolProductPremiumCat;
    QGroupBox *GBoxProductPriceList;
    QComboBox *CBoxProductPriceList;
    QToolButton *TButtonToolProductPriceList;
    QCheckBox *CKBoxProductEnableDecimal;
    QCheckBox *CKBoxProductEnableLabel;
    QCheckBox *CKBoxProductGenerateInvoice;
    QToolButton *TButtonCleanForm;
    QToolButton *TButtonSave;
    QToolButton *TButtonExit;

    void setupUi(QDialog *MngFormProduct)
    {
        if (MngFormProduct->objectName().isEmpty())
            MngFormProduct->setObjectName(QStringLiteral("MngFormProduct"));
        MngFormProduct->resize(1010, 710);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/PNG/48x48/Project_open-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        MngFormProduct->setWindowIcon(icon);
        TabProduct = new QTabWidget(MngFormProduct);
        TabProduct->setObjectName(QStringLiteral("TabProduct"));
        TabProduct->setGeometry(QRect(0, 10, 1001, 591));
        DataOfProduct = new QWidget();
        DataOfProduct->setObjectName(QStringLiteral("DataOfProduct"));
        GBSearchProduct = new QGroupBox(DataOfProduct);
        GBSearchProduct->setObjectName(QStringLiteral("GBSearchProduct"));
        GBSearchProduct->setGeometry(QRect(0, 10, 991, 141));
        GBoxProduct = new QGroupBox(GBSearchProduct);
        GBoxProduct->setObjectName(QStringLiteral("GBoxProduct"));
        GBoxProduct->setGeometry(QRect(20, 30, 621, 80));
        LEditProduct = new QLineEdit(GBoxProduct);
        LEditProduct->setObjectName(QStringLiteral("LEditProduct"));
        LEditProduct->setGeometry(QRect(10, 30, 451, 30));
        LEditProduct->setAlignment(Qt::AlignCenter);
        ToolButtonProductSearch = new QToolButton(GBoxProduct);
        ToolButtonProductSearch->setObjectName(QStringLiteral("ToolButtonProductSearch"));
        ToolButtonProductSearch->setGeometry(QRect(470, 30, 101, 31));
        GBStatusProduct = new QGroupBox(GBSearchProduct);
        GBStatusProduct->setObjectName(QStringLiteral("GBStatusProduct"));
        GBStatusProduct->setGeometry(QRect(670, 30, 121, 80));
        CKBoxStatusProduct = new QCheckBox(GBStatusProduct);
        CKBoxStatusProduct->setObjectName(QStringLiteral("CKBoxStatusProduct"));
        CKBoxStatusProduct->setGeometry(QRect(30, 30, 71, 30));
        GBoxProductPic = new QGroupBox(GBSearchProduct);
        GBoxProductPic->setObjectName(QStringLiteral("GBoxProductPic"));
        GBoxProductPic->setGeometry(QRect(830, 0, 141, 131));
        TButtonProductImg = new QToolButton(GBoxProductPic);
        TButtonProductImg->setObjectName(QStringLiteral("TButtonProductImg"));
        TButtonProductImg->setGeometry(QRect(10, 20, 121, 101));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/PNG/128x128/system-software-update.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonProductImg->setIcon(icon1);
        TButtonProductImg->setIconSize(QSize(128, 128));
        TButtonValidate = new QToolButton(DataOfProduct);
        TButtonValidate->setObjectName(QStringLiteral("TButtonValidate"));
        TButtonValidate->setGeometry(QRect(890, 460, 90, 80));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/PNG/120x120/120px-Gtk-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonValidate->setIcon(icon2);
        TButtonValidate->setIconSize(QSize(48, 48));
        TButtonValidate->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        LBProductWeight = new QLabel(DataOfProduct);
        LBProductWeight->setObjectName(QStringLiteral("LBProductWeight"));
        LBProductWeight->setGeometry(QRect(0, 390, 135, 30));
        LBProductWeight->setLayoutDirection(Qt::LeftToRight);
        LBProductWeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductWeight = new QLineEdit(DataOfProduct);
        LEditProductWeight->setObjectName(QStringLiteral("LEditProductWeight"));
        LEditProductWeight->setGeometry(QRect(140, 390, 170, 30));
        LEditProductWeight->setAlignment(Qt::AlignCenter);
        LBProductPrice = new QLabel(DataOfProduct);
        LBProductPrice->setObjectName(QStringLiteral("LBProductPrice"));
        LBProductPrice->setGeometry(QRect(0, 430, 135, 30));
        LBProductPrice->setLayoutDirection(Qt::LeftToRight);
        LBProductPrice->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductPrice = new QLineEdit(DataOfProduct);
        LEditProductPrice->setObjectName(QStringLiteral("LEditProductPrice"));
        LEditProductPrice->setGeometry(QRect(140, 430, 170, 30));
        LEditProductPrice->setAlignment(Qt::AlignCenter);
        LBProductStock = new QLabel(DataOfProduct);
        LBProductStock->setObjectName(QStringLiteral("LBProductStock"));
        LBProductStock->setGeometry(QRect(0, 470, 135, 30));
        LBProductStock->setLayoutDirection(Qt::LeftToRight);
        LBProductStock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductStock = new QLineEdit(DataOfProduct);
        LEditProductStock->setObjectName(QStringLiteral("LEditProductStock"));
        LEditProductStock->setGeometry(QRect(140, 470, 170, 30));
        LEditProductStock->setAlignment(Qt::AlignCenter);
        LBProductWidthAndHeight = new QLabel(DataOfProduct);
        LBProductWidthAndHeight->setObjectName(QStringLiteral("LBProductWidthAndHeight"));
        LBProductWidthAndHeight->setGeometry(QRect(0, 510, 135, 30));
        LBProductWidthAndHeight->setLayoutDirection(Qt::LeftToRight);
        LBProductWidthAndHeight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductHeight = new QLineEdit(DataOfProduct);
        LEditProductHeight->setObjectName(QStringLiteral("LEditProductHeight"));
        LEditProductHeight->setGeometry(QRect(240, 510, 70, 30));
        LEditProductHeight->setAlignment(Qt::AlignCenter);
        LEditProductWidth = new QLineEdit(DataOfProduct);
        LEditProductWidth->setObjectName(QStringLiteral("LEditProductWidth"));
        LEditProductWidth->setGeometry(QRect(140, 510, 70, 30));
        LEditProductWidth->setAlignment(Qt::AlignCenter);
        LBDelimitProduct1 = new QLabel(DataOfProduct);
        LBDelimitProduct1->setObjectName(QStringLiteral("LBDelimitProduct1"));
        LBDelimitProduct1->setGeometry(QRect(220, 510, 10, 30));
        LBDelimitProduct1->setAlignment(Qt::AlignCenter);
        LBProductBarCode = new QLabel(DataOfProduct);
        LBProductBarCode->setObjectName(QStringLiteral("LBProductBarCode"));
        LBProductBarCode->setGeometry(QRect(0, 270, 135, 30));
        LBProductBarCode->setLayoutDirection(Qt::LeftToRight);
        LBProductBarCode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditProductBarCode = new QLineEdit(DataOfProduct);
        LEditProductBarCode->setObjectName(QStringLiteral("LEditProductBarCode"));
        LEditProductBarCode->setGeometry(QRect(140, 270, 201, 30));
        LEditProductBarCode->setAlignment(Qt::AlignCenter);
        LBFullProductName = new QLabel(DataOfProduct);
        LBFullProductName->setObjectName(QStringLiteral("LBFullProductName"));
        LBFullProductName->setGeometry(QRect(0, 310, 135, 30));
        LBFullProductName->setLayoutDirection(Qt::LeftToRight);
        LBFullProductName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditFullProductName = new QLineEdit(DataOfProduct);
        LEditFullProductName->setObjectName(QStringLiteral("LEditFullProductName"));
        LEditFullProductName->setGeometry(QRect(140, 310, 400, 30));
        LEditFullProductName->setAlignment(Qt::AlignCenter);
        LBShortProductName = new QLabel(DataOfProduct);
        LBShortProductName->setObjectName(QStringLiteral("LBShortProductName"));
        LBShortProductName->setGeometry(QRect(0, 350, 135, 30));
        LBShortProductName->setLayoutDirection(Qt::LeftToRight);
        LBShortProductName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditShortProductName = new QLineEdit(DataOfProduct);
        LEditShortProductName->setObjectName(QStringLiteral("LEditShortProductName"));
        LEditShortProductName->setGeometry(QRect(140, 350, 300, 30));
        LEditShortProductName->setAlignment(Qt::AlignCenter);
        LBProductFactory = new QLabel(DataOfProduct);
        LBProductFactory->setObjectName(QStringLiteral("LBProductFactory"));
        LBProductFactory->setGeometry(QRect(0, 170, 135, 30));
        LBProductFactory->setLayoutDirection(Qt::LeftToRight);
        LBProductFactory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LBProductSupplier = new QLabel(DataOfProduct);
        LBProductSupplier->setObjectName(QStringLiteral("LBProductSupplier"));
        LBProductSupplier->setGeometry(QRect(0, 220, 135, 30));
        LBProductSupplier->setLayoutDirection(Qt::LeftToRight);
        LBProductSupplier->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LBProductCategory = new QLabel(DataOfProduct);
        LBProductCategory->setObjectName(QStringLiteral("LBProductCategory"));
        LBProductCategory->setGeometry(QRect(560, 170, 135, 30));
        LBProductCategory->setLayoutDirection(Qt::LeftToRight);
        LBProductCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LBProductSubCategory = new QLabel(DataOfProduct);
        LBProductSubCategory->setObjectName(QStringLiteral("LBProductSubCategory"));
        LBProductSubCategory->setGeometry(QRect(560, 220, 135, 30));
        LBProductSubCategory->setLayoutDirection(Qt::LeftToRight);
        LBProductSubCategory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LBProductLine = new QLabel(DataOfProduct);
        LBProductLine->setObjectName(QStringLiteral("LBProductLine"));
        LBProductLine->setGeometry(QRect(560, 370, 135, 30));
        LBProductLine->setLayoutDirection(Qt::LeftToRight);
        LBProductLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LBProductUnitOfMeasure = new QLabel(DataOfProduct);
        LBProductUnitOfMeasure->setObjectName(QStringLiteral("LBProductUnitOfMeasure"));
        LBProductUnitOfMeasure->setGeometry(QRect(560, 420, 135, 30));
        LBProductUnitOfMeasure->setLayoutDirection(Qt::LeftToRight);
        LBProductUnitOfMeasure->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        GBoxFactory = new QGroupBox(DataOfProduct);
        GBoxFactory->setObjectName(QStringLiteral("GBoxFactory"));
        GBoxFactory->setGeometry(QRect(140, 160, 290, 46));
        CBoxProductFactory = new QComboBox(GBoxFactory);
        CBoxProductFactory->setObjectName(QStringLiteral("CBoxProductFactory"));
        CBoxProductFactory->setGeometry(QRect(10, 8, 240, 30));
        TButtonToolFactory = new QToolButton(GBoxFactory);
        TButtonToolFactory->setObjectName(QStringLiteral("TButtonToolFactory"));
        TButtonToolFactory->setGeometry(QRect(250, 8, 30, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/PNG/128x128/advancedsettings.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonToolFactory->setIcon(icon3);
        GBoxSupplier = new QGroupBox(DataOfProduct);
        GBoxSupplier->setObjectName(QStringLiteral("GBoxSupplier"));
        GBoxSupplier->setGeometry(QRect(140, 210, 290, 46));
        CBoxProductSupplier = new QComboBox(GBoxSupplier);
        CBoxProductSupplier->setObjectName(QStringLiteral("CBoxProductSupplier"));
        CBoxProductSupplier->setGeometry(QRect(10, 8, 240, 30));
        TButtonToolSupplier = new QToolButton(GBoxSupplier);
        TButtonToolSupplier->setObjectName(QStringLiteral("TButtonToolSupplier"));
        TButtonToolSupplier->setGeometry(QRect(250, 8, 30, 30));
        TButtonToolSupplier->setIcon(icon3);
        GBoxCategory = new QGroupBox(DataOfProduct);
        GBoxCategory->setObjectName(QStringLiteral("GBoxCategory"));
        GBoxCategory->setGeometry(QRect(700, 160, 290, 46));
        CBoxProductCategory = new QComboBox(GBoxCategory);
        CBoxProductCategory->setObjectName(QStringLiteral("CBoxProductCategory"));
        CBoxProductCategory->setGeometry(QRect(10, 8, 240, 30));
        TButtonToolCategory = new QToolButton(GBoxCategory);
        TButtonToolCategory->setObjectName(QStringLiteral("TButtonToolCategory"));
        TButtonToolCategory->setGeometry(QRect(250, 8, 30, 30));
        TButtonToolCategory->setIcon(icon3);
        GBoxSubCategory = new QGroupBox(DataOfProduct);
        GBoxSubCategory->setObjectName(QStringLiteral("GBoxSubCategory"));
        GBoxSubCategory->setGeometry(QRect(700, 210, 290, 46));
        CBoxProductSubCategory = new QComboBox(GBoxSubCategory);
        CBoxProductSubCategory->setObjectName(QStringLiteral("CBoxProductSubCategory"));
        CBoxProductSubCategory->setGeometry(QRect(10, 8, 240, 30));
        TButtonToolSubCategory = new QToolButton(GBoxSubCategory);
        TButtonToolSubCategory->setObjectName(QStringLiteral("TButtonToolSubCategory"));
        TButtonToolSubCategory->setGeometry(QRect(250, 8, 30, 30));
        TButtonToolSubCategory->setIcon(icon3);
        GBoxProductLine = new QGroupBox(DataOfProduct);
        GBoxProductLine->setObjectName(QStringLiteral("GBoxProductLine"));
        GBoxProductLine->setGeometry(QRect(700, 360, 220, 46));
        CBoxProductLine = new QComboBox(GBoxProductLine);
        CBoxProductLine->setObjectName(QStringLiteral("CBoxProductLine"));
        CBoxProductLine->setGeometry(QRect(10, 8, 170, 30));
        TButtonToolProductLine = new QToolButton(GBoxProductLine);
        TButtonToolProductLine->setObjectName(QStringLiteral("TButtonToolProductLine"));
        TButtonToolProductLine->setGeometry(QRect(180, 8, 30, 30));
        TButtonToolProductLine->setIcon(icon3);
        GBoxProductUnitOfMeasure = new QGroupBox(DataOfProduct);
        GBoxProductUnitOfMeasure->setObjectName(QStringLiteral("GBoxProductUnitOfMeasure"));
        GBoxProductUnitOfMeasure->setGeometry(QRect(700, 410, 220, 46));
        CBoxProductUnitOfMeasure = new QComboBox(GBoxProductUnitOfMeasure);
        CBoxProductUnitOfMeasure->setObjectName(QStringLiteral("CBoxProductUnitOfMeasure"));
        CBoxProductUnitOfMeasure->setGeometry(QRect(10, 8, 170, 30));
        TButtonToolProductUnitOfMeasure = new QToolButton(GBoxProductUnitOfMeasure);
        TButtonToolProductUnitOfMeasure->setObjectName(QStringLiteral("TButtonToolProductUnitOfMeasure"));
        TButtonToolProductUnitOfMeasure->setGeometry(QRect(180, 8, 30, 30));
        TButtonToolProductUnitOfMeasure->setIcon(icon3);
        TabProduct->addTab(DataOfProduct, QString());
        TabCodMercosul = new QWidget();
        TabCodMercosul->setObjectName(QStringLiteral("TabCodMercosul"));
        GBoxDataDocuments = new QGroupBox(TabCodMercosul);
        GBoxDataDocuments->setObjectName(QStringLiteral("GBoxDataDocuments"));
        GBoxDataDocuments->setGeometry(QRect(10, 20, 981, 251));
        GBoxProductNCMCode = new QGroupBox(GBoxDataDocuments);
        GBoxProductNCMCode->setObjectName(QStringLiteral("GBoxProductNCMCode"));
        GBoxProductNCMCode->setGeometry(QRect(10, 20, 200, 60));
        LEditProductNCMCode = new QLineEdit(GBoxProductNCMCode);
        LEditProductNCMCode->setObjectName(QStringLiteral("LEditProductNCMCode"));
        LEditProductNCMCode->setGeometry(QRect(10, 20, 181, 30));
        LEditProductNCMCode->setAlignment(Qt::AlignCenter);
        GBoxNoteDocs = new QGroupBox(GBoxDataDocuments);
        GBoxNoteDocs->setObjectName(QStringLiteral("GBoxNoteDocs"));
        GBoxNoteDocs->setGeometry(QRect(270, 20, 691, 201));
        TEditNoteDocs = new QTextEdit(GBoxNoteDocs);
        TEditNoteDocs->setObjectName(QStringLiteral("TEditNoteDocs"));
        TEditNoteDocs->setGeometry(QRect(10, 30, 671, 161));
        GBoxProductEXTIPICode = new QGroupBox(GBoxDataDocuments);
        GBoxProductEXTIPICode->setObjectName(QStringLiteral("GBoxProductEXTIPICode"));
        GBoxProductEXTIPICode->setGeometry(QRect(10, 90, 200, 60));
        LEditProductEXTIPICode = new QLineEdit(GBoxProductEXTIPICode);
        LEditProductEXTIPICode->setObjectName(QStringLiteral("LEditProductEXTIPICode"));
        LEditProductEXTIPICode->setGeometry(QRect(10, 20, 181, 30));
        LEditProductEXTIPICode->setAlignment(Qt::AlignCenter);
        GBoxProductNCMGender = new QGroupBox(GBoxDataDocuments);
        GBoxProductNCMGender->setObjectName(QStringLiteral("GBoxProductNCMGender"));
        GBoxProductNCMGender->setGeometry(QRect(10, 160, 200, 60));
        LEditProductNCMGender = new QLineEdit(GBoxProductNCMGender);
        LEditProductNCMGender->setObjectName(QStringLiteral("LEditProductNCMGender"));
        LEditProductNCMGender->setGeometry(QRect(10, 20, 181, 30));
        LEditProductNCMGender->setAlignment(Qt::AlignCenter);
        TabProduct->addTab(TabCodMercosul, QString());
        TabLocalSite = new QWidget();
        TabLocalSite->setObjectName(QStringLiteral("TabLocalSite"));
        GBoxSite = new QGroupBox(TabLocalSite);
        GBoxSite->setObjectName(QStringLiteral("GBoxSite"));
        GBoxSite->setGeometry(QRect(10, 20, 291, 60));
        CBoxSite = new QComboBox(GBoxSite);
        CBoxSite->setObjectName(QStringLiteral("CBoxSite"));
        CBoxSite->setGeometry(QRect(10, 20, 240, 30));
        TButtonToolSite = new QToolButton(GBoxSite);
        TButtonToolSite->setObjectName(QStringLiteral("TButtonToolSite"));
        TButtonToolSite->setGeometry(QRect(250, 20, 30, 30));
        TButtonToolSite->setIcon(icon3);
        LBDelimitProduct1_2 = new QLabel(TabLocalSite);
        LBDelimitProduct1_2->setObjectName(QStringLiteral("LBDelimitProduct1_2"));
        LBDelimitProduct1_2->setGeometry(QRect(530, 40, 10, 30));
        LBDelimitProduct1_2->setAlignment(Qt::AlignCenter);
        LBDelimitProduct1_3 = new QLabel(TabLocalSite);
        LBDelimitProduct1_3->setObjectName(QStringLiteral("LBDelimitProduct1_3"));
        LBDelimitProduct1_3->setGeometry(QRect(790, 40, 10, 30));
        LBDelimitProduct1_3->setAlignment(Qt::AlignCenter);
        LBAddressAisle = new QLabel(TabLocalSite);
        LBAddressAisle->setObjectName(QStringLiteral("LBAddressAisle"));
        LBAddressAisle->setGeometry(QRect(310, 40, 141, 30));
        LBAddressAisle->setLayoutDirection(Qt::LeftToRight);
        LBAddressAisle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditAddressRack = new QLineEdit(TabLocalSite);
        LEditAddressRack->setObjectName(QStringLiteral("LEditAddressRack"));
        LEditAddressRack->setGeometry(QRect(550, 40, 60, 30));
        LEditAddressRack->setAlignment(Qt::AlignCenter);
        LBAddressLocation = new QLabel(TabLocalSite);
        LBAddressLocation->setObjectName(QStringLiteral("LBAddressLocation"));
        LBAddressLocation->setGeometry(QRect(620, 40, 91, 30));
        LBAddressLocation->setLayoutDirection(Qt::LeftToRight);
        LBAddressLocation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LEditAddressBin = new QLineEdit(TabLocalSite);
        LEditAddressBin->setObjectName(QStringLiteral("LEditAddressBin"));
        LEditAddressBin->setGeometry(QRect(810, 40, 60, 30));
        LEditAddressBin->setAlignment(Qt::AlignCenter);
        LEditAddressAisle = new QLineEdit(TabLocalSite);
        LEditAddressAisle->setObjectName(QStringLiteral("LEditAddressAisle"));
        LEditAddressAisle->setGeometry(QRect(460, 40, 60, 30));
        LEditAddressAisle->setAlignment(Qt::AlignCenter);
        LEditAddressLocation = new QLineEdit(TabLocalSite);
        LEditAddressLocation->setObjectName(QStringLiteral("LEditAddressLocation"));
        LEditAddressLocation->setGeometry(QRect(720, 40, 60, 30));
        LEditAddressLocation->setAlignment(Qt::AlignCenter);
        TButtonRemoveAllSites = new QToolButton(TabLocalSite);
        TButtonRemoveAllSites->setObjectName(QStringLiteral("TButtonRemoveAllSites"));
        TButtonRemoveAllSites->setGeometry(QRect(450, 420, 90, 80));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/PNG/48x48/2leftarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveAllSites->setIcon(icon4);
        TButtonRemoveAllSites->setIconSize(QSize(48, 48));
        TButtonAddSite = new QToolButton(TabLocalSite);
        TButtonAddSite->setObjectName(QStringLiteral("TButtonAddSite"));
        TButtonAddSite->setGeometry(QRect(450, 150, 90, 80));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/PNG/48x48/1rightarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonAddSite->setIcon(icon5);
        TButtonAddSite->setIconSize(QSize(48, 48));
        TButtonAddAllSites = new QToolButton(TabLocalSite);
        TButtonAddAllSites->setObjectName(QStringLiteral("TButtonAddAllSites"));
        TButtonAddAllSites->setGeometry(QRect(450, 240, 90, 80));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/PNG/48x48/2rightarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonAddAllSites->setIcon(icon6);
        TButtonAddAllSites->setIconSize(QSize(48, 48));
        TButtonRemoveSite = new QToolButton(TabLocalSite);
        TButtonRemoveSite->setObjectName(QStringLiteral("TButtonRemoveSite"));
        TButtonRemoveSite->setGeometry(QRect(450, 330, 90, 80));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/PNG/48x48/1leftarrow-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonRemoveSite->setIcon(icon7);
        TButtonRemoveSite->setIconSize(QSize(48, 48));
        QXtreeWidgetNewAtualSites = new QTreeWidget(TabLocalSite);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        QXtreeWidgetNewAtualSites->setHeaderItem(__qtreewidgetitem);
        QXtreeWidgetNewAtualSites->setObjectName(QStringLiteral("QXtreeWidgetNewAtualSites"));
        QXtreeWidgetNewAtualSites->setGeometry(QRect(590, 110, 400, 400));
        QXtreeWidgetAtualSites = new QTreeWidget(TabLocalSite);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        QXtreeWidgetAtualSites->setHeaderItem(__qtreewidgetitem1);
        QXtreeWidgetAtualSites->setObjectName(QStringLiteral("QXtreeWidgetAtualSites"));
        QXtreeWidgetAtualSites->setGeometry(QRect(10, 110, 400, 400));
        TabProduct->addTab(TabLocalSite, QString());
        TabPlanner = new QWidget();
        TabPlanner->setObjectName(QStringLiteral("TabPlanner"));
        GBoxProductStockMax = new QGroupBox(TabPlanner);
        GBoxProductStockMax->setObjectName(QStringLiteral("GBoxProductStockMax"));
        GBoxProductStockMax->setGeometry(QRect(10, 80, 190, 60));
        LEditProductStockMax = new QLineEdit(GBoxProductStockMax);
        LEditProductStockMax->setObjectName(QStringLiteral("LEditProductStockMax"));
        LEditProductStockMax->setGeometry(QRect(10, 20, 170, 30));
        LEditProductStockMax->setAlignment(Qt::AlignCenter);
        GBoxProductTimOfDelivery = new QGroupBox(TabPlanner);
        GBoxProductTimOfDelivery->setObjectName(QStringLiteral("GBoxProductTimOfDelivery"));
        GBoxProductTimOfDelivery->setGeometry(QRect(290, 80, 190, 60));
        LEditProductTimeOfDelivery = new QLineEdit(GBoxProductTimOfDelivery);
        LEditProductTimeOfDelivery->setObjectName(QStringLiteral("LEditProductTimeOfDelivery"));
        LEditProductTimeOfDelivery->setGeometry(QRect(10, 20, 170, 30));
        LEditProductTimeOfDelivery->setAlignment(Qt::AlignCenter);
        GBoxProductStockMin = new QGroupBox(TabPlanner);
        GBoxProductStockMin->setObjectName(QStringLiteral("GBoxProductStockMin"));
        GBoxProductStockMin->setGeometry(QRect(10, 20, 190, 60));
        LEditProductStockMin = new QLineEdit(GBoxProductStockMin);
        LEditProductStockMin->setObjectName(QStringLiteral("LEditProductStockMin"));
        LEditProductStockMin->setGeometry(QRect(10, 20, 170, 30));
        LEditProductStockMin->setAlignment(Qt::AlignCenter);
        GBoxProductAverageDaily = new QGroupBox(TabPlanner);
        GBoxProductAverageDaily->setObjectName(QStringLiteral("GBoxProductAverageDaily"));
        GBoxProductAverageDaily->setGeometry(QRect(290, 20, 190, 60));
        LEditProductAverageDaily = new QLineEdit(GBoxProductAverageDaily);
        LEditProductAverageDaily->setObjectName(QStringLiteral("LEditProductAverageDaily"));
        LEditProductAverageDaily->setGeometry(QRect(10, 20, 170, 30));
        LEditProductAverageDaily->setAlignment(Qt::AlignCenter);
        TabProduct->addTab(TabPlanner, QString());
        TabSetup = new QWidget();
        TabSetup->setObjectName(QStringLiteral("TabSetup"));
        TButtonValidateSetup = new QToolButton(TabSetup);
        TButtonValidateSetup->setObjectName(QStringLiteral("TButtonValidateSetup"));
        TButtonValidateSetup->setGeometry(QRect(890, 460, 90, 80));
        TButtonValidateSetup->setIcon(icon2);
        TButtonValidateSetup->setIconSize(QSize(48, 48));
        TButtonValidateSetup->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GBoxProductICMSGroup = new QGroupBox(TabSetup);
        GBoxProductICMSGroup->setObjectName(QStringLiteral("GBoxProductICMSGroup"));
        GBoxProductICMSGroup->setGeometry(QRect(10, 30, 221, 60));
        CBoxProductICMSGroup = new QComboBox(GBoxProductICMSGroup);
        CBoxProductICMSGroup->setObjectName(QStringLiteral("CBoxProductICMSGroup"));
        CBoxProductICMSGroup->setGeometry(QRect(10, 20, 171, 31));
        TButtonToolProductICMSGroup = new QToolButton(GBoxProductICMSGroup);
        TButtonToolProductICMSGroup->setObjectName(QStringLiteral("TButtonToolProductICMSGroup"));
        TButtonToolProductICMSGroup->setGeometry(QRect(180, 20, 30, 30));
        TButtonToolProductICMSGroup->setIcon(icon3);
        GBoxProductIPIGroup = new QGroupBox(TabSetup);
        GBoxProductIPIGroup->setObjectName(QStringLiteral("GBoxProductIPIGroup"));
        GBoxProductIPIGroup->setGeometry(QRect(10, 100, 221, 60));
        CBoxProductIPIGroup = new QComboBox(GBoxProductIPIGroup);
        CBoxProductIPIGroup->setObjectName(QStringLiteral("CBoxProductIPIGroup"));
        CBoxProductIPIGroup->setGeometry(QRect(10, 20, 171, 31));
        TButtonToolProductIPIGroup = new QToolButton(GBoxProductIPIGroup);
        TButtonToolProductIPIGroup->setObjectName(QStringLiteral("TButtonToolProductIPIGroup"));
        TButtonToolProductIPIGroup->setGeometry(QRect(180, 20, 30, 30));
        TButtonToolProductIPIGroup->setIcon(icon3);
        GBoxProductPurchaserPrice = new QGroupBox(TabSetup);
        GBoxProductPurchaserPrice->setObjectName(QStringLiteral("GBoxProductPurchaserPrice"));
        GBoxProductPurchaserPrice->setGeometry(QRect(280, 30, 180, 60));
        LEditProductPurchaserPrice = new QLineEdit(GBoxProductPurchaserPrice);
        LEditProductPurchaserPrice->setObjectName(QStringLiteral("LEditProductPurchaserPrice"));
        LEditProductPurchaserPrice->setGeometry(QRect(10, 20, 160, 31));
        LEditProductPurchaserPrice->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        LEditProductPurchaserPrice->setAlignment(Qt::AlignCenter);
        GBoxProductPriceFloor = new QGroupBox(TabSetup);
        GBoxProductPriceFloor->setObjectName(QStringLiteral("GBoxProductPriceFloor"));
        GBoxProductPriceFloor->setGeometry(QRect(280, 100, 181, 60));
        LEditProductPriceFloor = new QLineEdit(GBoxProductPriceFloor);
        LEditProductPriceFloor->setObjectName(QStringLiteral("LEditProductPriceFloor"));
        LEditProductPriceFloor->setGeometry(QRect(10, 20, 161, 31));
        LEditProductPriceFloor->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        LEditProductPriceFloor->setAlignment(Qt::AlignCenter);
        GBoxProductPriceSale = new QGroupBox(TabSetup);
        GBoxProductPriceSale->setObjectName(QStringLiteral("GBoxProductPriceSale"));
        GBoxProductPriceSale->setGeometry(QRect(280, 170, 181, 60));
        LEditProductPriceSale = new QLineEdit(GBoxProductPriceSale);
        LEditProductPriceSale->setObjectName(QStringLiteral("LEditProductPriceSale"));
        LEditProductPriceSale->setGeometry(QRect(10, 20, 161, 31));
        LEditProductPriceSale->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        LEditProductPriceSale->setAlignment(Qt::AlignCenter);
        GBoxProductMarkupSingle = new QGroupBox(TabSetup);
        GBoxProductMarkupSingle->setObjectName(QStringLiteral("GBoxProductMarkupSingle"));
        GBoxProductMarkupSingle->setGeometry(QRect(540, 30, 180, 60));
        LEditProductMarkupSingle = new QLineEdit(GBoxProductMarkupSingle);
        LEditProductMarkupSingle->setObjectName(QStringLiteral("LEditProductMarkupSingle"));
        LEditProductMarkupSingle->setGeometry(QRect(10, 20, 160, 31));
        LEditProductMarkupSingle->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        LEditProductMarkupSingle->setAlignment(Qt::AlignCenter);
        GBoxProductMarkupRough = new QGroupBox(TabSetup);
        GBoxProductMarkupRough->setObjectName(QStringLiteral("GBoxProductMarkupRough"));
        GBoxProductMarkupRough->setGeometry(QRect(540, 100, 181, 60));
        LEditProductMarkupRough = new QLineEdit(GBoxProductMarkupRough);
        LEditProductMarkupRough->setObjectName(QStringLiteral("LEditProductMarkupRough"));
        LEditProductMarkupRough->setGeometry(QRect(10, 20, 161, 31));
        LEditProductMarkupRough->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        LEditProductMarkupRough->setAlignment(Qt::AlignCenter);
        GBoxProductPremiumCat = new QGroupBox(TabSetup);
        GBoxProductPremiumCat->setObjectName(QStringLiteral("GBoxProductPremiumCat"));
        GBoxProductPremiumCat->setGeometry(QRect(540, 170, 211, 60));
        CBoxProductIPremiumCat = new QComboBox(GBoxProductPremiumCat);
        CBoxProductIPremiumCat->setObjectName(QStringLiteral("CBoxProductIPremiumCat"));
        CBoxProductIPremiumCat->setGeometry(QRect(10, 20, 160, 31));
        TButtonToolProductPremiumCat = new QToolButton(GBoxProductPremiumCat);
        TButtonToolProductPremiumCat->setObjectName(QStringLiteral("TButtonToolProductPremiumCat"));
        TButtonToolProductPremiumCat->setGeometry(QRect(170, 20, 30, 30));
        TButtonToolProductPremiumCat->setIcon(icon3);
        GBoxProductPriceList = new QGroupBox(TabSetup);
        GBoxProductPriceList->setObjectName(QStringLiteral("GBoxProductPriceList"));
        GBoxProductPriceList->setGeometry(QRect(780, 30, 211, 60));
        CBoxProductPriceList = new QComboBox(GBoxProductPriceList);
        CBoxProductPriceList->setObjectName(QStringLiteral("CBoxProductPriceList"));
        CBoxProductPriceList->setGeometry(QRect(10, 20, 160, 31));
        TButtonToolProductPriceList = new QToolButton(GBoxProductPriceList);
        TButtonToolProductPriceList->setObjectName(QStringLiteral("TButtonToolProductPriceList"));
        TButtonToolProductPriceList->setGeometry(QRect(170, 20, 30, 30));
        TButtonToolProductPriceList->setIcon(icon3);
        CKBoxProductEnableDecimal = new QCheckBox(TabSetup);
        CKBoxProductEnableDecimal->setObjectName(QStringLiteral("CKBoxProductEnableDecimal"));
        CKBoxProductEnableDecimal->setGeometry(QRect(10, 250, 211, 22));
        CKBoxProductEnableLabel = new QCheckBox(TabSetup);
        CKBoxProductEnableLabel->setObjectName(QStringLiteral("CKBoxProductEnableLabel"));
        CKBoxProductEnableLabel->setGeometry(QRect(10, 290, 231, 22));
        CKBoxProductGenerateInvoice = new QCheckBox(TabSetup);
        CKBoxProductGenerateInvoice->setObjectName(QStringLiteral("CKBoxProductGenerateInvoice"));
        CKBoxProductGenerateInvoice->setGeometry(QRect(10, 330, 221, 22));
        TabProduct->addTab(TabSetup, QString());
        TButtonCleanForm = new QToolButton(MngFormProduct);
        TButtonCleanForm->setObjectName(QStringLiteral("TButtonCleanForm"));
        TButtonCleanForm->setGeometry(QRect(560, 620, 90, 80));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/PNG/48x48/Rebuild-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonCleanForm->setIcon(icon8);
        TButtonCleanForm->setIconSize(QSize(48, 48));
        TButtonCleanForm->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonSave = new QToolButton(MngFormProduct);
        TButtonSave->setObjectName(QStringLiteral("TButtonSave"));
        TButtonSave->setGeometry(QRect(360, 620, 90, 80));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/PNG/120x120/120px-System-floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonSave->setIcon(icon9);
        TButtonSave->setIconSize(QSize(48, 48));
        TButtonSave->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TButtonExit = new QToolButton(MngFormProduct);
        TButtonExit->setObjectName(QStringLiteral("TButtonExit"));
        TButtonExit->setGeometry(QRect(460, 620, 90, 80));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/PNG/48x48/Exithome-48x48.png"), QSize(), QIcon::Normal, QIcon::Off);
        TButtonExit->setIcon(icon10);
        TButtonExit->setIconSize(QSize(48, 48));
        TButtonExit->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        retranslateUi(MngFormProduct);

        TabProduct->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MngFormProduct);
    } // setupUi

    void retranslateUi(QDialog *MngFormProduct)
    {
        MngFormProduct->setWindowTitle(QApplication::translate("MngFormProduct", "Cadastro de Produtos", Q_NULLPTR));
        GBSearchProduct->setTitle(QString());
        GBoxProduct->setTitle(QApplication::translate("MngFormProduct", "Produto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProduct->setToolTip(QApplication::translate("MngFormProduct", "Informar o C\303\263digo do Produto para Pesquisar/Cadastrar...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ToolButtonProductSearch->setText(QApplication::translate("MngFormProduct", "Pesquisar", Q_NULLPTR));
        GBStatusProduct->setTitle(QApplication::translate("MngFormProduct", "Status", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CKBoxStatusProduct->setToolTip(QApplication::translate("MngFormProduct", "Marcar ou Desmarcar para Ativar/Inativar o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CKBoxStatusProduct->setText(QApplication::translate("MngFormProduct", "Ativo", Q_NULLPTR));
        GBoxProductPic->setTitle(QApplication::translate("MngFormProduct", "Foto", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonProductImg->setToolTip(QApplication::translate("MngFormProduct", "Exibir imagem para atualiza\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonProductImg->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonValidate->setToolTip(QApplication::translate("MngFormProduct", "Valida os Campos Obrigat\303\263rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidate->setText(QApplication::translate("MngFormProduct", "Validar", Q_NULLPTR));
        LBProductWeight->setText(QApplication::translate("MngFormProduct", "Peso atual", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductWeight->setToolTip(QApplication::translate("MngFormProduct", "Informar o Peso do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBProductPrice->setText(QApplication::translate("MngFormProduct", "Pre\303\247o de Venda R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPrice->setToolTip(QApplication::translate("MngFormProduct", "Exibe o Pre\303\247o Proposto do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBProductStock->setText(QApplication::translate("MngFormProduct", "Qtd. em Estoque", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductStock->setToolTip(QApplication::translate("MngFormProduct", "Exibe o Estoque atual do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LEditProductStock->setText(QString());
        LBProductWidthAndHeight->setText(QApplication::translate("MngFormProduct", "Largura/Altura", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductHeight->setToolTip(QApplication::translate("MngFormProduct", "Informar a Altura do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditProductWidth->setToolTip(QApplication::translate("MngFormProduct", "Informar a Largura do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBDelimitProduct1->setText(QApplication::translate("MngFormProduct", "/", Q_NULLPTR));
        LBProductBarCode->setText(QApplication::translate("MngFormProduct", "C\303\263digo de Barras", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductBarCode->setToolTip(QApplication::translate("MngFormProduct", "Informar o C\303\263digo de Barras do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBFullProductName->setText(QApplication::translate("MngFormProduct", "Descri\303\247\303\243o Completa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditFullProductName->setToolTip(QApplication::translate("MngFormProduct", "Informar a Descri\303\247\303\243o completa do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBShortProductName->setText(QApplication::translate("MngFormProduct", "Descri\303\247\303\243o Curta", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditShortProductName->setToolTip(QApplication::translate("MngFormProduct", "Informar a Descri\303\247\303\243o curta do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBProductFactory->setText(QApplication::translate("MngFormProduct", "Fabricante", Q_NULLPTR));
        LBProductSupplier->setText(QApplication::translate("MngFormProduct", "Fonecedor", Q_NULLPTR));
        LBProductCategory->setText(QApplication::translate("MngFormProduct", "Categoria", Q_NULLPTR));
        LBProductSubCategory->setText(QApplication::translate("MngFormProduct", "Sub-Categoria", Q_NULLPTR));
        LBProductLine->setText(QApplication::translate("MngFormProduct", "Linha do Produto", Q_NULLPTR));
        LBProductUnitOfMeasure->setText(QApplication::translate("MngFormProduct", "Unidade de Medidas", Q_NULLPTR));
        GBoxFactory->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductFactory->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Fabricante do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolFactory->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens dos Fabricantes...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolFactory->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxSupplier->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductSupplier->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Fornecedor do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolSupplier->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens dos Fornecedores...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolSupplier->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxCategory->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductCategory->setToolTip(QApplication::translate("MngFormProduct", "Selecionar a Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolCategory->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Categorias...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolCategory->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxSubCategory->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductSubCategory->setToolTip(QApplication::translate("MngFormProduct", "Selecionar a Sub-Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolSubCategory->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Sub-Categorias...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolSubCategory->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxProductLine->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductLine->setToolTip(QApplication::translate("MngFormProduct", "Selecionar a Linha do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductLine->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Linhas de Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductLine->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxProductUnitOfMeasure->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        CBoxProductUnitOfMeasure->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Tipo de Unidade de Medidas do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductUnitOfMeasure->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Unidades de Medidas...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductUnitOfMeasure->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        TabProduct->setTabText(TabProduct->indexOf(DataOfProduct), QApplication::translate("MngFormProduct", "Dados do Produto", Q_NULLPTR));
        GBoxDataDocuments->setTitle(QApplication::translate("MngFormProduct", "C\303\263digo Mercosul", Q_NULLPTR));
        GBoxProductNCMCode->setTitle(QApplication::translate("MngFormProduct", "NCM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductNCMCode->setToolTip(QApplication::translate("MngFormProduct", "Informar o NCM Mercosul do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxNoteDocs->setTitle(QApplication::translate("MngFormProduct", "Nota:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TEditNoteDocs->setToolTip(QApplication::translate("MngFormProduct", "Informar uma Observa\303\247\303\243o...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductEXTIPICode->setTitle(QApplication::translate("MngFormProduct", "EX TIPI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductEXTIPICode->setToolTip(QApplication::translate("MngFormProduct", "Informar o TIPI do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductNCMGender->setTitle(QApplication::translate("MngFormProduct", "Genero", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductNCMGender->setToolTip(QApplication::translate("MngFormProduct", "Informar o Genero do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabProduct->setTabText(TabProduct->indexOf(TabCodMercosul), QApplication::translate("MngFormProduct", "Mercosul", Q_NULLPTR));
        GBoxSite->setTitle(QApplication::translate("MngFormProduct", "Local/Armazem", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxSite->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Local/Filial/Armazem de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolSite->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens dos Locais...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolSite->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        LBDelimitProduct1_2->setText(QApplication::translate("MngFormProduct", "/", Q_NULLPTR));
        LBDelimitProduct1_3->setText(QApplication::translate("MngFormProduct", "/", Q_NULLPTR));
        LBAddressAisle->setText(QApplication::translate("MngFormProduct", "Corredor/Prateleira", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddressRack->setToolTip(QApplication::translate("MngFormProduct", "Informar a Prateleira do local de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        LBAddressLocation->setText(QApplication::translate("MngFormProduct", "Local/Caixa", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditAddressBin->setToolTip(QApplication::translate("MngFormProduct", "Informar a Caixa de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditAddressAisle->setToolTip(QApplication::translate("MngFormProduct", "Informar o Corredor  de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LEditAddressLocation->setToolTip(QApplication::translate("MngFormProduct", "Informar o Local da Prateleira de Armazenamento do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonRemoveAllSites->setToolTip(QApplication::translate("MngFormProduct", "Remover Todos os Locais para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveAllSites->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonAddSite->setToolTip(QApplication::translate("MngFormProduct", "Adicionar um local para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddSite->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonAddAllSites->setToolTip(QApplication::translate("MngFormProduct", "Adicionar Todos os  locais para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonAddAllSites->setText(QString());
#ifndef QT_NO_TOOLTIP
        TButtonRemoveSite->setToolTip(QApplication::translate("MngFormProduct", "Remover um local para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonRemoveSite->setText(QString());
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetNewAtualSites->setToolTip(QApplication::translate("MngFormProduct", "Locais/Filiais/Armazens atuais do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        QXtreeWidgetAtualSites->setToolTip(QApplication::translate("MngFormProduct", "Locais/Filiais/Armazens dispon\303\255veis para Produtos...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        QXtreeWidgetAtualSites->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        TabProduct->setTabText(TabProduct->indexOf(TabLocalSite), QApplication::translate("MngFormProduct", "Centro de Distribui\303\247\303\243o", Q_NULLPTR));
        GBoxProductStockMax->setTitle(QApplication::translate("MngFormProduct", "Estoque Max", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductStockMax->setToolTip(QApplication::translate("MngFormProduct", "Informar o  Estoque Maximo Permitido do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductTimOfDelivery->setTitle(QApplication::translate("MngFormProduct", "Prazo Entrega/Fabrica\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductTimeOfDelivery->setToolTip(QApplication::translate("MngFormProduct", "Informar o Prazo de Entrega ou de Fabrica\303\247\303\243o do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductStockMin->setTitle(QApplication::translate("MngFormProduct", "Estoque Minimo", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductStockMin->setToolTip(QApplication::translate("MngFormProduct", "Informar o estoque minimo permitido do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductAverageDaily->setTitle(QApplication::translate("MngFormProduct", "M\303\251dia Venda", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductAverageDaily->setToolTip(QApplication::translate("MngFormProduct", "Exibe a Media de Venda do Produto Semanal...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TabProduct->setTabText(TabProduct->indexOf(TabPlanner), QApplication::translate("MngFormProduct", "Planejamento", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonValidateSetup->setToolTip(QApplication::translate("MngFormProduct", "Valida os Campos Obrigat\303\263rios...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonValidateSetup->setText(QApplication::translate("MngFormProduct", "Validar", Q_NULLPTR));
        GBoxProductICMSGroup->setTitle(QApplication::translate("MngFormProduct", "Grupo de ICMS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductICMSGroup->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Tipo de ICMS para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductICMSGroup->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens dos Grupos de ICMS...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductICMSGroup->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxProductIPIGroup->setTitle(QApplication::translate("MngFormProduct", "Grupo de IPI", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductIPIGroup->setToolTip(QApplication::translate("MngFormProduct", "Selecionar o Tipo de IPI para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductIPIGroup->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens dos Grupos de IPI...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductIPIGroup->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxProductPurchaserPrice->setTitle(QApplication::translate("MngFormProduct", "Pre\303\247o de Compra R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPurchaserPrice->setToolTip(QApplication::translate("MngFormProduct", "Exibe o Pre\303\247o de Compra do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductPriceFloor->setTitle(QApplication::translate("MngFormProduct", "Pre\303\247o Proposto R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPriceFloor->setToolTip(QApplication::translate("MngFormProduct", "Exibe o Pre\303\247o Proposto do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductPriceSale->setTitle(QApplication::translate("MngFormProduct", "Pre\303\247o de Venda R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductPriceSale->setToolTip(QApplication::translate("MngFormProduct", "Exibe o Pre\303\247o de Vendas do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductMarkupSingle->setTitle(QApplication::translate("MngFormProduct", "Margem Liquida R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductMarkupSingle->setToolTip(QApplication::translate("MngFormProduct", "Exibe a Margem L\303\255quida do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductMarkupRough->setTitle(QApplication::translate("MngFormProduct", "Margem Bruta R$", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LEditProductMarkupRough->setToolTip(QApplication::translate("MngFormProduct", "Exibe a Magem Bruta do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GBoxProductPremiumCat->setTitle(QApplication::translate("MngFormProduct", "Comiss\303\243o por Categoria", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductIPremiumCat->setToolTip(QApplication::translate("MngFormProduct", "Selecionar Comiss\303\243o por Categoria do Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductPremiumCat->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Comiss\303\265es...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductPremiumCat->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
        GBoxProductPriceList->setTitle(QApplication::translate("MngFormProduct", "Lista de Pre\303\247o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CBoxProductPriceList->setToolTip(QApplication::translate("MngFormProduct", "Exibe Lista de Pre\303\247os, Atual em uso...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TButtonToolProductPriceList->setToolTip(QApplication::translate("MngFormProduct", "Permite fazer altera\303\247\303\243o nos itens das Listas de Pre\303\247os...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonToolProductPriceList->setText(QApplication::translate("MngFormProduct", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CKBoxProductEnableDecimal->setToolTip(QApplication::translate("MngFormProduct", "Marcar para habilitar casas decimais para opera\303\247\303\265es com o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CKBoxProductEnableDecimal->setText(QApplication::translate("MngFormProduct", "Permite Casas Decimais", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CKBoxProductEnableLabel->setToolTip(QApplication::translate("MngFormProduct", "Marcar para permitir que seja gerada etiquetas para o  Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CKBoxProductEnableLabel->setText(QApplication::translate("MngFormProduct", "Permite Gera\303\247\303\243o de Etiqueta", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        CKBoxProductGenerateInvoice->setToolTip(QApplication::translate("MngFormProduct", "Marcar para permitir que seja gerado notas fiscais para o Produto...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        CKBoxProductGenerateInvoice->setText(QApplication::translate("MngFormProduct", "Permite Gera\303\247\303\243o de Faturas", Q_NULLPTR));
        TabProduct->setTabText(TabProduct->indexOf(TabSetup), QApplication::translate("MngFormProduct", "Configura\303\247\303\243o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonCleanForm->setToolTip(QApplication::translate("MngFormProduct", "Limpa o Formul\303\241rio para Preencher Novamente...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonCleanForm->setText(QApplication::translate("MngFormProduct", "Limpar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonSave->setToolTip(QApplication::translate("MngFormProduct", "Salva os dados do Formul\303\241rio...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonSave->setText(QApplication::translate("MngFormProduct", "Salvar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TButtonExit->setToolTip(QApplication::translate("MngFormProduct", "Fecha a Janela Descartando Mudan\303\247as...", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        TButtonExit->setText(QApplication::translate("MngFormProduct", "Sa\303\255da", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MngFormProduct: public Ui_MngFormProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNGFORMPRODUCT_H
