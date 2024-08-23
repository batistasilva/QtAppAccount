/* 
 * File:   MComboBox.h
 * Author: batista
 *
 * Created on 1 de Outubro de 2013, 08:19
 */

#ifndef MCOMBOBOX_H
#define	MCOMBOBOX_H
#include <QObject>
//#include <QApplication>
#include <QtUiTools/QUiLoader>
//#include <QApplication>
#include <QtWidgets/QWidget>
#include <QFile>
//#include <QMainWindow>
//#include <QLineEdit>
#include <QtGui>
#include <QtScript/QtScript>
#include <QtScript/QScriptEngine>
#include <QtCore/QObject>
#include <QtScript/QScriptable>
#include <QtScript/QScriptValue>
#include <QtScript/QScriptEngine>
#include <QDebug>
#include <QObject>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QAbstractItemView>

#include <QString>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include <QAbstractItemModel>

class QScriptEngine;
class QScriptClass;
class QUiLoaderPrivate;
class QUiLoader;

class MComboBox : public QComboBox {
     Q_OBJECT
public:
    MComboBox(QWidget * parent = 0);
    virtual ~MComboBox();
   // void showPopup();
   // void hidePopup();
    void addButton(const QString & text); 

    
public slots:
    void runAppScript();
    
private:
   // QPushButton *bt_;
    //QAbstractItemView *view;
    QWidget *vp;
    QScriptEngine engine;
    QUiLoader loader;
};

#endif	/* MCOMBOBOX_H */

