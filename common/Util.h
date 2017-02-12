/* 
 * File:   Util.h
 * Author: batista
 *
 * Created on 9 de Agosto de 2013, 16:05
 */

#ifndef UTIL_H
#define	UTIL_H
#include <qt5/QtSql/QSqlRecord>
#include <qt5/QtSql/QSqlQuery>
#include <QString>
#include <QDateTime>
#include <QtGui>
#include <QtCore/QCoreApplication>
//#include <QRegExp>

int getColNumberToStr(const QSqlQuery &query, QString str);
QString getDateTime();
QString unaccent(QString str);


#endif	/* UTIL_H */

