#include "Util.h"
#include <qt5/QtSql/QSqlRecord>
#include <qt5/QtSql/QSqlQuery>
#include <QtCore/QCoreApplication>

/**
 * Get Colum number for table, by name
 * past
 * @param query
 * @param str
 * @return 
 */
int getColNumberToStr(const QSqlQuery& query, QString str) {
    return query.record().indexOf(str);
}

/**
 * Function for get Actual Date
 * @return 
 */
QString getDateTime() {
    //
    QDateTime dateTime = QDateTime::currentDateTime();
    int day = dateTime.date().day();
    int mth = dateTime.date().month();
    int year = dateTime.date().year();

    QTime hora = dateTime.time();

    //
    QString str_time = QString().number(day) + "-" + QString().number(mth) + "-" + QString().number(year) + " " + hora.toString();

    return str_time;
}

/**
 * Method to change character 
 * with accent to unaccent
 * @param str
 * @return 
 */
QString unaccent(QString str) {
    const char tA[10] = {192, 193, 194, 195, 196, 224, 225, 226, 227, 228}; //À, Á, Â, Ã, Ä, à, á, â, ã, ä 
    //
    const char tE[8] = {200, 201, 202, 203, 232, 233, 234, 235}; //È, É, Ê, Ë, è, é, ê, ë 
    //
    const char tI[4] = {204, 205, 236, 237}; //Ì, Í, ì, í 
    //
    const char tO[10] = {210, 211, 212, 213, 214, 242, 243, 244, 245, 246}; //Ò, Ó, Ô, Õ, Ö, ò, ó, ô, õ, ö 
    //
    const char tU[8] = {217, 218, 219, 220, 249, 250, 251, 252}; //Ù, Ú, Û, Ü, ù, ú, û, ü 
    //
    const char tC[2] = {199, 231}; //Ç, ç 


    for (unsigned int j = 0; j < sizeof (tA); j++) {
        if (tA[j] == str[j])
            qDebug() << "Encontrou.... Oba..." << tA[j] << str[j] << endl;
        str.replace(tA[j], "A");
    }
    
    for (unsigned int j = 0; j < sizeof (tE); j++) {      
        qDebug() << tE[j] << str[j] << endl; 
        str.replace(tE[j], "E");
    }
    
    for (unsigned int j = 0; j < sizeof (tI); j++) str.replace(tI[j], "I");
    for (unsigned int j = 0; j < sizeof (tO); j++) str.replace(tO[j], "O");
    for (unsigned int j = 0; j < sizeof (tU); j++) str.replace(tU[j], "U");
    for (unsigned int j = 0; j < sizeof (tC); j++) str.replace(tC[j], "C");
    //
    return str;
}
