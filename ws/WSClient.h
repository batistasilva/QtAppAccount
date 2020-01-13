/* 
 * File:   WSClient.h
 * Author: batista
 *
 * Created on 15 de Agosto de 2013, 13:20
 */

#ifndef WSCLIENT_H
#define	WSCLIENT_H
#include "src/Address.h"
#include "postalcode.h"
#include "common/Util.h"
//
#include "../qtsoap/src/qtsoap.h"
//#include <QtGui>
#include <QtXml/QtXml>
#include <iostream>
#include <QDebug>
#include <QList>
#include <qglobal.h>
#include <QXmlStreamReader>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QMessageBox>
#include<QByteArray>
#include <QUrl>
#include <QtWebEngine/qtwebengineglobal.h>

class WSClient : private ShowMsg {
public:
    WSClient();
    virtual ~WSClient();
    //

    Address* GetAddr() const {
        return addr;
    }

    void SetAddr(Address* addr) {
        this->addr = addr;
    }

    QNetworkAccessManager* GetNam() const {
        return nam;
    }

    void SetNam(QNetworkAccessManager* nam) {
        this->nam = nam;
    }

    PostalCode* GetPostcode() const {
        return postcode;
    }

    void SetPostcode(PostalCode* postcode) {
        this->postcode = postcode;
    }
    
    //
    /**
     * Methos for search postalcode from 
     * Site from a WebService.
     * @param postcold
     * @return 
     */
    void ReqPostalCode(QtSoapHttpTransport &http, QString postcold);
    void doHttpGetPostalCode();
    void doHttpGetLogradouroByPostalCode();
    void doHttpPostPostalCode();
    //
    Address * ResPostalCode(QtSoapHttpTransport &http);
   // QList<PostalCode*> getResultLogradouroForHttp(QByteArray bytes);
   // PostalCode * getResultPostalCodeForHttp(QByteArray bytes);
    //

private:
    Address * addr;
    PostalCode * postcode;
    //
    void runPopulatAddressFromXml(QXmlStreamReader &reader);
    //void readBookindexElement();
    void readEntryElement(QXmlStreamReader &reader);
    void readPageElement(QXmlStreamReader &reader);
    void skipUnknownElement(QXmlStreamReader &reader);
    //
    QNetworkAccessManager *nam;
};

#endif	/* WSCLIENT_H */

