#include "mngforms/MngFormBusinessActivity.h"
#include "ui_MngFormFactory.h"
//#include "ui_FormBusinessActivity.h"

MngFormBusinessActivity::MngFormBusinessActivity(QWidget *parent) : QDialog(parent) {
    this->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);

    busact = new BusinessActivity();

    busact_modelsch = new QSqlQueryModel;
    //
    busact_modeltbl = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //
    connect(TButtonSaveBusinessActivity, SIGNAL(clicked()), this, SLOT(runAddBusinesActivity()));
    connect(TButtonRemoveBusinessActivity, SIGNAL(clicked()), this, SLOT(runRemoveBusinesActivity()));
    connect(CBoxCodeBusinessActivity, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteBusinesActivityCode()));
    connect(LEditNameBusinessActivity, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditShortNameBusinessActivity, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitBusinessActivity, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanBusinessActivity, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewBusinessActivity->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeBusinesActivity(const QItemSelection &, const QItemSelection &)));

}

MngFormBusinessActivity::~MngFormBusinessActivity() {
}

/**
 * Method for load BusinessActivity from tableview and fill
 * form for will be changed.
 * @param 
 * @param 
 */
void MngFormBusinessActivity::runLoadToChangeBusinesActivity(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varCode, varName, varShortName, varActive;
    //get the text of the selected item

    const QModelIndex index = TableViewBusinessActivity->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = busact_modeltbl->index(index.row(), 0, QModelIndex());
    varId = busact_modeltbl->data(seekRoot, Qt::DisplayRole);


    seekRoot = busact_modeltbl->index(index.row(), 1, QModelIndex());
    varCode = busact_modeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = busact_modeltbl->index(index.row(), 2, QModelIndex());
    varName = busact_modeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = busact_modeltbl->index(index.row(), 3, QModelIndex());
    varShortName = busact_modeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = busact_modeltbl->index(index.row(), 4, QModelIndex());
    varActive = busact_modeltbl->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxCodeBusinessActivity->clear();
    CBoxCodeBusinessActivity->addItem(varCode.toString());
    LEditIDBusinessActivity->setText(varId.toString());
    LEditNameBusinessActivity->setText(varName.toString());
    LEditShortNameBusinessActivity->setText(varShortName.toString());
    CheckBoxBusinessActivityStatusActive->setChecked(varActive.toBool());
    //
    enableFillFormForChange();

}

/**
 * Method for add new BusinessActivity for 
 * data base
 */
