#include "mngforms/MngFormFactory.h"
#include "ui_MngFormFactory.h"
#include "src/Factory.h"

MngFormFactory::MngFormFactory(QDialog *parent) : QDialog(parent)/*, prodfac(0), dbconn(0), facmodel(0)*/ {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    factory = new Factory();
    //
    facmodelsch = new QSqlQueryModel;
    //
    facmodeltbl = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //
    connect(TButtonSaveFactory, SIGNAL(clicked()), this, SLOT(runAddFactory()));
    connect(TButtonRemoveFactory, SIGNAL(clicked()), this, SLOT(runRemoveFactory()));
    connect(CBoxCodeFactory, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteFactoryCode()));
    connect(LEditNameFactory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditShortNameFactory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitFactory, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanFactory, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewItemFactory->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeFactory(const QItemSelection &, const QItemSelection &)));
}

MngFormFactory::~MngFormFactory() {
    // delete ui;
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * @param 
 * @param 
 */
void MngFormFactory::runLoadToChangeFactory(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varCode, varName, varShortName, varActive;
    //get the text of the selected item

    const QModelIndex index = TableViewItemFactory->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = facmodeltbl->index(index.row(), 0, QModelIndex());
    varId = facmodeltbl->data(seekRoot, Qt::DisplayRole);


    seekRoot = facmodeltbl->index(index.row(), 1, QModelIndex());
    varCode = facmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = facmodeltbl->index(index.row(), 2, QModelIndex());
    varName = facmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = facmodeltbl->index(index.row(), 3, QModelIndex());
    varShortName = facmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = facmodeltbl->index(index.row(), 4, QModelIndex());
    varActive = facmodeltbl->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxCodeFactory->clear();
    CBoxCodeFactory->addItem(varCode.toString());
    LEditIDFactory->setText(varId.toString());
    LEditNameFactory->setText(varName.toString());
    LEditShortNameFactory->setText(varShortName.toString());
    CheckBoxFactoryStatusActive->setChecked(varActive.toBool());

    enableFillFormForChange();

}

/**
 * Method for add new Factory for 
 * data base
 */
void MngFormFactory::runAddFactory() {

    int item_id;

    factory = new Factory();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (CBoxCodeFactory->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = factory->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            factory->setFactoryId(item_id);

            factory->setFactoryCode(CBoxCodeFactory->currentText());
            factory->setFactoryDescrip(LEditNameFactory->text());
            factory->setFactoryShortDescrip(LEditShortNameFactory->text());
            factory->setFactoryActive(CheckBoxFactoryStatusActive->isChecked());
            //
            if (factory->addNewFactory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                //
                factory = new Factory();
                //
                populateTableView();
                //
            }
        }
    } else {
        // ShowGuiMessage("info", "Mensagem", "Salvando Alteracao");
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Salvar as Alterações..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            qDebug() << "\n\nID: " << LEditIDFactory->text().toInt() << endl;

            //
            factory->setFactoryId(LEditIDFactory->text().toInt());
            factory->setFactoryCode(CBoxCodeFactory->currentText());
            factory->setFactoryDescrip(LEditNameFactory->text());
            factory->setFactoryShortDescrip(LEditShortNameFactory->text());
            factory->setFactoryActive(CheckBoxFactoryStatusActive->isChecked());
            //
            if (factory->updateFactory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                //
                factory = new Factory();
                //
                populateTableView();
                //   
            }
        }
    }
    //
    runCleanForm();

}

/**
 * Method for Remove a existing Factory
 * selectede from table view.
 */
void MngFormFactory::runRemoveFactory() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDFactory->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover o Fabricante..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            factory->setFactoryId(LEditIDFactory->text().toInt());

            if (factory->removeFactory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                factory = new Factory();
                //
                populateTableView();
                //   
            }
        }
    }
    //
    runCleanForm();
}

/**
 * Method for auto complete field code
 * from form.
 */
