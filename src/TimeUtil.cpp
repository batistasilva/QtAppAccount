/* 
 * File:   TimeUtil.cpp
 * Author: batista
 * 
 * Created on 8 de Mar�o de 2013, 20:41
 */

#include "src/ShowMsg.h"
#include "TimeUtil.h"

TimeUtil::TimeUtil() {
}

TimeUtil::~TimeUtil() {
}

const char *word_c = "c7";
const char *word_a = "c3";

/**
 * Metodo resposavel por retornar uma data
 * para um formato informado.
 * @param format "%Y-%m-%d %H:%M:%S"
 * @return
 */
QString TimeUtil::getTimeFormat(QString format) {

    time_t now;
    struct tm *ts;
    char buf[80];
    char hora[80];

    // Get the current time
    time(&now);

    //Format and print the time, "ddd yyyy-mm-dd hh:mm:ss zzz"
    ts = localtime(&now); //"%Y-%m-%d %H:%M:%S"
    strftime(buf, sizeof (buf), format.toStdString().c_str(), ts);

    sprintf(hora, "%s", buf); //fu��o getTime usada para pegar a hora
    QString newhora(hora);

    return newhora;
}

void TimeUtil::SetDateStr(QString str_date) {
    this->year = str_date.mid(0, 4);
    this->mth = str_date.mid(5, 2);
    this->day = str_date.mid(8, 2);
    this->mytime = str_date.mid(11, 2);
    this->min = str_date.mid(14, 2);
    this->seg = str_date.mid(17, 2);
}

/**
 * Metodo:getTimeNowInSeg(), retorno a hora atual
 * em segundo, em um long
 */
long TimeUtil::getTimeInSeg() {
    //  PrintMessage("HORA: "+mytime+"-"+min+"-"+seg, COLOR_BLUE, COLOR_GREEN);
    return (atoi(mytime.toStdString().c_str()) * 3600)+(atoi(min.toStdString().c_str()) * 60) + atoi(seg.toStdString().c_str());
}

/**
 * Metodo: getDifBetweenTwoTime(QString time1, QString time2),
 * Responsavel por pegar a diferenca entre dois tempos em
 * segundos, e retornar
 * Exemplo: getDifBetweenTwoTime("08:00:00", "23:59:00")
 */
long TimeUtil::getDifBetweenTwoTime(QString time1, QString time2) {

    long time_long1 = (atoi(time1.mid(0, 2).toStdString().c_str()) * 3600)+
            (atoi(time1.mid(3, 2).toStdString().c_str()) * 60) +
            atoi(time1.mid(6, 2).toStdString().c_str());

    long time_long2 = (atoi(time2.mid(0, 2).toStdString().c_str()) * 3600)+
            (atoi(time2.mid(3, 2).toStdString().c_str()) * 60) +
            atoi(time2.mid(6, 2).toStdString().c_str());


    return (time_long2 - time_long1);
}

QString TimeUtil::QVarDoubleToText(const QVariant &pVariant) {
    if (pVariant.type() == QVariant::Double) {
        int prec = 0;
        if (DEBUG)
            qDebug("formatNumber(%f, %d)", pVariant.toDouble(), prec);
        return QLocale().toString(pVariant.toDouble(), 'f', prec);
    } else
        return pVariant.toString();
}

QString TimeUtil::QDoubleToText(const double pDouble, const int pPrec) {
    int prec = pPrec;

    if (DEBUG)
        qDebug("formatNumber(%f, %d)", pDouble, prec);
    return QLocale().toString(pDouble, 'f', prec);
}

