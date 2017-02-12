/* 
 * File:   Product.cpp
 * Author: batista
 * 
 * Created on 3 de Julho de 2013, 15:39
 */

#include "Product.h"

Product::Product() {
    dir = new DirFile();
}

Product::~Product() {
}

/**
 * Add a new Product to 
 * database.
 * @return 
 */
bool Product::addNewProd() {
    return true;
}

/**
 * Remove a existing Product
 * from database. 
 * @return 
 */
bool Product::removeProd() {
    return true;
}

/**
 * Update a existing Product 
 * from database
 * @return 
 */
bool Product::updateProduct() {
    return true;
}

/**
 * Get Object with a Product
 * to product_id or name
 * @return 
 */
Product * Product::getProduct(Product &) {
    prod = new Product();
    //
    return prod;
}

/**
 * Get all products from database
 * @return 
 */
QVector<Product*> Product::getAllProducts() {
    QSqlQuery query;
    //
    QVector<Product *> vector_products;

    QString vquery = "SELECT * FROM item ORDER BY item_number";
    //

    //
    msg->ShowMessage("Lendo todos os Produtos do banco de dados PostgreSql!!", COLOR_BLUE, COLOR_PINK);
    //

    //
    //query.prepare(vquery);
    //
    query.exec(vquery);

    while (query.next()) {
        //
        prod = new Product();

        //ITEM_ID
        prod->setProductId(query.value(0).toUInt()); // 0=coluna

        //ITEM_NUMBER
        prod->setProductCode(query.value(1).toString()); // 1=coluna

        //ITEM_DESCRIP1
        prod->setProductDescrip(query.value(2).toString()); // 2=coluna

        //ITEM_DESCRIP2
        prod->setProductShortDescrip(query.value(3).toString()); // 3=coluna

        //ITEM_COMMENTS
        prod->setProductComments(query.value(6).toString()); // 6=coluna

        //ITEM_ACTIVE
        prod->setProductActive(query.value(9).toBool()); // 9=coluna

        //ITEM_TYPE
        prod->setProductType(query.value(10).toChar()); // 10=coluna

        //ITEM_PRODWEIGHT
        prod->setProductWeight(query.value(11).toDouble()); // 11=coluna

        //ITEM_PACKWEIGHT
        prod->setProductPackWeight(query.value(12).toDouble()); // 12=coluna

        //ITEM_PRODCAT_ID
        prod->setProductCategoryId(query.value(13).toInt()); // 13=coluna

        //ITEM_UPCCODE
        prod->setProductUpcCode(query.value(18).toString()); // 18=coluna

        //ITEM_MAXCOST
        prod->setProductMaxCost(query.value(19).toDouble()); // 19=coluna

        //ITEM_INV_UOM_ID
        prod->setProductInvUomId(query.value(20).toInt()); // 20=coluna

        //ITEM_PRICE_UOM_ID
        prod->setProductPriceUomId(query.value(21).toInt()); // 21=coluna

        //ITEM_WARRDAYS
        prod->setProductWarrantDays(query.value(22).toInt()); // 22=coluna

        //ITEM_MERCOSUL_ID
        prod->setProductMercosulId(query.value(26).toInt()); // 26=coluna


        msg->ShowMessage("Add Product: " + prod->getProductDescrip(), COLOR_BLUE, COLOR_PINK);
        //
        vector_products.push_back(prod);
        //
    }
    //
    if (!query.first()) {

        QString str_erro = query.lastError().text();
        //
        // QMessageBox::critical(0, QObject::tr("Database Error"), str_erro);
        //
        QString erro_query = "Product not found for query: " + vquery +
                "\nQuery Error: " + str_erro;
        //
        msg->ShowMessage(erro_query, COLOR_BLUE, COLOR_RED);
        //

        //
        dir->setFolder_write("./Logs/Products/");
        //   
        dir->CreateLogFile("PRODUCTS-NOT-FOUND", erro_query);
    }

    //
    return vector_products;
}

