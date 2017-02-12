/* 
 * File:   MComboBox.cpp
 * Author: batista
 * 
 * Created on 1 de Outubro de 2013, 08:19
 * ------------------------------------------------------
 * Libs Required for compile:
 * QT += script
 * CONFIG += uitools
 * contains(QT_CONFIG, scripttools): QT += scripttools
 * ------------------------------------------------------
 */

#include "MComboBox.h"
#include <QAbstractItemView>
#include <qwidget.h>
#include <QtUiTools/QUiLoader>
//contains(QT_CONFIG, scripttools): QT += scripttools   #Para Debug
//CONFIG += uitools                                     #Para QUiLoader
#ifndef QT_NO_SCRIPTTOOLS
//#include <QScriptEngineDebugger>

#endif

MComboBox::MComboBox(QWidget * parent) : QComboBox(parent) {
    //setStyleSheet("QPushButton {text-align:center;color:blue;text-decoration:underline;font-family:arial; background-color:#d4d0c8; }");
    //setEditable(true);
    //setFrame(false);
    //resize(300, size().height()+100);
     //
}

MComboBox::~MComboBox() {
}

/*
void MComboBox::showPopup() {
    QComboBox::showPopup();
    bt_->setVisible(true);
    //move button to right-down corner
    QRect qRect(view()->geometry());
    int iXpos = qRect.width() - bt_->width();
    int iYpos = qRect.height() - bt_->height();
    bt_->move(iXpos, iYpos);
    bt_->setGeometry(QRect(120, 30, 100, 30));

    // QWidget *popup = this->findChild<QFrame*>();
    // popup->move(popup->x(), popup->y() - this->height() - popup->height());
}

void MComboBox::hidePopup() {
    QComboBox::hidePopup();
    bt_->setVisible(false);
}
 */
void MComboBox::addButton(const QString& text) {
    //
    QAbstractItemView *view = this->view();
    vp = qobject_cast<QWidget*>(view->parent());
    //
    QPushButton *bt_ = new QPushButton(text, this->view());
    //bt_->setGeometry(QRect(120, 30, 100, 30));
    view->setFixedHeight(vp->height() + bt_->height() + 10);
    // view->setFixedHeight(view->height() + bt_->height() + 5); 
    //vp->layout()->addWidget(bt_);
    //   
    connect(bt_, SIGNAL(clicked()), this, SLOT(runAppScript()));
}

void MComboBox::runAppScript() {
    //! [0a]

    //! [0a]

#if !defined(QT_NO_SCRIPTTOOLS)
      /*  QScriptEngineDebugger debugger;
        debugger.attachTo(&engine);
        QMainWindow *debugWindow = debugger.standardWindow();
        debugWindow->resize(1024, 640);
       */ 
#endif

    //! [0b]
    QString scriptFileName(":js/calculator.js");
    QFile scriptFile(scriptFileName);
    scriptFile.open(QIODevice::ReadOnly);
    engine.evaluate(scriptFile.readAll(), scriptFileName);
    scriptFile.close();
    //! [0b]

    //! [1]
    QFile uiFile(":js/calculator.ui");
    uiFile.open(QIODevice::ReadOnly);
    QWidget *ui = loader.load(&uiFile);
    uiFile.close();
    //! [1]

    //! [2]
    QScriptValue ctor = engine.evaluate("Calculator");
    QScriptValue scriptUi = engine.newQObject(ui, QScriptEngine::ScriptOwnership);
    QScriptValue calc = ctor.construct(QScriptValueList() << scriptUi);
    //! [2]

#if !defined(QT_NO_SCRIPTTOOLS)
//        QLineEdit *display = ui->findChild<QLineEdit*>("display");
 //       QObject::connect(display, SIGNAL(returnPressed()),
 //               debugWindow, SLOT(show()));
#endif
    //! [3]
    ui->show();

    qDebug() << "Run Script Clicked!!!" << endl;
}