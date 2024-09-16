/* 
 * File:   TimeUtil.h
 * Author: batista
 *
 * Created on 8 de Mar�o de 2013, 20:41
 */

#ifndef TIMEUTIL_H
#define	TIMEUTIL_H
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sys/time.h>
#include <iostream>
#include <sstream>
#include <unistd.h>
#include <QString>
//#include <QLineEdit>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QLocale>
#include <QMouseEvent>
#include <QValidator>
//#include <QAction>
//#include <QLineEdit>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
//#include <QMessageBox>
#include <QString>

#define DEBUG                 false

//#include "printmessage.h"

using namespace std;
using std::string;

class QValidator;
class TimeUtil {
public:
    TimeUtil();
    virtual ~TimeUtil();
public:
    

    QString getTimeFormat(QString format);
    long getDifBetweenTwoTime(QString time1, QString time2);
    long getTimeInSeg();
    void SetDateStr(QString str_date);
   

    QString QVarDoubleToText(const QVariant &pVariant);

    QString QDoubleToText(const double pDouble, const int pPrec);
    


    QString getDay() const {
        return day;
    }

    void setDay(QString day) {
        this->day = day;
    }

    QString getMin() const {
        return min;
    }

    void setMin(QString min) {
        this->min = min;
    }

    QString getMth() const {
        return mth;
    }

    void setMth(QString mth) {
        this->mth = mth;
    }

    QString getMytime() const {
        return mytime;
    }

    void setMytime(QString mytime) {
        this->mytime = mytime;
    }

    QString getSeg() const {
        return seg;
    }

    void setSeg(QString seg) {
        this->seg = seg;
    }

    QString getYear() const {
        return year;
    }

    void setYear(QString year) {
        this->year = year;
    }

private:
    QString day;
    QString mth;
    QString year;
    QString mytime;
    QString min;
    QString seg;

};

#endif	/* TIMEUTIL_H */

