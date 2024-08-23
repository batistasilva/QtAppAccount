/*
 * File:   MngFormProduct.cpp
 * Author: batista
 *
 * Created on 14 de Maio de 2013, 11:39
 */

#include <QtWidgets/QDialog>

#include "MngFormProduct.h"
#include "src/ProductSubCategory.h"

MngFormProduct::MngFormProduct(QDialog *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    dbconn = new DbConn();
    //factory = new MngFormFactory();

    dbconn->openConnInPGree();
    // factory->setDbconn(dbconn); 
    //
    sqlmodel = new QSqlQueryModel;
    //
    runPopulateCategory();
    //
    runPopulateSubCategory();
    //
    runPopulateWarehouse();
    //
    runPopulateFactory();
    //
    runPopulateProdLines();
    //
    runPopulateUom();
    //
    runPopulateICMSTax();
    //
    //    runPopulateIPITax();
    //
    //    runPopulateCommis();
    //
    //    runPopulatePriceSchedule();
    //
    // runPopulateProducts();

    // connect(CBoxProduct, SIGNAL(clicked()), this, SLOT(runTestConf()));
    connect(TButtonToolFactory, SIGNAL(clicked()), this, SLOT(runWinToolFactory()));
    connect(TButtonToolCategory, SIGNAL(clicked()), this, SLOT(runWinToolCategory()));
    connect(TButtonToolProductLine, SIGNAL(clicked()), this, SLOT(runWinToolProdLines()));
    connect(TButtonToolProductUnitOfMeasure, SIGNAL(clicked()), this, SLOT(runWinToolUom()));    
    connect(TButtonToolSubCategory, SIGNAL(clicked()), this, SLOT(runWinToolSubCategory()));
    connect(TButtonToolSite, SIGNAL(clicked()), this, SLOT(runWinToolLocalWareHouse()));
    connect(LEditProduct, SIGNAL(textChanged(QString)), this, SLOT(runPopulateProducts()));
    connect(TButtonExit, SIGNAL(clicked()), this, SLOT(runExitWin()));
    //    ShowGuiMessage("warm", "Mensagem", QString::fromUtf8("Teste está com ascentos Messagem!!"));
}

MngFormProduct::~MngFormProduct() {
    dbconn->closeConnPGree();
}

/**
 * Method for populate products category
 */