void MngFormFactory::runAutoCompleteFactoryCode() {
    factory = new Factory();

    //
    facmodelsch->setQuery("SELECT factory_code FROM factory ORDER BY factory_code");

    completer = new QCompleter(facmodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxCodeFactory->setCompleter(completer);
    //
    TButtonCleanFactory->setEnabled(!CBoxCodeFactory->currentText().isEmpty());

}

/**
 * Method for populate table view with 
 * all actual factorys 
 */
void MngFormFactory::populateTableView() {

    int col = 0;
    numbers << "Id" << "Código" << "Nome Completo" << "Nome Curto" << "Status" << "Data Inc." << "Data Alt.";

    facmodeltbl->setQuery("SELECT * FROM factory ORDER BY factory_code");
    //

    foreach(QString name, numbers) {
        facmodeltbl->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    //
    TableViewItemFactory->setModel(facmodeltbl);

    TableViewItemFactory->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewItemFactory->setDragEnabled(true);
    TableViewItemFactory->setAcceptDrops(true);
    TableViewItemFactory->setDropIndicatorShown(true);
    //
    TableViewItemFactory->setColumnWidth(0, 40);
    TableViewItemFactory->setColumnWidth(1, 60);
    TableViewItemFactory->setColumnWidth(2, 300);
    TableViewItemFactory->setColumnWidth(3, 185);
    TableViewItemFactory->setColumnWidth(4, 100);
    TableViewItemFactory->setColumnWidth(5, 100);
    TableViewItemFactory->setColumnWidth(6, 100);
    //
    TableViewItemFactory->verticalHeader()->hide();
    //TableViewItemFactory->horizontalScrollBar()->hide();
    TableViewItemFactory->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewItemFactory->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewItemFactory->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormFactory::runValidFillInForm() {
    TButtonSaveFactory->setEnabled(
            !CBoxCodeFactory->currentText().isEmpty() &&
            !LEditNameFactory->text().isEmpty() &&
            !LEditShortNameFactory->text().isEmpty());
    //
    TButtonCleanFactory->setEnabled((!CBoxCodeFactory->currentText().isEmpty() || !LEditNameFactory->text().isEmpty() || !LEditShortNameFactory->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormFactory::enableFillFormForAdd() {
    TButtonSaveFactory->setEnabled(false);
    TButtonRemoveFactory->setEnabled(false);
    CBoxCodeFactory->setEnabled(true);
    LEditNameFactory->setEnabled(true);
    LEditShortNameFactory->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormFactory::enableFillFormForChange() {
    TButtonSaveFactory->setEnabled(false);
    TButtonRemoveFactory->setEnabled(true);
    CBoxCodeFactory->setEnabled(false);
    LEditNameFactory->setEnabled(true);
    LEditShortNameFactory->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormFactory::disableFillForm() {
    //
    CBoxCodeFactory->setEnabled(false);
    CBoxCodeFactory->addItem("");
    CBoxCodeFactory->clear();
    //
    LEditNameFactory->setEnabled(false);
    LEditNameFactory->clear();
    //
    LEditShortNameFactory->setEnabled(false);
    LEditShortNameFactory->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormFactory::runCleanForm() {
    //
    LEditIDFactory->clear();
    //
    CBoxCodeFactory->addItem("");
    CBoxCodeFactory->clear();
    //CBoxCodeFactory->clearEditText();

    //
    //TEditNameFactory->setEnabled(false);
    LEditNameFactory->clear();
    //
    //TEditShortNameFactory->setEnabled(false);
    LEditShortNameFactory->clear();
    //
    CheckBoxFactoryStatusActive->setChecked(false);
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormFactory::runExitWin() {
    // qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    this->close(); //tambem funciona
}


/**
 * Method for load a existing Factory
 * selected from table view to form,
 * for it will be changed
 */
/*void MngFormFactory::runLoadCategory() {
    QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    QModelIndexList indexes = selectionModel->selectedRows();
    QVariant varId, varCode, varName, varShortName;
    QModelIndex index, i;
    //
    prodfac = new ProductFactory();

    int row = -1;

    row = TableViewItemFactory->currentIndex().row();

    foreach(index, indexes) {
        i = facmodel->index(row, 0, QModelIndex());
        QVariant varId = facmodel->data(i, Qt::DisplayRole);
        prodfac->setFactoryId(varId.toInt());

        i = facmodel->index(row, 1, QModelIndex());
        varCode = facmodel->data(i, Qt::DisplayRole);
        prodfac->setFactoryCode(varCode.toString());

        i = facmodel->index(row, 2, QModelIndex());
        varName = facmodel->data(i, Qt::DisplayRole);
        prodfac->setFactoryDescrip(varName.toString());

        i = facmodel->index(row, 3, QModelIndex());
        varShortName = facmodel->data(i, Qt::DisplayRole);
        prodfac->setFactoryShortDescrip(varShortName.toString());
    }
    //
    LEditCodeFactory->setText(prodfac->getFactoryCode());
    //
    TEditNameFactory->setText(prodfac->getFactoryDescrip());
    //
    TEditShortNameFactory->setText(prodfac->getFactoryShortDescrip());


    //QString html = index.model()->data(index, Qt::DisplayRole).toString();


    QMessageBox::information(this, tr("No contacts in file"),
            "\n Code: " + prodfac->getFactoryCode() +
            "\n Nome Completo: " + prodfac->getFactoryDescrip() +
            "\n Nome Curto: " + prodfac->getFactoryShortDescrip());
 */
/**
 * Enable edit for fields form
 */
/*   if (!prodfac->getFactoryCode().isEmpty())
       enableFillForm();

}
 */
