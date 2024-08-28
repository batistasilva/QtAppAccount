/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/*
 * File:   AppAccount.cpp
 * Author: batista
 *
 * Created on 6 de Maio de 2013, 09:31
 */
#include <QApplication>
#include <QCommonStyle>
#include <QStyle>

//#include <QWidget>
#include <QPalette>
//#include <qwidget.h>
#include "src/mainwindow.h"
#include "Util/DbConn.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    Q_INIT_RESOURCE(images);

    QApplication app(argc, argv);
    //
    //app.setStyle("QWindowsStyle");
    //app.setStyle("QCDEStyle");
    //app.setStyle("QPlastiqueStyle");
    //app.setStyle("QGtkStyle");
    //app.setStyle("QMotifStyle");
    //app.setStyle("QCleanlooksStyle");
    //
    // MainWindow mainWin;
    // mainWin.show();
    // mainWin.setMinimumSize(1024, 700);
    //
    //mainWin.setFixedSize(1024, 768);
    //mainWin.setFixedSize(1024, 768);
    DbConn * mdbc;
    mdbc = new DbConn();

    QString erro_log = "Nao foi possivel Gravar o Arquivo...";

   // mdbc->dir->setFolder_write("/home/system/WorkSpace/QtProjects/QtAppAccount/Logs/");
    //
   // mdbc->dir->CreateLogFile("LOGPGSQL", erro_log);


     mdbc->openConnInPGree();


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
