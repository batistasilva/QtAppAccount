/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   MainAppAccount.cpp
 * Author: batista
 *
 * Created on 31 de Janeiro de 2017, 21:01
 */
/*
#include <QApplication>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here

    return app.exec();
}
*/

/*
 * File:   AppAccount.cpp
 * Author: batista
 *
 * Created on 6 de Maio de 2013, 09:31
 */
#include <QApplication>
//#include <QApplication>
#include <QCommonStyle>
//#include <qwindowsstyle.h>
//#include <qmacstyle_mac.h>
//#include <QMacStyle>
//#include <qcdestyle.h>
//#include <qplastiquestyle.h>
//#include <qgtkstyle.h>
//#include <qwindowsvistastyle.h>
//#include <QtWidgets/QWindowsVistaStyle>
//#include <qcleanlooksstyle.h>
#include <QWidget>
#include <QPalette>
//#include <qwidget.h>
#include "src/mainwindow.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    Q_INIT_RESOURCE(images);

    QApplication app(argc, argv);
    //
    //app.setStyle(new QWindowsStyle());
    //app.setStyle(new QCDEStyle);
    //app.setStyle(new QPlastiqueStyle());
    //app.setStyle(new QGtkStyle());
    //app.setStyle(new QMotifStyle);
//    app.setStyle(new QCleanlooksStyle());
    //
    MainWindow mainWin;
    mainWin.show();
    mainWin.setMinimumSize(1024, 700);
    



    //mainWin.setFixedSize(1024, 768);
    //mainWin.setFixedSize(1024, 768);

    return app.exec();
}

/*
int main(int argc, char *argv[]) {
    // initialize resources, if needed
    Q_INIT_RESOURCE(images);

    QApplication app(argc, argv);
    //
    //app.setStyle(new QWindowsStyle());
    //app.setStyle(new QCDEStyle);
    //app.setStyle(new QPlastiqueStyle());
    //app.setStyle(new QGtkStyle());
    //app.setStyle(new QMotifStyle);
    //   app.setStyle(new QCleanlooksStyle());    
    //
    //    MainWindow mainWin;
    //   mainWin.show();
    //   mainWin.setFixedSize(1024, 768);
    ProductCategory *prodcat;

    prodcat = new ProductCategory();

    ShowMsg *msg = new ShowMsg();
    //

    if (prodcat->openConnInPGree())
        msg->ShowMessage("Executando Main!!! ", COLOR_BLUE, COLOR_PINK);

    foreach(ProductCategory *prodct, prodcat->getAllCategory()) {
        msg->ShowMessage("Categorias: " + prodct->GetCategory_code(), COLOR_BLUE, COLOR_PINK);
    }

    //return app.exec();

    return 0;
}

 */