void MngFormProduct::runPopulateCategory() {
    prodcat = new ProductCategory();
    //
    //
    int i = 0;

    CBoxProductCategory->addItem("[ SELECIONE ]");
    CBoxProductCategory->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    prodcat->setDbconn(dbconn);

    if (prodcat->getDbconn()->isOpenConnPGree())
        foreach(ProductCategory * prodct, prodcat->getAllCategory()) {
        CBoxProductCategory->addItem(prodct->getCatDescrip());
        CBoxProductCategory->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductCategory->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductCategory->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductCategory->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductCategory->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
}

/**
 * Method for populate products subcategory
 */
void MngFormProduct::runPopulateSubCategory() {
    prodsubcat = new ProductSubCategory();
    //
    //
    int i = 0;

    CBoxProductSubCategory->addItem("[ SELECIONE ]");
    CBoxProductSubCategory->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    prodsubcat->setDbconn(dbconn);

    if (prodsubcat->getDbconn()->isOpenConnPGree())
        foreach(ProductSubCategory * prodsbct, prodsubcat->getAllSubCategory()) {
        CBoxProductSubCategory->addItem(prodsbct->getSubCatDescrip());
        CBoxProductSubCategory->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductSubCategory->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductSubCategory->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductSubCategory->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductSubCategory->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro    
}

/**
 * Method for populate products warehouse
 */
void MngFormProduct::runPopulateWarehouse() {
    whouse = new WareHouse();
    //
    //
    int i = 0;

    CBoxSite->addItem("[ SELECIONE ]");
    CBoxSite->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    whouse->setDbconn(dbconn);

    if (whouse->getDbconn()->isOpenConnPGree()) {

        foreach(WareHouse * wh, whouse->getAllWarehouseForCBox()) {
            //
            CBoxSite->addItem(wh->getWarehouseDescrib());
            CBoxSite->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxSite->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxSite->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxSite->lineEdit()->setAlignment(Qt::AlignCenter); // Third  :  sqlmodel = new QSqlQueryModel;Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxSite->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro    
}


/**
 * Method for populae Factory
 */
void MngFormProduct::runPopulateFactory() {
    fac = new Factory();
    //
    //
    int i = 0;

    //CBoxProductManufacture->addItem("[ SELECIONE ]");
    //CBoxProductManufacture->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    fac->setDbconn(dbconn);

    if (fac->getDbconn()->isOpenConnPGree()) {

        foreach(Factory * fact, fac->getAllFactory()) {
            //
           // CBoxProductManufacture->addItem(fact->getFactoryDescrip());
           // CBoxProductManufacture->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
   // CBoxProductManufacture->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
   // CBoxProductManufacture->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
   // CBoxProductManufacture->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
   // CBoxProductManufacture->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro    

}

/**
 * Method for populate Product Lines
 */
void MngFormProduct::runPopulateProdLines(){
    prodline = new ProductLine();
    //
    //
    int i = 0;

    CBoxProductLine->addItem("[ SELECIONE ]");
    CBoxProductLine->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    prodline->setDbconn(dbconn);

    if (prodline->getDbconn()->isOpenConnPGree()) {

        foreach(ProductLine * line, prodline->getAllLines()) {
            //
            CBoxProductLine->addItem(line->getProdLineShortDescrip());
            CBoxProductLine->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductLine->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductLine->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductLine->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductLine->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro    

}

/**
 * Method for populate Product Unit of Measure
 */
void MngFormProduct::runPopulateUom() {
    produom = new ProductUoM();
    //
    //
    int i = 0;

    CBoxProductUnitOfMeasure->addItem("[ SELECIONE ]");
    CBoxProductUnitOfMeasure->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    produom->setDbconn(dbconn);

    if (produom->getDbconn()->isOpenConnPGree()) {

        foreach(ProductUoM * uom, produom->getAllUoms()) {
            //
            CBoxProductUnitOfMeasure->addItem(uom->getUomDescrip());
            CBoxProductUnitOfMeasure->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductUnitOfMeasure->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductUnitOfMeasure->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductUnitOfMeasure->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductUnitOfMeasure->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro       
}

/**
 * Method for populate combobox for ICMS
 * Tax
 */
void MngFormProduct::runPopulateICMSTax() {
    tax = new Tax();
    //
    //
    int i = 0;

    CBoxProductICMSGroup->addItem("[ SELECIONE ]");
    CBoxProductICMSGroup->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    tax->setDbconn(dbconn);

    if (tax->getDbconn()->isOpenConnPGree()) {

        foreach(Tax * icmstax, tax->getAllTaxs()) {
            //
            CBoxProductICMSGroup->addItem(icmstax->getTaxDescrip());
            CBoxProductICMSGroup->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductICMSGroup->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductICMSGroup->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductICMSGroup->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductICMSGroup->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro           
}

/**
 * Method for populate combobox for IPI
 * Tax
 */
void MngFormProduct::runPopulateIPITax() {
    tax = new Tax();
    //
    //
    int i = 0;

    CBoxProductIPIGroup->addItem("[ SELECIONE ]");
    CBoxProductIPIGroup->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    tax->setDbconn(dbconn);

    if (tax->getDbconn()->isOpenConnPGree()) {

        foreach(Tax * icmstax, tax->getAllTaxs()) {
            //
            CBoxProductIPIGroup->addItem(icmstax->getTaxDescrip());
            CBoxProductIPIGroup->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductIPIGroup->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductIPIGroup->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductIPIGroup->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductIPIGroup->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro               
}

/**
 * Method for populate commision groups
 */
void MngFormProduct::runPopulateCommis() {
    commis = new Commission();
    //
    //
    int i = 0;

    CBoxProductIPremiumCat->addItem("[ SELECIONE ]");
    CBoxProductIPremiumCat->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    commis->setDbconn(dbconn);

    if (commis->getDbconn()->isOpenConnPGree()) {

        foreach(Commission * coms, commis->getAllCommissions()) {
            //
            CBoxProductIPremiumCat->addItem(coms->getCommisDescrip());
            CBoxProductIPremiumCat->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductIPremiumCat->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductIPremiumCat->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductIPremiumCat->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductIPremiumCat->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro                   
}

/**
 * Method for populate price schedule group 
 */
void MngFormProduct::runPopulatePriceSchedule() {
    pricesc = new PriceSchedule();
    //
    //
    int i = 0;

    CBoxProductPriceList->addItem("[ SELECIONE ]");
    CBoxProductPriceList->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    pricesc->setDbconn(dbconn);

    if (pricesc->getDbconn()->isOpenConnPGree()) {

        foreach(PriceSchedule * prices, pricesc->getAllPriceSchedule()) {
            //
            CBoxProductPriceList->addItem(prices->getPriceScheduleDescrip());
            CBoxProductPriceList->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
            //
        }
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxProductPriceList->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxProductPriceList->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxProductPriceList->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxProductPriceList->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro          
}

/**
 * Method for populate products for combobox
 */
void MngFormProduct::runPopulateProducts() {
    prod = new Product();
    //

    prod->setDbconn(dbconn);

    if (prod->getDbconn()->isOpenConnPGree()) {
        //sqlmodel = new QSqlQueryModel;
        //
        sqlmodel->setQuery("SELECT item_number FROM item ORDER BY item_number");

        completer = new QCompleter(sqlmodel, this);

        completer->setCaseSensitivity(Qt::CaseInsensitive);

        LEditProduct->setCompleter(completer);
    }

}

/**
 * @brief MngFormProduct::runWinToolFactory
 * Method for Open FormFactory.ui for
 * Maintain Factorys Itens
 */
void MngFormProduct::runWinToolFactory() {
    //
    factory = new MngFormFactory();
    //
    factory->setDbconn(dbconn);
    factory->exec();
    //
   // CBoxProductManufacture->clear();
    //
    runPopulateFactory();
}


/**
 * @brief MngFormProduct::runWinToolCategory
 * Method for Open MngFormCategory.ui for
 * Maintain Categorys Itens
 */
void MngFormProduct::runWinToolCategory() {
    //
    category = new MngFormCategory();
    //
    category->setDbconn(dbconn);
    category->exec();
    //
    CBoxProductCategory->clear();
    //
    runPopulateCategory();
}



/**
 * @brief MngFormProduct::runWinToolSubCategory
 * Method for Open MngFormSubCategory.ui for
 * Maintain SubCategorys Itens
 */
void MngFormProduct::runWinToolSubCategory() {
    //
    subcategory = new MngFormSubCategory();
    //
    subcategory->setDbconn(dbconn);
    subcategory->exec();
    //
    CBoxProductSubCategory->clear();
    //
    runPopulateSubCategory();
}


/**
 * @brief MngFormProduct::runWinToolProdLines()
 * Method for Open MngFormProdLines.ui for
 * Maintain ProductLine Itens
 */
void MngFormProduct::runWinToolProdLines (){
    //
    prodlines = new MngFormProdLines();
    //
    prodlines->setDbconn(dbconn);
    prodlines->exec();
    //
    CBoxProductLine->clear();
    //
    runPopulateProdLines();
}


/**
 * @brief MngFormProduct::runWinToolUom()
 * Method for Open MngFormUom.ui for
 * Maintain ProductUom Itens
 */
void MngFormProduct::runWinToolUom(){
    //
    formuom = new MngFormUom();
    //
    formuom->setDbconn(dbconn);
    
    formuom->exec(); 
    //
    CBoxProductUnitOfMeasure->clear();
    //
    runPopulateUom();
}



/**
 * Method for Open MngFomrLocalWareHouse.ui for
 * Maintain Local Site Itens
 */
void MngFormProduct::runWinToolLocalWareHouse(){
    formlocalwh = new MngFormLocalWareHouse();
    //
    formlocalwh->setDbconn(dbconn);
    //
    formlocalwh->setStatusCallSubWin(true);
    //
    formlocalwh->exec();
    //
    CBoxSite->clear();
    //
    runPopulateWarehouse();
}


/**
 * Method for close childmdi window
 */
void MngFormProduct::runExitWin() {
  //  qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    //this->close();//tambem funciona
}
