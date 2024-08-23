#include "mngforms/MngFormUom.h"
#include "IUs/ui_MngFormUom.h"

MngFormUom::MngFormUom(QWidget *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    produom = new ProductUoM();
    //
    puommodelsch = new QSqlQueryModel;
    //
    puommodel = new QSqlQueryModel;

    enableFillFormForAdd();
    //
    populateTableView();
    //
    connect(CheckBoxIsUnitOfWeight, SIGNAL(clicked()), this, SLOT(runValidWeightUom()));
    connect(TButtonSaveUom, SIGNAL(clicked()), this, SLOT(runAddProdUom()));
    connect(TButtonRemoveUom, SIGNAL(clicked()), this, SLOT(runRemoveProdUom()));
    connect(LEditUnitUom, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditNameUom, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitUom, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanUom, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewUom->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeProdUom(const QItemSelection &, const QItemSelection &)));

}

MngFormUom::~MngFormUom() {
    //delete ui;
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * @param
 * @param
 */
void MngFormUom::runLoadToChangeProdUom(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varUnit, varName, varActive, varWeight;
    //get the text of the selected item

    const QModelIndex index = TableViewUom->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();

    QModelIndex seekRoot = index;

    seekRoot = puommodel->index(index.row(), 0, QModelIndex());
    varId = puommodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = puommodel->index(index.row(), 1, QModelIndex());
    varUnit = puommodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = puommodel->index(index.row(), 2, QModelIndex());
    varName = puommodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = puommodel->index(index.row(), 3, QModelIndex());
    varActive = puommodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = puommodel->index(index.row(), 4, QModelIndex());
    varWeight = puommodel->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    LEditIDUnitUom->setText(varId.toString());
    LEditUnitUom->setText(varUnit.toString());
    LEditNameUom->setText(varName.toString());
    CheckBoxStatusActiveUom->setChecked(varActive.toBool());
    CheckBoxIsUnitOfWeight->setChecked(varWeight.toBool());

    enableFillFormForChange();

}

/**
 * Method for add new Factory for
 * data base
 */
void MngFormUom::runAddProdUom() {

    int item_id;

    produom = new ProductUoM();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (LEditUnitUom->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = produom->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            produom->setUomId(item_id);
            produom->setUomName(LEditUnitUom->text());
            produom->setUomDescrip(LEditNameUom->text());
            produom->setUomStatus(CheckBoxStatusActiveUom->isChecked());
            produom->setUomWeight(CheckBoxIsUnitOfWeight->isChecked());
            //
            if (produom->addNewUom()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"), "");
                //
                produom = new ProductUoM();
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

            qDebug() << "\n\nID: " << LEditIDUnitUom->text().toInt() << endl;

            //
            produom->setUomId(LEditIDUnitUom->text().toInt());
            produom->setUomName(LEditUnitUom->text());
            produom->setUomDescrip(LEditNameUom->text());
            produom->setUomStatus(CheckBoxStatusActiveUom->isChecked());
            produom->setUomWeight(CheckBoxIsUnitOfWeight->isChecked());
            //
            if (produom->updateUom()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"), "");
                //
                produom = new ProductUoM();
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
void MngFormUom::runRemoveProdUom() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDUnitUom->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover a Unidade de Medida..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            produom->setUomId(LEditIDUnitUom->text().toInt());

            if (produom->removeUom()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"), "");
                //
                produom = new ProductUoM();
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
void MngFormUom::runAutoCompleteProdUomCode() {
    produom = new ProductUoM();

    //
    puommodelsch->setQuery("SELECT uofm_name FROM unit_of_measure ORDER BY uofm_name");

    completer = new QCompleter(puommodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    LEditUnitUom->setCompleter(completer);
    //
    TButtonCleanUom->setEnabled(!LEditUnitUom->text().isEmpty());

}

/**
 * Method for populate table view with
 * all actual factorys
 */
void MngFormUom::populateTableView() {

    int col = 0;
    numbers << "Id" << "Nome" << "Descrição" << "Status" << "Peso" << "Data Inc." << "Data Alt.";

    puommodel->setQuery("SELECT * FROM unit_of_measure ORDER BY uofm_name");
    //

    foreach(QString name, numbers) {
        puommodel->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }

    //
    TableViewUom->setModel(puommodel);

    TableViewUom->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewUom->setDragEnabled(true);
    TableViewUom->setAcceptDrops(true);
    TableViewUom->setDropIndicatorShown(true);
    //
    TableViewUom->setColumnWidth(0, 40);
    TableViewUom->setColumnWidth(1, 100);
    TableViewUom->setColumnWidth(2, 200);
    TableViewUom->setColumnWidth(3, 60);
    TableViewUom->setColumnWidth(4, 60);
    TableViewUom->setColumnWidth(5, 130);
    TableViewUom->setColumnWidth(6, 130);
    //
    TableViewUom->verticalHeader()->hide();
    //TableViewItemFactory->horizontalScrollBar()->hide();
    TableViewUom->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewUom->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewUom->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

/**
 * Valid if form is prepared for save
 * new item reg.
 */
void MngFormUom::runValidFillInForm() {
    TButtonSaveUom->setEnabled(
            !LEditUnitUom->text().isEmpty() &&
            !LEditNameUom->text().isEmpty());
    //
    TButtonCleanUom->setEnabled(!LEditUnitUom->text().isEmpty() || !LEditNameUom->text().isEmpty());
}

/**
 * Method for valid if Weight Uom exist
 * for other item.
 */
void MngFormUom::runValidWeightUom() {
    //
    QString query = "SELECT * FROM unit_of_measure WHERE uofm_item_weight IS true";
    //
    produom = produom->getUomForQuery(query);
    //
    if (!produom->getUomDescrip().isEmpty()) {
        QString message;
        //
        message.append("<br>");
        message.append(QString::fromUtf8("Unidade de Medida de Peso já existe!!"));
        message.append("<br><pt>");
        message.append("<font background='#FFFFFF' color='#A60180'>");
        message.append(QString::fromUtf8("Na Unidade de Medida:...")+ produom->getUomName());
        message.append("</font>");        
        message.append("</pt><br></br>");
        //
        ShowGuiMessage("info", "Mensagem!", message, NULL);
        //
        CheckBoxIsUnitOfWeight->setChecked(false);
    }
}

/**
 * Enable form for fill in for will
 * be added.
 */
void MngFormUom::enableFillFormForAdd() {
    //
    TButtonSaveUom->setEnabled(false);
    TButtonRemoveUom->setEnabled(false);
    LEditUnitUom->setEnabled(true);
    LEditNameUom->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormUom::enableFillFormForChange() {
    //
    TButtonSaveUom->setEnabled(false);
    TButtonRemoveUom->setEnabled(true);
    LEditUnitUom->setEnabled(false);
    LEditNameUom->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormUom::disableFillForm() {
    //
    LEditUnitUom->setEnabled(false);
    LEditUnitUom->clear();
    //
    LEditNameUom->setEnabled(false);
    LEditNameUom->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormUom::runCleanForm() {
    //
    LEditIDUnitUom->clear();
    //
    LEditUnitUom->clear();
    //
    LEditNameUom->clear();
    //
    CheckBoxStatusActiveUom->setChecked(false);
    CheckBoxIsUnitOfWeight->setChecked(false);
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormUom::runExitWin() {
    // qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    this->close(); //tambem funciona
}
