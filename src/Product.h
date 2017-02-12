/* 
 * File:   Product.h
 * Author: batista
 *
 * Created on 3 de Julho de 2013, 15:39
 */

#ifndef PRODUCT_H
#define	PRODUCT_H
#include <qt5/QtSql/qsqlerror.h>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "ShowMsg.h"
#include "ProductCategory.h"
#include "ProductSubCategory.h"
#include "DbConn.h"

class Product : private DbConn {
public:
    Product();
    //
    virtual ~Product();
    //

    DbConn* getDbconn() const {
        return dbconn;
    }

    void setDbconn(DbConn* dbconn) {
        this->dbconn = dbconn;
    }

    //    


    //
    /**
     * Add a new Product to 
     * database.
     * @return 
     */
    bool addNewProd();
    /**
     * Remove a existing Product
     * from database. 
     * @return 
     */
    bool removeProd();
    /**
     * Update a existing Product 
     * from database
     * @return 
     */
    bool updateProduct();
    /**
     * Get Object with a Product
     * to product_id or name
     * @return 
     */
    Product * getProduct(Product &);
    /**
     * Get all products from database
     * @return 
     */
    QVector<Product*> getAllProducts();

    //

    bool isProductActive() const {
        return productActive;
    }

    void setProductActive(bool productActive) {
        this->productActive = productActive;
    }

    int getProductClassCodeId() const {
        return productClassCodeId;
    }

    void setProductClassCodeId(int productClassCodeId) {
        this->productClassCodeId = productClassCodeId;
    }

    QString getProductCode() const {
        return productCode;
    }

    void setProductCode(QString productCode) {
        this->productCode = productCode;
    }

    QString getProductComments() const {
        return productComments;
    }

    void setProductComments(QString productComments) {
        this->productComments = productComments;
    }

    QString getProductExTipi() const {
        return productExTipi;
    }

    void setProductExTipi(QString productExTipi) {
        this->productExTipi = productExTipi;
    }

    bool isProductFractional() const {
        return productFractional;
    }

    void setProductFractional(bool productFractional) {
        this->productFractional = productFractional;
    }

    int getProductFreightClassId() const {
        return productFreightClassId;
    }

    void setProductFreightClassId(int productFreightClassId) {
        this->productFreightClassId = productFreightClassId;
    }
    
    QString getProductDescrip() const {
        return productDescrip;
    }

    void setProductDescrip(QString productDescrip) {
        this->productDescrip = productDescrip;
    }

    QString getProductShortDescrip() const {
        return productShortDescrip;
    }

    void setProductShortDescrip(QString productShortDescrip) {
        this->productShortDescrip = productShortDescrip;
    }

    
    QString getProductGender() const {
        return productGender;
    }

    void setProductGender(QString productGender) {
        this->productGender = productGender;
    }

    double getProductHeight() const {
        return productHeight;
    }

    void setProductHeight(double productHeight) {
        this->productHeight = productHeight;
    }

    int getProductIcmsGroupId() const {
        return productIcmsGroupId;
    }

    void setProductIcmsGroupId(int productIcmsGroupId) {
        this->productIcmsGroupId = productIcmsGroupId;
    }

    int getProductId() const {
        return productId;
    }

    void setProductId(int productId) {
        this->productId = productId;
    }

    int getProductInvUomId() const {
        return productInvUomId;
    }

    void setProductInvUomId(int productInvUomId) {
        this->productInvUomId = productInvUomId;
    }

    int getProductIpiGroupId() const {
        return productIpiGroupId;
    }

    void setProductIpiGroupId(int productIpiGroupId) {
        this->productIpiGroupId = productIpiGroupId;
    }

    double getProductListCost() const {
        return productListCost;
    }

    void setProductListCost(double productListCost) {
        this->productListCost = productListCost;
    }

    int getProductListPriceId() const {
        return productListPriceId;
    }

    void setProductListPriceId(int productListPriceId) {
        this->productListPriceId = productListPriceId;
    }

    double getProductMaxCost() const {
        return productMaxCost;
    }

    void setProductMaxCost(double productMaxCost) {
        this->productMaxCost = productMaxCost;
    }

    QString getProductNcm() const {
        return productNcm;
    }

    void setProductNcm(QString productNcm) {
        this->productNcm = productNcm;
    }

    double getProductPackWeight() const {
        return productPackWeight;
    }

    void setProductPackWeight(double productPackWeight) {
        this->productPackWeight = productPackWeight;
    }
    
    int getProductCategoryId() const {
        return productCategoryId;
    }

    void setProductCategoryId(int productCategoryId) {
        this->productCategoryId = productCategoryId;
    }

    int getProductSubCategoryId() const {
        return productSubCategoryId;
    }

    void setProductSubCategoryId(int productSubCategoryId) {
        this->productSubCategoryId = productSubCategoryId;
    }
    
    
    QString getProductPartNumber() const {
        return productPartNumber;
    }

    void setProductPartNumber(QString productPartNumber) {
        this->productPartNumber = productPartNumber;
    }

    int getProductPriceUomId() const {
        return productPriceUomId;
    }

    void setProductPriceUomId(int productPriceUomId) {
        this->productPriceUomId = productPriceUomId;
    }

 
    bool isProductSold() const {
        return productSold;
    }

    void setProductSold(bool productSold) {
        this->productSold = productSold;
    }

    bool isProductTaxRecoverable() const {
        return productTaxRecoverable;
    }

    void setProductTaxRecoverable(bool productTaxRecoverable) {
        this->productTaxRecoverable = productTaxRecoverable;
    }

    QChar getProductType() const {
        return productType;
    }

    void setProductType(QChar productType) {
        this->productType = productType;
    }

    QString getProductUpcCode() const {
        return productUpcCode;
    }

