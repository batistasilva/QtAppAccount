/* 
 * File:   ConfigConn.h
 * Author: batista
 *
 * Created on 20 de Fevereiro de 2013, 08:52
 */

#ifndef CONFIGCONN_H
#define	CONFIGCONN_H
#include <QtGui>
#include <QtXml/QtXml>
#include <QFile>
#include <QXmlStreamReader>
#include <QObject>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include "Util/DataConn.h"

class ConfigConn : public DataConn {
public:
    ConfigConn();
    virtual ~ConfigConn();
    //
    bool readFile(const QString &fileName);
    //
    bool writeFile(const QString &fileName);

private:
    void readMainContentElement(); //ler mãe
    void readChildContentElement(); //ler filhos
    QXmlStreamReader reader;
};

#endif	/* CONFIGCONN_H */

