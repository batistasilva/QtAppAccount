/* 
 * File:   WSClient.cpp
 * Author: batista
 * 
 * Created on 15 de Agosto de 2013, 13:20
 */

#include <qxmlstream.h>

#include "WSClient.h"

WSClient::WSClient() {
    postcode = new PostalCode();
    addr = new Address();
    nam = new QNetworkAccessManager();
}

WSClient::~WSClient() {
}

/**
 * Methos for search postalcode from 
 * Site from a WebService.
 * Faixa de Ceps em 19/08/2013
 * Do Estado de Sao Paulo de 01000-000 a 19999-999 
 * Faixa da Cidade de São Paulo 01000-001 a 05999-999 e 08000-000 a 08499-999   
 * @param postcold
 * @return 
 */
void WSClient::ReqPostalCode(QtSoapHttpTransport &http, QString postcold) {
    qDebug() << "\nPesquisando dados!!!" << postcold << endl;

    QtSoapMessage request;
    // request.setMethod("http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do?Metodo=listaLogradouro&CEP=" + postcold.trimmed() + "&TipoConsulta=cep");
    request.setMethod("GetCEP", "http://tempuri.org/");
    request.addMethodArgument("cep", "", postcold.trimmed());
    //
    http.setHost("www.visaojuridica.net");
    http.setAction("http://tempuri.org/GetCEP");
    http.submitRequest(request, "/WebService.asmx");
    //
}

/**
 *http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do
 *?UF=SP
 *&Localidade=S%E3o+Paulo
 *&Tipo=Avenida
 *&Logradouro=Paulista
 *&Numero=&cfm=1
 *&Metodo=listaLogradouro
 *&TipoConsulta=logradouro"
 *
 *@brief WSClient::doHttpGetPostalCode
 * @return
 */
void WSClient::doHttpGetPostalCode() {
    QString url = "http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do"
            "?UF=" + postcode->GetState() +
            "&Localidade=" + postcode->GetCity() +
            "&Tipo=" + postcode->GetTypeStreet() +
            "&Logradouro=" + postcode->GetStreet() +
            "&Numero=" + postcode->GetNumberStreet() +
            "&cfm=1&Metodo=listaLogradouro&TipoConsulta=logradouro";
    //
    QUrl urlget(url);
    //
    // urlget = urlget.toEncoded();
    //
    qDebug() << "\nExecutando Metodo Get para:..." << urlget.toString() << endl;
    //

    nam->get(QNetworkRequest(urlget));
    //
}

/**
 * http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do
 * ?CEP=03651970
 * &Metodo=listaLogradouro
 * &TipoConsulta=cep
 * &StartRow=1
 * &EndRow=10
 */
void WSClient::doHttpGetLogradouroByPostalCode() {
    QString url = "http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do"
            "?CEP=" + postcode->GetPostalcode() +
            "&Metodo=listaLogradouro&TipoConsulta=cep";
    //
    QUrl urlget(url);
    //
    // urlget = urlget.toEncoded();
    //
    qDebug() << "\nExecutando Metodo Get para:..." << urlget.toString() << endl;
    //

    nam->get(QNetworkRequest(urlget));
    //    
}

/**
 *http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do
 *?UF=SP
 *&Localidade=S%E3o+Paulo
 *&Tipo=Avenida
 *&Logradouro=Paulista
 *&Numero=&cfm=1
 *&Metodo=listaLogradouro
 *&TipoConsulta=logradouro"
 *
 *@brief WSClient::doHttpPostPostalCode
 * @return
 */
void WSClient::doHttpPostPostalCode() {
    QByteArray postData;
    QString data;
    QString url = "http://www.buscacep.correios.com.br/servicos/dnec/consultaLogradouroAction.do";
    //
    data = "?UF=" + postcode->GetState() +
            "&Localidade=" + postcode->GetCity() +
            "&Tipo=" + postcode->GetTypeStreet() +
            "&Logradouro=" + postcode->GetStreet() +
            "&Numero=" + postcode->GetNumberStreet() +
            "&cfm=1&Metodo=listaLogradouro&TipoConsulta=logradouro";

    postData.append(data.toLatin1());
    //
    nam->post(QNetworkRequest(QUrl(url)), postData);
}

/*
  URL: http://viacep.com.br/ws/01001-000/xml/


            <xmlcep>
              <cep>01001-000</cep>
              <logradouro>Praça da Sé - lado ímpar </logradouro>
              <bairro>Sé</bairro>
              <localidade>São Paulo</localidade>
              <uf>SP</uf>
              <ibge>3550308</ibge>
            </xmlcep>
            
 */

/**
 * Method responsable for get response for http WebService
 * for PostalCode
 * @param http
 * @return Address
 */
Address * WSClient::ResPostalCode(QtSoapHttpTransport &http) {
    addr = new Address();
    //
    qDebug() << "Verificando dados!!!" << endl;

    const QtSoapMessage &message = http.getResponse();
    //
    if (message.isFault()) {
        qDebug("Error: %s", qPrintable(message.faultString().toString()));
    }
    //
    qDebug() << message.returnValue().toString();
    //

    QXmlStreamReader myreader(message.returnValue().toString());
    //

    //
    runPopulatAddressFromXml(myreader);

    return addr;
}

