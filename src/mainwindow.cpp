/****************************************************************************
 **
 ** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 ** All rights reserved.
 ** Contact: Nokia Corporation (qt-info@nokia.com)
 **
 ** This file is part of the examples of the Qt Toolkit.
 **
 ** $QT_BEGIN_LICENSE:BSD$
 ** You may use this file under the terms of the BSD license as follows:
 **
 ** "Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are
 ** met:
 **   * Redistributions of source code must retain the above copyright
 **     notice, this list of conditions and the following disclaimer.
 **   * Redistributions in binary form must reproduce the above copyright
 **     notice, this list of conditions and the following disclaimer in
 **     the documentation and/or other materials provided with the
 **     distribution.
 **   * Neither the name of Nokia Corporation and its Subsidiary(-ies) nor
 **     the names of its contributors may be used to endorse or promote
 **     products derived from this software without specific prior written
 **     permission.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 ** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 ** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 ** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 ** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 ** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 ** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 ** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 ** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 ** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 ** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 ** $QT_END_LICENSE$
 **
 ****************************************************************************/

//#include <QtGui/QtGui>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include "mainwindow.h"

class MdiArea : public QMdiArea
{
public:
    MdiArea(QWidget *parent = 0)
        :
            QMdiArea(parent),
            m_pixmap("images/logo.png")
    {}
protected:
    void paintEvent(QPaintEvent *event)
    {
        QMdiArea::paintEvent(event);

        QPainter painter(viewport());

        // Calculate the logo position - the bottom right corner of the mdi area.
        int x = width() - m_pixmap.width();
        int y = height() - m_pixmap.height();
        painter.drawPixmap(x, y, m_pixmap);
    }
private:
    // Store the logo image.
    QPixmap m_pixmap;
};

MainWindow::MainWindow() {
    mdiArea = new MdiArea(this);
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setCentralWidget(mdiArea);

    windowMapper = new QSignalMapper(this);
    connect(windowMapper, SIGNAL(mapped(QWidget*)), this, SLOT(setActiveSubWindow(QWidget*)));

    createActions();
    createMenus();
    createStatusBar();
    // readSettings();

    setWindowTitle(tr("Menu"));
    setUnifiedTitleAndToolBarOnMac(true);
       
}

void MainWindow::closeEvent(QCloseEvent *event) {
    mdiArea->closeAllSubWindows();
    //
    if (mdiArea->currentSubWindow()) {
        event->ignore();
    } else {
        writeSettings();
        event->accept();
    }
}

void MainWindow::newConfig() {
    //Estancia appcommandat
    MngFormConfig *mngfconf = createMdiWinConfig();

    //seta tamanho para janela a ser criada
    mngfconf->setFixedSize(1010, 700);

    //Mostra janela maximizada
    mngfconf->showMaximized();

    mngfconf->setAttribute(Qt::WA_DeleteOnClose);

    //Executa a janela
    mngfconf->show();
}

void MainWindow::newCustomer() {
    //Estancia mngformcustomer
    MngFormCustomer *mngformcust = createMdiCustomer();

    //seta tamanho para janela a ser criada
    mngformcust->setFixedSize(1010, 700);

    //Mostra janela maximizada
    mngformcust->showMaximized();

    //Executa a janela
    mngformcust->show();
}

void MainWindow::newEmployee() {
    //Estancia mngformcustomer
    MngFormEmployee *mngformemp = createMdiEmployee();

    //seta tamanho para janela a ser criada
    mngformemp->setFixedSize(1010, 700);

    //Mostra janela maximizada
    mngformemp->showMaximized();

    //Executa a janela
    mngformemp->show();
}

void MainWindow::newProduct() {
    //Estancia mngformproduct
    MngFormProduct *mngformprod = createMdiProduct();

    //seta tamanho para janela a ser criada
    mngformprod->setFixedSize(1010, 700);

    //Mostra janela maximizada
    mngformprod->showMaximized();

    //Executa a janela
    mngformprod->show();
}

void MainWindow::newStockByProduct() {
    MngFormStockByProduct *mngformstock = createMdiStockByProduct();
    //
    mngformstock->setFixedSize(1010, 700);
    //
    mngformstock->showMaximized();
    //
    mngformstock->show();
    //
}

void MainWindow::newStockByReceiptBill() {
    MngFormStockByNf *mngformstocknf = createMdiStockByReceiptBill();
    //
    mngformstocknf->setFixedSize(1010, 710);
    //
    mngformstocknf->showMaximized();
    //
    mngformstocknf->show();
    //    
}

void MainWindow::newPriceTable() {
    MngFormPriceTable *mngformpricetbl = createMdiPriceTable();
    //
    mngformpricetbl->setFixedSize(1010, 700);
    //
    mngformpricetbl->showMaximized();
    //
    mngformpricetbl->show();
    //  
}