void MngFormBusinessActivity::runAddBusinesActivity() {

    int item_id;

    busact = new BusinessActivity();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (CBoxCodeBusinessActivity->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = busact->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            busact->setBusinessActivityId(item_id);

            busact->setBusinessActivityCode(CBoxCodeBusinessActivity->currentText());
            busact->setBusinessActivityDescrip(LEditNameBusinessActivity->text());
            busact->setBusinessActivityShortDescrip(LEditShortNameBusinessActivity->text());
            busact->setBusinessActive(CheckBoxBusinessActivityStatusActive->isChecked());
            //
            if (busact->addNewBusinessActivity()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                //
                busact = new BusinessActivity();
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

            qDebug() << "\n\nID: " << LEditIDBusinessActivity->text().toInt() << endl;

            //
            busact->setBusinessActivityId(LEditIDBusinessActivity->text().toInt());
            busact->setBusinessActivityCode(CBoxCodeBusinessActivity->currentText());
            busact->setBusinessActivityDescrip(LEditNameBusinessActivity->text());
            busact->setBusinessActivityShortDescrip(LEditShortNameBusinessActivity->text());
            busact->setBusinessActive(CheckBoxBusinessActivityStatusActive->isChecked());
            //
            if (busact->updateBusinessActivity()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                //
                busact = new BusinessActivity();
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
 * Method for Remove a existing BusinessActivity
 * selectede from table view.
 */
void MngFormBusinessActivity::runRemoveBusinesActivity() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDBusinessActivity->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover o Ramo de Atividade Selecionado..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            busact->setBusinessActivityId(LEditIDBusinessActivity->text().toInt());

            if (busact->removeBusinessActivity()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                busact = new BusinessActivity();
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
void MngFormBusinessActivity::runAutoCompleteBusinesActivityCode() {
    //prodfac = new ProductFactory();

    //
    busact_modelsch->setQuery("SELECT businessact_code FROM business_activity ORDER BY businessact_code");

    completer = new QCompleter(busact_modelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxCodeBusinessActivity->setCompleter(completer);
    //
    TButtonCleanBusinessActivity->setEnabled(!CBoxCodeBusinessActivity->currentText().isEmpty());
}

/**
 * Method for populate table view with 
 * all actual BusinessActivity 
 */
void MngFormBusinessActivity::populateTableView() {

    int col = 0;
    numbers << "Id" << "Código" << "Descrição" << "Nome Curto" << "Status" << "Data Inc." << "Data Alt.";

    busact_modeltbl->setQuery("SELECT * FROM business_activity ORDER BY businessact_code");
    //

    foreach(QString name, numbers) {
        busact_modeltbl->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    //
    TableViewBusinessActivity->setModel(busact_modeltbl);

    TableViewBusinessActivity->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewBusinessActivity->setDragEnabled(true);
    TableViewBusinessActivity->setAcceptDrops(true);
    TableViewBusinessActivity->setDropIndicatorShown(true);
    //
    TableViewBusinessActivity->setColumnWidth(0, 40);
    TableViewBusinessActivity->setColumnWidth(1, 60);
    TableViewBusinessActivity->setColumnWidth(2, 300);
    TableViewBusinessActivity->setColumnWidth(3, 150);
    TableViewBusinessActivity->setColumnWidth(4, 100);
    TableViewBusinessActivity->setColumnWidth(5, 150);
    TableViewBusinessActivity->setColumnWidth(6, 150);
    //
    TableViewBusinessActivity->verticalHeader()->hide();
    // TableViewBusinessActivity->horizontalScrollBar()->hide();
    TableViewBusinessActivity->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewBusinessActivity->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewBusinessActivity->setColumnHidden(0, true);
    // TableViewBusinessActivity->resizeColumnsToContents();//Expande column for fill in
    // TableViewBusinessActivity->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormBusinessActivity::runValidFillInForm() {
    TButtonSaveBusinessActivity->setEnabled(
            !CBoxCodeBusinessActivity->currentText().isEmpty() &&
            !LEditNameBusinessActivity->text().isEmpty() &&
            !LEditShortNameBusinessActivity->text().isEmpty());
    //
    TButtonCleanBusinessActivity->setEnabled((!CBoxCodeBusinessActivity->currentText().isEmpty() || !LEditNameBusinessActivity->text().isEmpty() || !LEditShortNameBusinessActivity->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormBusinessActivity::enableFillFormForAdd() {
    TButtonSaveBusinessActivity->setEnabled(false);
    TButtonRemoveBusinessActivity->setEnabled(false);
    CBoxCodeBusinessActivity->setEnabled(true);
    LEditNameBusinessActivity->setEnabled(true);
    LEditShortNameBusinessActivity->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormBusinessActivity::enableFillFormForChange() {
    TButtonSaveBusinessActivity->setEnabled(false);
    TButtonRemoveBusinessActivity->setEnabled(true);
    CBoxCodeBusinessActivity->setEnabled(false);
    LEditNameBusinessActivity->setEnabled(true);
    LEditShortNameBusinessActivity->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormBusinessActivity::disableFillForm() {
    //
    CBoxCodeBusinessActivity->setEnabled(false);
    CBoxCodeBusinessActivity->addItem("");
    CBoxCodeBusinessActivity->clear();
    //
    LEditNameBusinessActivity->setEnabled(false);
    LEditNameBusinessActivity->clear();
    //
    LEditShortNameBusinessActivity->setEnabled(false);
    LEditShortNameBusinessActivity->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormBusinessActivity::runCleanForm() {
    //
    LEditIDBusinessActivity->clear();
    //
    CBoxCodeBusinessActivity->addItem("");
    CBoxCodeBusinessActivity->clear();
    //CBoxCodeFactory->clearEditText();

    //
    //TEditNameFactory->setEnabled(false);
    LEditNameBusinessActivity->clear();
    //
    //TEditShortNameFactory->setEnabled(false);
    LEditShortNameBusinessActivity->clear();
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormBusinessActivity::runExitWin() {
    // qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    this->close(); //tambem funciona
}
