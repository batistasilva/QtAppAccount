#include "mngforms/MngFormSubCategory.h"
#include "IUs/ui_MngFormSubCategory.h"

MngFormSubCategory::MngFormSubCategory(QWidget *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    subcat = new ProductSubCategory();
    //
    subcatmodelsch = new QSqlQueryModel;
    //
    subcatmodel = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //
    connect(TButtonSaveSubCategory, SIGNAL(clicked()), this, SLOT(runAddSubCategory()));
    connect(TButtonRemoveSubCategory, SIGNAL(clicked()), this, SLOT(runRemoveSubCategory()));
    connect(CBoxCodeSubCategory, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteSubCategoryCode()));
    connect(LEditNameSubCategory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditShortNameSubCategory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitSubCategory, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanSubCategory, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewSubCategory->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeSubCategory(const QItemSelection &, const QItemSelection &)));
    
}

MngFormSubCategory::~MngFormSubCategory()
{
    //delete ui;
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * @param 
 * @param 
 */
void MngFormSubCategory::runLoadToChangeSubCategory(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varCode, varName, varShortName, varActive;
    //get the text of the selected item

    const QModelIndex index = TableViewSubCategory->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = subcatmodel->index(index.row(), 0, QModelIndex());
    varId = subcatmodel->data(seekRoot, Qt::DisplayRole);


    seekRoot = subcatmodel->index(index.row(), 1, QModelIndex());
    varCode = subcatmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = subcatmodel->index(index.row(), 2, QModelIndex());
    varActive = subcatmodel->data(seekRoot, Qt::DisplayRole);
    
    
    seekRoot = subcatmodel->index(index.row(), 3, QModelIndex());
    varName = subcatmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = subcatmodel->index(index.row(), 4, QModelIndex());
    varShortName = subcatmodel->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxCodeSubCategory->clear();
    CBoxCodeSubCategory->addItem(varCode.toString());
    LEditIDSubCategory->setText(varId.toString());
    LEditNameSubCategory->setText(varName.toString());
    LEditShortNameSubCategory->setText(varShortName.toString());
    CheckBoxSubCategoryStatusActive->setChecked(varActive.toBool());

    enableFillFormForChange();

}

/**
 * Method for add new Factory for 
 * data base
 */
void MngFormSubCategory::runAddSubCategory() {

    int item_id;

    subcat = new ProductSubCategory();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (CBoxCodeSubCategory->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = subcat->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            subcat->setSubCatId(item_id);

            subcat->setSubCatCode(CBoxCodeSubCategory->currentText());
            subcat->setSubCatDescrip(LEditNameSubCategory->text());
            subcat->setSubCatShortDescrip(LEditShortNameSubCategory->text());
            subcat->setSubCatStatus(CheckBoxSubCategoryStatusActive->isChecked());
            //
            if (subcat->addNewSubCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                //
                subcat = new ProductSubCategory();
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

            qDebug() << "\n\nID: " << LEditIDSubCategory->text().toInt() << endl;

            //
            subcat->setSubCatId(LEditIDSubCategory->text().toInt());
            subcat->setSubCatCode(CBoxCodeSubCategory->currentText());
            subcat->setSubCatDescrip(LEditNameSubCategory->text());
            subcat->setSubCatShortDescrip(LEditShortNameSubCategory->text());
            subcat->setSubCatStatus(CheckBoxSubCategoryStatusActive->isChecked());
            //
            if (subcat->updateSubCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                //
                subcat = new ProductSubCategory();
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
void MngFormSubCategory::runRemoveSubCategory() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDSubCategory->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover a Sub-Categoria..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            subcat->setSubCatId(LEditIDSubCategory->text().toInt());

            if (subcat->removeSubCategory()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                subcat = new ProductSubCategory();
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
void MngFormSubCategory::runAutoCompleteSubCategoryCode() {
    subcat = new ProductSubCategory();

    //
    subcatmodelsch->setQuery("SELECT subcat_code FROM subcategory ORDER BY subcat_code");

    completer = new QCompleter(subcatmodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxCodeSubCategory->setCompleter(completer);
    //
    TButtonCleanSubCategory->setEnabled(!CBoxCodeSubCategory->currentText().isEmpty());

}

/**
 * Method for populate table view with 
 * all actual factorys 
 */
void MngFormSubCategory::populateTableView() {

    int col = 0;
    numbers << "Id" << "Código" <<"Status" << "Nome Completo" << "Nome Curto" << "Data Inc." << "Data Alt.";

    subcatmodel->setQuery("SELECT * FROM subcategory ORDER BY subcat_code");
    //

    foreach(QString name, numbers) {
        subcatmodel->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    //
    TableViewSubCategory->setModel(subcatmodel);

    TableViewSubCategory->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewSubCategory->setDragEnabled(true);
    TableViewSubCategory->setAcceptDrops(true);
    TableViewSubCategory->setDropIndicatorShown(true);
    //
    TableViewSubCategory->setColumnWidth(0, 40);
    TableViewSubCategory->setColumnWidth(1, 60);
    TableViewSubCategory->setColumnWidth(2, 60);
    TableViewSubCategory->setColumnWidth(3, 185);
    TableViewSubCategory->setColumnWidth(4, 100);
    TableViewSubCategory->setColumnWidth(5, 100);
    TableViewSubCategory->setColumnWidth(6, 100);
    //
    TableViewSubCategory->verticalHeader()->hide();
    //TableViewItemFactory->horizontalScrollBar()->hide();
    TableViewSubCategory->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewSubCategory->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewSubCategory->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormSubCategory::runValidFillInForm() {
    TButtonSaveSubCategory->setEnabled(
            !CBoxCodeSubCategory->currentText().isEmpty() &&
            !LEditNameSubCategory->text().isEmpty() &&
            !LEditShortNameSubCategory->text().isEmpty());
    //
    TButtonCleanSubCategory->setEnabled((!CBoxCodeSubCategory->currentText().isEmpty() 
    || !LEditNameSubCategory->text().isEmpty() 
    || !LEditShortNameSubCategory->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormSubCategory::enableFillFormForAdd() {
    //
    TButtonSaveSubCategory->setEnabled(false);
    TButtonRemoveSubCategory->setEnabled(false);
    CBoxCodeSubCategory->setEnabled(true);
    LEditNameSubCategory->setEnabled(true);
    LEditShortNameSubCategory->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormSubCategory::enableFillFormForChange() {
    //
    TButtonSaveSubCategory->setEnabled(false);
    TButtonRemoveSubCategory->setEnabled(true);
    CBoxCodeSubCategory->setEnabled(false);
    LEditNameSubCategory->setEnabled(true);
    LEditShortNameSubCategory->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormSubCategory::disableFillForm() {
    //
    CBoxCodeSubCategory->setEnabled(false);
    CBoxCodeSubCategory->clearEditText();
    CBoxCodeSubCategory->clear();
    //
    LEditNameSubCategory->setEnabled(false);
    LEditNameSubCategory->clear();
    //
    LEditShortNameSubCategory->setEnabled(false);
    LEditShortNameSubCategory->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormSubCategory::runCleanForm() {
    //
    LEditIDSubCategory->clear();
    //
    CBoxCodeSubCategory->addItem("");
    CBoxCodeSubCategory->clear();
    //CBoxCodeFactory->clearEditText();

    //
    //TEditNameFactory->setEnabled(false);
    LEditNameSubCategory->clear();
    //
    //TEditShortNameFactory->setEnabled(false);
    LEditShortNameSubCategory->clear();
    //
    CheckBoxSubCategoryStatusActive->setChecked(false);
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormSubCategory::runExitWin() {
    // qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    this->close(); //tambem funciona
}