void MainWindow::newPrice() {
    MngFormPrice *mngformprice = createMdiPrice();
    //
    mngformprice->setFixedSize(1010, 700);
    //
    mngformprice->showMaximized();
    //
    mngformprice->show();
    //  
}

void MainWindow::newSystemUser() {
    MngFormUsers *mngformsuser = createMdiSystemUser();
    //
    mngformsuser->setFixedSize(1010, 710);
    //
    mngformsuser->showMaximized();
    //
    mngformsuser->show();
    //   
}

void MainWindow::newUserSales() {
    MngFormSales *mngformusales = createMdiUserSales();
    //
    mngformusales->setFixedSize(1010, 700);
    //
    mngformusales->showMaximized();
    //
    mngformusales->show();
    //   
}

void MainWindow::newUserQuotes() {
    MngFormQuote *mngformuquotes = createMdiUserQuotes();
    //
    mngformuquotes->setFixedSize(1010, 700);
    //
    mngformuquotes->showMaximized();
    //
    mngformuquotes->show();
    //   
}

void MainWindow::newCashReceipt() {
    MngFormReceiptCash *mngformcash = createMdiCashReceipt();
    //
    mngformcash->setFixedSize(1010, 700);
    //
    mngformcash->showMaximized();
    //
    mngformcash->show();
    //   
}

MngFormConfig *MainWindow::createMdiWinConfig() {
    //Estancia AppConfigDb
    MngFormConfig *mngfconf = new MngFormConfig();

    //Adiciona AppConfigDb para uma janela
    mdiArea->addSubWindow(mngfconf);

    return mngfconf;
}

MngFormCustomer *MainWindow::createMdiCustomer() {
    MngFormCustomer *mngfomrcust = new MngFormCustomer();
    //
    mdiArea->addSubWindow(mngfomrcust);
    //
    return mngfomrcust;
}

MngFormEmployee *MainWindow::createMdiEmployee() {
    MngFormEmployee *mngformemp = new MngFormEmployee();
    //
    mdiArea->addSubWindow(mngformemp);
    //
    return mngformemp;
}

MngFormProduct *MainWindow::createMdiProduct() {
    MngFormProduct *mngformprod = new MngFormProduct();
    //
    mdiArea->addSubWindow(mngformprod);
    //
    return mngformprod;
}

MngFormStockByProduct *MainWindow::createMdiStockByProduct() {
    MngFormStockByProduct *mngformstock = new MngFormStockByProduct();
    //
    mdiArea->addSubWindow(mngformstock);
    //
    return mngformstock;
}

MngFormStockByNf *MainWindow::createMdiStockByReceiptBill() {
    MngFormStockByNf *mngformstocknf = new MngFormStockByNf();
    //
    mdiArea->addSubWindow(mngformstocknf);
    //
    return mngformstocknf;
}

MngFormPriceTable *MainWindow::createMdiPriceTable() {
    MngFormPriceTable *mngformpricetbl = new MngFormPriceTable();
    //
    mdiArea->addSubWindow(mngformpricetbl);
    //
    return mngformpricetbl;
}

MngFormPrice *MainWindow::createMdiPrice() {
    MngFormPrice *mngformprice = new MngFormPrice();
    //
    mdiArea->addSubWindow(mngformprice);
    //
    return mngformprice;
}

MngFormUsers *MainWindow::createMdiSystemUser() {
    MngFormUsers *mngformsuser = new MngFormUsers();
    //
    mdiArea->addSubWindow(mngformsuser);
    //
    return mngformsuser;
}

MngFormSales *MainWindow::createMdiUserSales() {
    MngFormSales *mngformusales = new MngFormSales();
    //
    mdiArea->addSubWindow(mngformusales);
    //
    return mngformusales;
}

MngFormQuote *MainWindow::createMdiUserQuotes() {
    MngFormQuote *mngformuquotes = new MngFormQuote();
    //
    mdiArea->addSubWindow(mngformuquotes);
    //
    return mngformuquotes;
}

MngFormReceiptCash *MainWindow::createMdiCashReceipt() {
    MngFormReceiptCash *mngformcashr = new MngFormReceiptCash();
    //
    mdiArea->addSubWindow(mngformcashr);
    //
    return mngformcashr;
}

void MainWindow::about() {
    QMessageBox::about(this, tr("About MDI"),
            tr("The <b>MDI</b> example demonstrates how to write multiple "
            "document interface applications using Qt."));
}