    void setProductUpcCode(QString productUpcCode) {
        this->productUpcCode = productUpcCode;
    }

    int getProductWarrantDays() const {
        return productWarrantDays;
    }

    void setProductWarrantDays(int productWarrantDays) {
        this->productWarrantDays = productWarrantDays;
    }

    double getProductWeight() const {
        return productWeight;
    }

    void setProductWeight(double productWeight) {
        this->productWeight = productWeight;
    }

    double getProductWidth() const {
        return productWidth;
    }

    void setProductWidth(double productWidth) {
        this->productWidth = productWidth;
    }
    
    int getProductMercosulId() const {
        return productMercosulId;
    }

    void setProductMercosulId(int productMercosulId) {
        this->productMercosulId = productMercosulId;
    }
    
    
    //
private:
    Product * prod;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;

    //
private:
    int productId; //item_id integer NOT NULL DEFAULT nextval(('item_item_id_seq'::text)::regclass),
    QString productCode; //item_number text NOT NULL,
    bool productActive; //item_active boolean NOT NULL,
    QString productDescrip; //item_descrip1 text NOT NULL,
    QString productShortDescrip; //item_descrip2 text NOT NULL,
    int productClassCodeId; //item_classcode_id integer NOT NULL,
    bool productSold; //item_sold boolean NOT NULL,
    bool productFractional; //item_fractional boolean NOT NULL,
    QChar productType; //item_type character(1) NOT NULL DEFAULT 'R'::bpchar,
    double productWeight; //item_prodweight numeric(16,2) NOT NULL DEFAULT 0,
    double productWidth; //width numeric(10,2),
    double productHeight; //height numeric(10,2),
    double productPackWeight; //item_packweight numeric(16,2) NOT NULL DEFAULT 0,
    int productCategoryId; //item_prodcat_id integer NOT NULL,
    int productSubCategoryId;
    int productListPriceId; //item_listprice numeric(16,4) NOT NULL,
    QString productUpcCode; // item_upccode text,
    int productMercosulId; //item_mercosul_id
    QString productPartNumber; //part_number text,
    QString productNcm; //ncm text,
    QString productExTipi; //ex_tipi text,
    QString productGender; //genero text,
    
    double productMaxCost; //item_maxcost numeric(16,6) NOT NULL DEFAULT 0, -- Maximum cost for item.  Used to constrain purchase order price.
    int productInvUomId; //item_inv_uom_id integer NOT NULL,
    int productPriceUomId; // item_price_uom_id integer NOT NULL,
    int productWarrantDays; //item_warrdays integer DEFAULT 0,
    int productFreightClassId; //item_freightclass_id integer,
    bool productTaxRecoverable; //item_tax_recoverable boolean NOT NULL DEFAULT false,
    double productListCost; //item_listcost numeric(16,6) NOT NULL DEFAULT 0.0, -- List cost for item.  Basis for markup pricing.
    QString productComments; // item_comments text,
    int productIcmsGroupId; // icms_template_id bigint,
    int productIpiGroupId; //ipi_template_id bigint,

};

/*
    
  item_picklist boolean NOT NULL DEFAULT true,
  item_exclusive boolean NOT NULL DEFAULT false,
  
  item_config boolean DEFAULT false,
  item_extdescrip text,

 */

/*
 CREATE TABLE product
(
  id bigserial NOT NULL,
  te_id bigint,
  consignment boolean NOT NULL DEFAULT false,
  location text,
  
  manufacturer text,
  model text,
 * 
  
  
  
 * 
  production_time integer DEFAULT 0,
  is_composed boolean DEFAULT false,

  depth numeric(10,2),
 * 
  

  manufacturer_id bigint,


)
 * 
 * 
 * 
 * 
CREATE TABLE product_item
(
  item_id integer NOT NULL auto_increment,
  item_code text NOT NULL,
  item_serial text NOT NULL,
  item_descrip1 text NOT NULL,
  item_descrip2 text NOT NULL,
  item_classcode_id integer NOT NULL,
  item_comments text,
  item_sold boolean NOT NULL,
  item_fractional boolean NOT NULL,
  item_active boolean NOT NULL,
  item_type character(1) NOT NULL DEFAULT 'R',
  item_prodweight numeric(16,2) NOT NULL DEFAULT 0,
  item_packweight numeric(16,2) NOT NULL DEFAULT 0,
  item_prodcat_id integer NOT NULL,
  item_prodsubcat_id integer NOT NULL,
  item_exclusive boolean NOT NULL DEFAULT false,
  item_listprice numeric(16,4) NOT NULL,
  item_upccode text,
  item_maxcost numeric(16,6) NOT NULL DEFAULT 0, -- Maximum cost for item.  Used to constrain purchase order price.
  item_inv_uom_id integer NOT NULL,
  item_price_uom_id integer NOT NULL,
  item_listcost numeric(16,6) NOT NULL DEFAULT 0.0, -- List cost for item.  Basis for markup pricing.
  item_mercosul_id integer,
  CONSTRAINT item_pkey PRIMARY KEY (item_id),
  CONSTRAINT item_item_code_check CHECK (item_code <> ''),
  CONSTRAINT item_item_type_check CHECK (item_type = 'P' OR item_type = 'M' OR item_type = 'F' OR item_type = 'O' OR item_type = 'R' OR item_type = 'S' OR item_type = 'T' OR item_type = 'B' OR item_type = 'L' OR item_type = 'Y' OR item_type = 'C' OR item_type = 'K'),
  CONSTRAINT item_item_serial_check CHECK (item_serial <> ''),
  CONSTRAINT item_sold_check CHECK (NOT (item_sold AND item_prodcat_id = (-1)))
)
 
 */


#endif	/* PRODUCT_H */