/**
 * Method for read xmlstr for entity Address
 * @param xmlstr
 */
void WSClient::runPopulatAddressFromXml(QXmlStreamReader &reader) {

    reader.readNext();

    while (!reader.atEnd()) {
        //
        if (reader.name() == "Table") {
            qDebug() << "ENCONTROU <TABLE>, ENTRANDO............readBook Name: " << reader.name().toString();
            readEntryElement(reader);
            reader.readNext();
        } else {
            reader.readNext(); //Goes to next to see if it known
            //reader.raiseError(QObject::tr("Not a bookindex file"));
        }
        //
    }

    if (reader.hasError()) {
        std::cerr << "Error: Failed to parse file "
                << qPrintable(reader.errorString()) << std::endl;
    }

}

void WSClient::readEntryElement(QXmlStreamReader &reader) {
    QString vcodret, vretorn, vname, vlocal, vdistrict, vzipcode,
            vstate, vtype, vcomplement, vcodcity, vcity, vufcity, vzipcity;

    reader.readNext();
    while (!reader.atEnd()) {
        if (reader.isEndElement()) {
            reader.readNext();
            break;
        }

        if (reader.isStartElement()) {

            if (reader.name() == "CODIGO_RETORNO") {
                // 
                vcodret = reader.readElementText().trimmed();
                qDebug() << "\nCodigo de Retorno.....:" << vcodret;

                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "RETORNO") {
                //
                vretorn = reader.readElementText().trimmed();
                qDebug() << "Retorno.....:" << vretorn;

                //
                if (reader.isEndElement())
                    reader.readNext();
                // //
            } else if (reader.name() == "NOME") {
                //
                vname = reader.readElementText().trimmed();
                qDebug() << "Nome.....:" << vname;

                //
                if (reader.isEndElement())
                    reader.readNext();
                //                
            } else if (reader.name() == "LOCAL") {
                //
                vlocal = reader.readElementText().trimmed();
                qDebug() << "Local.....:" << vlocal;

                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "BAIRRO") {
                //
                vdistrict = reader.readElementText().trimmed();
                qDebug() << "Bairro.....:" << vdistrict;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "CEP") {
                //
                vzipcode = reader.readElementText().trimmed();
                qDebug() << "Cep.....:" << vzipcode;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "UF") {
                //
                vstate = reader.readElementText().trimmed();
                qDebug() << "Uf.....:" << vstate;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "TIPO") {
                //
                vtype = reader.readElementText().trimmed();
                qDebug() << "Tipo.....:" << vtype;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "COMPLEMENTO") {
                //
                vcomplement = reader.readElementText().trimmed();
                qDebug() << "Complemento.....:" << vcomplement;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //                
            } else if (reader.name() == "NCODIGO_CIDADE") {
                //
                vcodcity = reader.readElementText().trimmed();
                qDebug() << "NCODIGO_CIDADE.....:" << vcodcity;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "NNOME_CIDADE") {
                //
                vcity = reader.readElementText().trimmed();
                qDebug() << "NNOME_CIDADE.....:" << vcity;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "NCIDADE_UF") {
                //
                vufcity = reader.readElementText().trimmed();
                qDebug() << "NCIDADE_UF.....:" << vufcity;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else if (reader.name() == "NCEP") {
                //
                vzipcity = reader.readElementText().trimmed();
                qDebug() << "NCEP.....:" << vzipcity;
                //
                if (reader.isEndElement())
                    reader.readNext();
                //
            } else {
                skipUnknownElement(reader);
            }
        } else {
            reader.readNext();
        }
    }
    //
    qDebug() << "\nCodigo de Retorno.....:" << vcodret << endl;
    //
    if (vcodret.toInt() == 0) {
        addr->setAddrAddress(vname.toUpper());
        //
        addr->setAddrCity(vcity.toUpper());
        //
        addr->setAddrDistrict(vdistrict.toUpper());
        //
        addr->setAddrPostalCode(vzipcity.toUpper());
        //
        addr->setAddrState(vstate.toUpper());
        //
        addr->setAddrComp(vcomplement.toUpper());
        //
    }

}

void WSClient::readPageElement(QXmlStreamReader & reader) {
    QString page = reader.readElementText();

    if (reader.isEndElement())
        reader.readNext();

    qDebug() << "readPage Element: " << page;
    //Imprimir page
}

void WSClient::skipUnknownElement(QXmlStreamReader & reader) {
    //
    qDebug() << "Valor em Skip: " << reader.name().toString();
    //
    reader.readNext();
    while (!reader.atEnd()) {
        if (reader.isEndElement()) {
            reader.readNext();
            break;
        }

        if (reader.isStartElement()) {
            qDebug() << "Valor em Skip: " << reader.attributes().value("term").toString();
            qDebug() << "Valor em Skip Name: " << reader.name().toString();
            skipUnknownElement(reader);
        } else {
            reader.readNext();
        }
    }
}

/**
 * Method for read data for http, and will put it in Postalcode list
 * to return
 * @param bytes
 * @return 
 */

/**
 * Method for get address by postalcode
 * @param bytes
 * @return 
 */

