/* 
 * File:   Address.h
 * Author: batista
 *
 * Created on 12 de Agosto de 2013, 16:51
 */

#ifndef ADDRESS_H
#define	ADDRESS_H
#include <qt5/QtSql/QSqlError>
#include <QAbstractItemModel>
#include <qt5/QtSql/QSqlQueryModel>
#include <qt5/QtSql/QSqlQuery>
#include <qt5/QtSql/QSqlRecord>
#include <QString>
#include <QByteArray>
#include <QVector>
#include "DirFile.h"
#include "DbConn.h"
#include "ShowMsg.h"
#include "common/Util.h"

class Address {
public:
    Address();
    virtual ~Address();
    
    //

    int getAddrId() const {
        return addrId;
    }

    void setAddrId(int addrId) {
        this->addrId = addrId;
    }

    QString getAddrAddress() const {
        return addrAddress;
    }

    void setAddrAddress(QString addrAddress) {
        this->addrAddress = addrAddress;
    }

    QString getAddrCity() const {
        return addrCity;
    }

    void setAddrCity(QString addrCity) {
        this->addrCity = addrCity;
    }

    QString getAddrComp() const {
        return addrComp;
    }

    void setAddrComp(QString addrComp) {
        this->addrComp = addrComp;
    }

    QString getAddrCountry() const {
        return addrCountry;
    }

    void setAddrCountry(QString addrCountry) {
        this->addrCountry = addrCountry;
    }

    QString getAddrDateChange() const {
        return addrDateChange;
    }

    void setAddrDateChange(QString addrDateChange) {
        this->addrDateChange = addrDateChange;
    }

    QString getAddrDateCreate() const {
        return addrDateCreate;
    }

    void setAddrDateCreate(QString addrDateCreate) {
        this->addrDateCreate = addrDateCreate;
    }

    QString getAddrDistrict() const {
        return addrDistrict;
    }

    void setAddrDistrict(QString addrDistrict) {
        this->addrDistrict = addrDistrict;
    }

    QString getAddrNotes() const {
        return addrNotes;
    }

    void setAddrNotes(QString addrNotes) {
        this->addrNotes = addrNotes;
    }

    QString getAddrNumber() const {
        return addrNumber;
    }

    void setAddrNumber(QString addrNumber) {
        this->addrNumber = addrNumber;
    }

    QString getAddrPostalCode() const {
        return addrPostalCode;
    }

    void setAddrPostalCode(QString addrPostalCode) {
        this->addrPostalCode = addrPostalCode;
    }

    QString getAddrState() const {
        return addrState;
    }

    void setAddrState(QString addrState) {
        this->addrState = addrState;
    }

    int getAddrSuppId() const {
        return addrSuppId;
    }

    void setAddrSuppId(int addrSuppId) {
        this->addrSuppId = addrSuppId;
    }

    //

    /**
     * Get Next id from database table 
     * to add.
     * @param 
     * @return 
     */
    int getNextIdFromMainTable();

    /**
     * Add a new Main Address to 
     * address Table from database.
     * @return 
     */
    bool addMainAddress();
    
    /**
     * Add a new Main Supplier Address to 
     * suppaddress Table from database.
     * @return 
     */
    bool addMainSupplierAddress();
 
    
    /**
     * Remove a existing Supplier Address
     * from database. 
     * @return 
     */
    bool removeSupplierAddress();
    
    
    /**
     * Update a existing Supplier Address
     * from database
     * @return 
     */
    bool updateSupplierAddress();
    
    /**
     * Get Object with a Address
     * to supplier_id or name
     * @return 
     */
    Address* getAddress(Address &);

    /**
     * Get All Object with Address
     * for populate combo
     * @return 
     */
    QVector<Address*> getAllAddress();

    //
    

private:
    Address * addrsupp;
    Address * addrmain;
    ShowMsg * msg;
    DirFile * dir;
    DbConn * dbconn;
    //
    
    //
private:
    int addrId;//addr_id
    int addrSuppId;/*addr_suppid serial NOT NULL,*/
    QString addrAddress;/*addr_name text DEFAULT ''::text,*/
    QString addrNumber;//addr_number text NOT NULL,
    QString addrComp;//addr_comp text DEFAULT ''::text,
    QString addrDistrict;//addr_district text DEFAULT ''::text,
    QString addrCity;//addr_city text DEFAULT ''::text,
    QString addrState;//addr_state text DEFAULT ''::text,
    QString addrPostalCode;//addr_postalcode text DEFAULT ''::text,
    QString addrCountry;//addr_country text DEFAULT ''::text,
    QString addrNotes;//addr_notes text DEFAULT ''::text,
    QString addrDateCreate;//addr_date_create timestamp,
    QString addrDateChange;//addr_date_change timestamp,

};

/*
 CREATE TABLE address
(
  addr_id serial NOT NULL,
  addr_street text DEFAULT ''::text,
  addr_complement text DEFAULT ''::text,
  addr_district text DEFAULT ''::text,
  addr_city text DEFAULT ''::text,
  addr_state text DEFAULT ''::text,
  addr_postalcode text DEFAULT ''::text,
  addr_country text DEFAULT ''::text,
  addr_notes text DEFAULT ''::text,
  addr_date_create timestamp without time zone,
  addr_date_change timestamp without time zone,
  CONSTRAINT address_pkey PRIMARY KEY (addr_id),
  CONSTRAINT address_addr_postalcode_key UNIQUE (addr_postalcode),
  CONSTRAINT address_addr_postalcode CHECK (addr_postalcode <> ''::text),
  CONSTRAINT address_addr_street_check CHECK (addr_street <> ''::text)
) 
 * 
 * 
CREATE TABLE suppaddress
(
  addr_supp_id serial NOT NULL,
  addr_name text DEFAULT ''::text,
  addr_number text NOT NULL,
  addr_comp text DEFAULT ''::text,
  addr_district text DEFAULT ''::text,
  addr_city text DEFAULT ''::text,
  addr_state text DEFAULT ''::text,
  addr_postalcode text DEFAULT ''::text,
  addr_country text DEFAULT ''::text,
  addr_notes text DEFAULT ''::text,
  addr_date_create timestamp without time zone,
  addr_date_change timestamp without time zone,
  CONSTRAINT suppaddress_pkey PRIMARY KEY (addr_supp_id),
  CONSTRAINT suppaddress_addr_name_key UNIQUE (addr_name),
  CONSTRAINT suppaddress_addr_name_check CHECK (addr_name <> ''::text)
)

 */
#endif	/* ADDRESS_H */

