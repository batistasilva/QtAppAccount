/* 
 * File:   ShowMsg.h
 * Author: batista
 *
 * Created on 8 de Março de 2013, 20:45
 */

#ifndef SHOWMSG_H
#define	SHOWMSG_H

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <QtGui>
#include <QObject>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <QString>
#include <QList>

#define COLOR_BLACK     0
#define COLOR_RED       1
#define COLOR_GREEN     2
#define COLOR_YELLOW    3
#define COLOR_BLUE      4
#define COLOR_PINK      5
#define COLOR_CIANO     6
#define COLOR_WHITE     7
#define END_COLOR       8

#define FG_BLACK       "\033[02;30m"
#define FG_RED         "\033[02;31m"
#define FG_GREEN       "\033[02;32m"
#define FG_YELLOW      "\033[02;33m"
#define FG_BLUE        "\033[02;34m"
#define FG_MAGENTA     "\033[02;35m"
#define FG_CIANO       "\033[02;36m"
#define FG_WHITE       "\033[02;37m"
//
#define BG_BLACK       "\033[02;40m"
#define BG_RED         "\033[02;41m"
#define BG_GREEN       "\033[02;42m"
#define BG_YELLOW      "\033[02;43m"
#define BG_BLUE        "\033[02;44m"
#define BG_MAGENTA     "\033[02;45m"
#define BG_CIANO       "\033[02;46m"
#define BG_WHITE       "\033[02;47m"

#define END         "\033[0m"

#define INFO        "info"
#define WARN        "warn"
#define ERROR       "error"

/*
{attr} is one of following

        0	Reset All Attributes (return to normal mode)
        1	Bright (Usually turns on BOLD)
        2 	Dim
        3	Underline
        5	Blink
        7 	Reverse
        8	Hidden

{fg} is one of the following

        30	Black
        31	Red
        32	Green
        33	Yellow
        34	Blue
        35	Magenta
        36	Cyan
        37	White

{bg} is one of the following

        40	Black
        41	Red
        42	Green
        43	Yellow
        44	Blue
        45	Magenta
        46	Cyan
        47	White

 */

using namespace std;
using std::string;

class QMessageBox;

struct MsgTrans {
    int typemsg;
    QString msg;
};

class ShowMsg {
public:
    ShowMsg();
    virtual ~ShowMsg();
    //

    void ShowMessage(QString message, int first_color, int second_color);
    void ShowGuiMessage(QString msgtype, QString msgtitle, QString message, QString style);
    int ShowGuiQuestion(QMessageBox &qmsgb, QList<MsgTrans> maplist); //, QMap<int, QString> map
   
    MsgTrans getMsgTrans(int numbt, const QString msg);
    //
private:
    QMessageBox msgBox;
    //



};

#endif	/* SHOWMSG_H */

