#include "mngforms/MngFormCategory.h"
#include "IUs/ui_MngFormCategory.h"

MngFormCategory::MngFormCategory(QWidget *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    category = new ProductCategory();
    //
    catmodelsch = new QSqlQueryModel;
    //
    catmodeltbl = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //
    connect(TButtonSaveCategory, SIGNAL(clicked()), this, SLOT(runAddCategory()));
    connect(TButtonRemoveCategory, SIGNAL(clicked()), this, SLOT(runRemoveCategory()));
    connect(CBoxCodeCategory, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteCategoryCode()));
    connect(LEditNameCategory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditShortNameCategory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitCategory, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanCategory, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewCategory->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeCategory(const QItemSelection &, const QItemSelection &)));

}

MngFormCategory::~MngFormCategory() {
   // delete ui;
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * @param 
 * @param 
 */
void MngFormCategory::runLoadToChangeCategory(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varCode, varName, varShortName, varActive;
    //get the text of the selected item

    const QModelIndex index = TableViewCategory->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = catmodeltbl->index(index.row(), 0, QModelIndex());
    varId = catmodeltbl->data(seekRoot, Qt::DisplayRole);


    seekRoot = catmodeltbl->index(index.row(), 1, QModelIndex());
    varCode = catmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = catmodeltbl->index(index.row(), 2, QModelIndex());
    varActive = catmodeltbl->data(seekRoot, Qt::DisplayRole);
    
    
    seekRoot = catmodeltbl->index(index.row(), 3, QModelIndex());
    varName = catmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = catmodeltbl->index(index.row(), 4, QModelIndex());
    varShortName = catmodeltbl->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxCodeCategory->clear();
    CBoxCodeCategory->addItem(varCode.toString());
    LEditIDCategory->setText(varId.toString());
    LEditNameCategory->setText(varName.toString());
    LEditShortNameCategory->setText(varShortName.toString());
    CheckBoxCategoryStatusActive->setChecked(varActive.toBool());

    enableFillFormForChange();

}

/**
 * Method for add new Factory for 
 * data base
 */
void MngFormCategory::runAddCategory() {

    int item_id;

    category = new ProductCategory();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (CBoxCodeCategory->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = category->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            category->setCatId(item_id);

            category->setCatCode(CBoxCodeCategory->currentText());
            category->setCatDescrip(LEditNameCategory->text());
            category->setCatShortDescrip(LEditShortNameCategory->text());
            category->setCatStatus(CheckBoxCategoryStatusActive->isChecked());
            //
            if (category->addNewCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                //
                category = new ProductCategory();
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

            qDebug() << "\n\nID: " << LEditIDCategory->text().toInt() << endl;

            //
            category->setCatId(LEditIDCategory->text().toInt());
            category->setCatCode(CBoxCodeCategory->currentText());
            category->setCatDescrip(LEditNameCategory->text());
            category->setCatShortDescrip(LEditShortNameCategory->text());
            category->setCatStatus(CheckBoxCategoryStatusActive->isChecked());
            //
            if (category->updateCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                //
                category = new ProductCategory();
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
void MngFormCategory::runRemoveCategory() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDCategory->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover a Categoria..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            category->setCatId(LEditIDCategory->text().toInt());

            if (category->removeCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                category = new ProductCategory();
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
void MngFormCategory::runAutoCompleteCategoryCode() {
    category = new ProductCategory();

    //
    catmodelsch->setQuery("SELECT cat_code FROM category ORDER BY cat_code");

    completer = new QCompleter(catmodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxCodeCategory->setCompleter(completer);
    //
    TButtonCleanCategory->setEnabled(!CBoxCodeCategory->currentText().isEmpty());

}

/**
 * Method for populate table view with 
 * all actual factorys 
 */
void MngFormCategory::populateTableView() {

    int col = 0;
    numbers << "Id" << "Código" <<"Status" << "Nome Completo" << "Nome Curto" << "Data Inc." << "Data Alt.";

    catmodeltbl->setQuery("SELECT * FROM category ORDER BY cat_code");
    //

    foreach(QString name, numbers) {
        catmodeltbl->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    //
    TableViewCategory->setModel(catmodeltbl);

    TableViewCategory->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewCategory->setDragEnabled(true);
    TableViewCategory->setAcceptDrops(true);
    TableViewCategory->setDropIndicatorShown(true);
    //
    TableViewCategory->setColumnWidth(0, 40);
    TableViewCategory->setColumnWidth(1, 60);
    TableViewCategory->setColumnWidth(2, 60);
    TableViewCategory->setColumnWidth(3, 185);
    TableViewCategory->setColumnWidth(4, 100);
    TableViewCategory->setColumnWidth(5, 100);
    TableViewCategory->setColumnWidth(6, 100);
    //
    TableViewCategory->verticalHeader()->hide();
    //TableViewItemFactory->horizontalScrollBar()->hide();
    TableViewCategory->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewCategory->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewCategory->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormCategory::runValidFillInForm() {
    TButtonSaveCategory->setEnabled(
            !CBoxCodeCategory->currentText().isEmpty() &&
            !LEditNameCategory->text().isEmpty() &&
            !LEditShortNameCategory->text().isEmpty());
    //
    TButtonCleanCategory->setEnabled((!CBoxCodeCategory->currentText().isEmpty() 
    || !LEditNameCategory->text().isEmpty() 
    || !LEditShortNameCategory->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormCategory::enableFillFormForAdd() {
    //
    TButtonSaveCategory->setEnabled(false);
    TButtonRemoveCategory->setEnabled(false);
    CBoxCodeCategory->setEnabled(true);
    LEditNameCategory->setEnabled(true);
    LEditShortNameCategory->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormCategory::enableFillFormForChange() {
    //
    TButtonSaveCategory->setEnabled(false);
    TButtonRemoveCategory->setEnabled(true);
    CBoxCodeCategory->setEnabled(false);
    LEditNameCategory->setEnabled(true);
    LEditShortNameCategory->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormCategory::disableFillForm() {
    //
    CBoxCodeCategory->setEnabled(false);
    CBoxCodeCategory->addItem("");
    CBoxCodeCategory->clear();
    //
    LEditNameCategory->setEnabled(false);
    LEditNameCategory->clear();
    //
    LEditShortNameCategory->setEnabled(false);
    LEditShortNameCategory->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormCategory::runCleanForm() {
    //
    LEditIDCategory->clear();
    //
    CBoxCodeCategory->addItem("");
    CBoxCodeCategory->clear();
    //CBoxCodeFactory->clearEditText();

    //
    //TEditNameFactory->setEnabled(false);
    LEditNameCategory->clear();
    //
    //TEditShortNameFactory->setEnabled(false);
    LEditShortNameCategory->clear();
    //
    CheckBoxCategoryStatusActive->setChecked(false);
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormCategory::runExitWin() {
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


