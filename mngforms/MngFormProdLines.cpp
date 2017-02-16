#include "mngforms/MngFormProdLines.h"
#include "IUs/ui_MngFormProdLines.h"
#include "MngFormBusinessActivity.h"
#include "src/Product.h"

MngFormProdLines::MngFormProdLines(QWidget *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    prodline = new ProductLine();
    //
    plinemodelsch = new QSqlQueryModel;
    //
    plinemodel = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //
    connect(TButtonSaveProdLines, SIGNAL(clicked()), this, SLOT(runAddProdLines()));
    connect(TButtonRemoveProdLines, SIGNAL(clicked()), this, SLOT(runRemoveProdLines()));
    connect(CBoxCodeProdLines, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteProdLinesCode()));
    connect(LEditNameProdLines, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditShortNameProdLines, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExitProdLines, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanProdLines, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot

    //QItemSelectionModel *selectionModel = TableViewItemFactory->selectionModel();
    connect(TableViewProdLines->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeProdLines(const QItemSelection &, const QItemSelection &)));
    
}

MngFormProdLines::~MngFormProdLines()
{
    //delete ui;
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * @param 
 * @param 
 */
void MngFormProdLines::runLoadToChangeProdLines(const QItemSelection&, const QItemSelection&) {

    QVariant varId, varCode, varName, varShortName, varActive;
    //get the text of the selected item

    const QModelIndex index = TableViewProdLines->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = plinemodel->index(index.row(), 0, QModelIndex());
    varId = plinemodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = plinemodel->index(index.row(), 1, QModelIndex());
    varCode = plinemodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = plinemodel->index(index.row(), 2, QModelIndex());
    varName = plinemodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = plinemodel->index(index.row(), 3, QModelIndex());
    varShortName = plinemodel->data(seekRoot, Qt::DisplayRole);
    
    seekRoot = plinemodel->index(index.row(), 4, QModelIndex());
    varActive = plinemodel->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxCodeProdLines->clear();
    CBoxCodeProdLines->addItem(varCode.toString());
    LEditIDProdLines->setText(varId.toString());
    LEditNameProdLines->setText(varName.toString());
    LEditShortNameProdLines->setText(varShortName.toString());
    CheckBoxProdLinesStatusActive->setChecked(varActive.toBool());

    enableFillFormForChange();

}

/**
 * Method for add new Factory for 
 * data base
 */
void MngFormProdLines::runAddProdLines() {

    int item_id;

    prodline = new ProductLine();

    /**
     * If LEditCodeFactory is not hidden, is because
     * is form is mode for item add.
     */
    if (CBoxCodeProdLines->isEnabled()) {
        //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
        item_id = prodline->getNextIdFromTable();
        //
        if (item_id > 0) {
            //
            //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
            //
            prodline->setProdLineId(item_id);

            prodline->setProdLineCode(CBoxCodeProdLines->currentText());
            prodline->setProdLineDescrip(LEditNameProdLines->text());
            prodline->setProdLineShortDescrip(LEditShortNameProdLines->text());
            prodline->setProdLineStatus(CheckBoxProdLinesStatusActive->isChecked());
            //
            if (prodline->addNewLine()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                //
                prodline = new ProductLine();
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

            qDebug() << "\n\nID: " << LEditIDProdLines->text().toInt() << endl;

            //
            prodline->setProdLineId(LEditIDProdLines->text().toInt());
            prodline->setProdLineCode(CBoxCodeProdLines->currentText());
            prodline->setProdLineDescrip(LEditNameProdLines->text());
            prodline->setProdLineShortDescrip(LEditShortNameProdLines->text());
            prodline->setProdLineStatus(CheckBoxProdLinesStatusActive->isChecked());
            //
            if (prodline->updateLine()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                //
                prodline = new ProductLine();
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
void MngFormProdLines::runRemoveProdLines() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditIDProdLines->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover a Linha de Produto..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            prodline->setProdLineId(LEditIDProdLines->text().toInt());

            if (prodline->removeLine()) {
                ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                prodline = new ProductLine();
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
void MngFormProdLines::runAutoCompleteProdLinesCode() {
    prodline = new ProductLine();

    //
    plinemodelsch->setQuery("SELECT prodline_code FROM prodline ORDER BY prodline_code");

    completer = new QCompleter(plinemodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxCodeProdLines->setCompleter(completer);
    //
    TButtonCleanProdLines->setEnabled(!CBoxCodeProdLines->currentText().isEmpty());

}

/**
 * Method for populate table view with 
 * all actual factorys 
 */
void MngFormProdLines::populateTableView() {

    int col = 0;
    numbers << "Id" << "Código"  << "Nome Completo" << "Nome Curto" <<"Status" << "Data Inc." << "Data Alt.";

    plinemodel->setQuery("SELECT * FROM prodline ORDER BY prodline_code");
    //

    foreach(QString name, numbers) {
        plinemodel->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    
    //
    TableViewProdLines->setModel(plinemodel);

    TableViewProdLines->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewProdLines->setDragEnabled(true);
    TableViewProdLines->setAcceptDrops(true);
    TableViewProdLines->setDropIndicatorShown(true);
    //
    TableViewProdLines->setColumnWidth(0, 40);
    TableViewProdLines->setColumnWidth(1, 80);
    TableViewProdLines->setColumnWidth(2, 300);
    TableViewProdLines->setColumnWidth(3, 150);
    TableViewProdLines->setColumnWidth(4, 60);
    TableViewProdLines->setColumnWidth(5, 130);
    TableViewProdLines->setColumnWidth(6, 130);
    //
    TableViewProdLines->verticalHeader()->hide();
    //TableViewItemFactory->horizontalScrollBar()->hide();
    TableViewProdLines->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewProdLines->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewProdLines->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormProdLines::runValidFillInForm() {
    TButtonSaveProdLines->setEnabled(
            !CBoxCodeProdLines->currentText().isEmpty() &&
            !LEditNameProdLines->text().isEmpty() &&
            !LEditShortNameProdLines->text().isEmpty());
    //
    TButtonCleanProdLines->setEnabled((!CBoxCodeProdLines->currentText().isEmpty() 
    || !LEditNameProdLines->text().isEmpty() 
    || !LEditShortNameProdLines->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormProdLines::enableFillFormForAdd() {
    //
    TButtonSaveProdLines->setEnabled(false);
    TButtonRemoveProdLines->setEnabled(false);
    CBoxCodeProdLines->setEnabled(true);
    LEditNameProdLines->setEnabled(true);
    LEditShortNameProdLines->setEnabled(true);
    //
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormProdLines::enableFillFormForChange() {
    //
    TButtonSaveProdLines->setEnabled(false);
    TButtonRemoveProdLines->setEnabled(true);
    CBoxCodeProdLines->setEnabled(false);
    LEditNameProdLines->setEnabled(true);
    LEditShortNameProdLines->setEnabled(true);
    //
}

/**
 * Disable form for fill in
 */
void MngFormProdLines::disableFillForm() {
    //
    CBoxCodeProdLines->setEnabled(false);
    CBoxCodeProdLines->clearEditText();
    CBoxCodeProdLines->clear();
    //
    LEditNameProdLines->setEnabled(false);
    LEditNameProdLines->clear();
    //
    LEditShortNameProdLines->setEnabled(false);
    LEditShortNameProdLines->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormProdLines::runCleanForm() {
    //
    LEditIDProdLines->clear();
    //
    CBoxCodeProdLines->clear();
    CBoxCodeProdLines->clearEditText();

    //
    LEditNameProdLines->clear();
    //
    LEditShortNameProdLines->clear();
    //
    CheckBoxProdLinesStatusActive->setChecked(false);
    //
    enableFillFormForAdd();
}

/**
 * Method for close child window
 */
void MngFormProdLines::runExitWin() {
    // qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept(); //tambem funciona
    this->close(); //tambem funciona
}