void MainWindow::createActions() {

    newAddCustomer = new QAction(QIcon(":/images/new.png"), tr("Cadastro de &Clientes"), this);
    newAddCustomer->setShortcut(tr("Ctrl+C"));
    newAddCustomer->setStatusTip(tr("Cadastro e Consulta de Clientes"));
    connect(newAddCustomer, SIGNAL(triggered()), this, SLOT(newCustomer()));


    newAddEmployee = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Cadastro de &Funcionários"), this);
    newAddEmployee->setShortcut(tr("Ctrl+N"));
    newAddEmployee->setStatusTip(QString::fromUtf8("Cadastro e Consulta de Funcionários"));
    connect(newAddEmployee, SIGNAL(triggered()), this, SLOT(newEmployee()));

    newAddProduct = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Cadastro de &Produtos"), this);
    newAddProduct->setShortcut(tr("Ctrl+P"));
    newAddProduct->setStatusTip(QString::fromUtf8("Cadastro e Consulta de Produtos"));
    connect(newAddProduct, SIGNAL(triggered()), this, SLOT(newProduct()));


    newAddStockByProduct = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Entrada/Acerto de &Estoque por Produtos"), this);
    newAddStockByProduct->setShortcut(tr("Ctrl+A"));
    newAddStockByProduct->setStatusTip(QString::fromUtf8("Entrada/Acerto de &Estoque por Produtos"));
    connect(newAddStockByProduct, SIGNAL(triggered()), this, SLOT(newStockByProduct()));


    newAddStockByReceiptBill = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Entrada de &Estoque por Nota Fiscal"), this);
    newAddStockByReceiptBill->setShortcut(tr("Ctrl+E"));
    newAddStockByReceiptBill->setStatusTip(QString::fromUtf8("Entrada de &Estoque por Nota Fiscal"));
    connect(newAddStockByReceiptBill, SIGNAL(triggered()), this, SLOT(newStockByReceiptBill()));


    newAddPriceTable = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Criação/Manutenção em &Tabela de Preços"), this);
    newAddPriceTable->setShortcut(tr("Ctrl+T"));
    newAddPriceTable->setStatusTip(QString::fromUtf8("Criação/Manutenção em Tabela de Preços"));
    connect(newAddPriceTable, SIGNAL(triggered()), this, SLOT(newPriceTable()));

    newAddPrice = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("&Manutenção de Preços"), this);
    newAddPrice->setShortcut(tr("Ctrl+M"));
    newAddPrice->setStatusTip(QString::fromUtf8("Manutenção de Preços"));
    connect(newAddPrice, SIGNAL(triggered()), this, SLOT(newPrice()));

    newAddSystemUser = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Criação/Manutenção de &Usuários"), this);
    newAddSystemUser->setShortcut(tr("Ctrl+U"));
    newAddSystemUser->setStatusTip(QString::fromUtf8("Criação/Manutenção de Usuários"));
    connect(newAddSystemUser, SIGNAL(triggered()), this, SLOT(newSystemUser()));

    newAddUserQuotes = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Criação de &Orçamento"), this);
    newAddUserQuotes->setShortcut(tr("Ctrl+O"));
    newAddUserQuotes->setStatusTip(QString::fromUtf8("Criação de &Orçamento"));
    connect(newAddUserQuotes, SIGNAL(triggered()), this, SLOT(newUserQuotes()));


    newAddUserSales = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Criação de &Vendas"), this);
    newAddUserSales->setShortcut(tr("Ctrl+V"));
    newAddUserSales->setStatusTip(QString::fromUtf8("Criação de &Vendas"));
    connect(newAddUserSales, SIGNAL(triggered()), this, SLOT(newUserSales()));

    newAddCashReceipt = new QAction(QIcon(":/images/new.png"), QString::fromUtf8("Pa&gamento de Vendas"), this);
    newAddCashReceipt->setShortcut(tr("Ctrl+g"));
    newAddCashReceipt->setStatusTip(QString::fromUtf8("Pa&gamento de Vendas"));
    connect(newAddCashReceipt, SIGNAL(triggered()), this, SLOT(newCashReceipt()));

    newAddConfig = new QAction(QIcon(":iconmenu"), QString::fromUtf8("Configuração de base de dados (PostgreSQL)"), this);
    newAddConfig->setStatusTip(QString::fromUtf8("Configuração de base de dados (PostgreSQL)"));
    connect(newAddConfig, SIGNAL(triggered()), this, SLOT(newConfig()));


    //! [0]
    exitAct = new QAction(tr("E&xit"), this);
    exitAct->setShortcuts(QKeySequence::Quit);
    exitAct->setStatusTip(tr("Exit the application"));
    connect(exitAct, SIGNAL(triggered()), qApp, SLOT(closeAllWindows()));
    //! [0]

    closeAct = new QAction(tr("Fe&cha"), this);
    closeAct->setStatusTip(tr("Fecha janela ativa"));
    connect(closeAct, SIGNAL(triggered()),
            mdiArea, SLOT(closeActiveSubWindow()));

    closeAllAct = new QAction(tr("Fecha &Todas"), this);
    closeAllAct->setStatusTip(tr("Fecha todas janelas"));
    connect(closeAllAct, SIGNAL(triggered()),
            mdiArea, SLOT(closeAllSubWindows()));

    tileAct = new QAction(tr("&Tile"), this);
    tileAct->setStatusTip(tr("Tile the windows"));
    connect(tileAct, SIGNAL(triggered()), mdiArea, SLOT(tileSubWindows()));

    cascadeAct = new QAction(tr("&Cascade"), this);
    cascadeAct->setStatusTip(tr("Cascade the windows"));
    connect(cascadeAct, SIGNAL(triggered()), mdiArea, SLOT(cascadeSubWindows()));

    nextAct = new QAction(tr("Ne&xt"), this);
    nextAct->setShortcuts(QKeySequence::NextChild);
    nextAct->setStatusTip(tr("Move the focus to the next window"));
    connect(nextAct, SIGNAL(triggered()),
            mdiArea, SLOT(activateNextSubWindow()));

    previousAct = new QAction(tr("Pre&vious"), this);
    previousAct->setShortcuts(QKeySequence::PreviousChild);
    previousAct->setStatusTip(tr("Move the focus to the previous "
            "window"));
    connect(previousAct, SIGNAL(triggered()),
            mdiArea, SLOT(activatePreviousSubWindow()));

    separatorAct = new QAction(this);
    separatorAct->setSeparator(true);

    aboutAct = new QAction(tr("&Sobre"), this);
    aboutAct->setStatusTip(tr("Sobre a Aplicação"));
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction(tr("Sobre &Qt"), this);
    aboutQtAct->setStatusTip(tr("Mostra sobre Qt library's"));
    connect(aboutQtAct, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

void MainWindow::createMenus() {
    fileMenu = menuBar()->addMenu(tr("&Menu"));
    fileMenu->addAction(newAddCustomer);
    fileMenu->addAction(newAddEmployee);
    //    fileMenu->addAction(newAddProduct);
    fileMenu->addSeparator();

    fileMenu->addAction(newAddStockByProduct);
    fileMenu->addAction(newAddStockByReceiptBill);
    fileMenu->addSeparator();

    fileMenu->addAction(newAddPriceTable);
    fileMenu->addAction(newAddPrice);
    fileMenu->addSeparator();

    fileMenu->addAction(newAddSystemUser);
    fileMenu->addSeparator();

    fileMenu->addAction(newAddUserQuotes);
    fileMenu->addAction(newAddUserSales);

    fileMenu->addSeparator();

    fileMenu->addAction(newAddCashReceipt);

    fileMenu->addSeparator();

    //
    //
    QAction *action = fileMenu->addAction(QString::fromUtf8("Muda layout de direção"));
    connect(action, SIGNAL(triggered()), this, SLOT(switchLayoutDirection()));
    fileMenu->addAction(exitAct);

    menuBar()->addSeparator();

    fileMenuProduct = menuBar()->addMenu(QString::fromUtf8("&Produtos"));
    fileMenuProduct->addAction(newAddProduct);


    fileMenuConf = menuBar()->addMenu(QString::fromUtf8("&Configuração"));
    fileMenuConf->addAction(newAddConfig);

    menuBar()->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Ajuda"));
    helpMenu->addAction(aboutAct);
    helpMenu->addAction(aboutQtAct);
}

void MainWindow::createStatusBar() {
    statusBar()->showMessage(tr("Ready"));
}

void MainWindow::readSettings() {
    QSettings settings("Trolltech", "MDI Example");
    QPoint pos = settings.value("pos", QPoint(200, 200)).toPoint();
    QSize size = settings.value("size", QSize(400, 400)).toSize();
    move(pos);
    resize(size);
}

void MainWindow::writeSettings() {
    QSettings settings("Trolltech", "MDI Example");
    settings.setValue("pos", pos());
    settings.setValue("size", size());
}

void MainWindow::switchLayoutDirection() {
    if (layoutDirection() == Qt::LeftToRight)
        qApp->setLayoutDirection(Qt::RightToLeft);
    else
        qApp->setLayoutDirection(Qt::LeftToRight);
}

void MainWindow::setActiveSubWindow(QWidget *window) {
    if (!window)
        return;
    mdiArea->setActiveSubWindow(qobject_cast<QMdiSubWindow *>(window));
}
