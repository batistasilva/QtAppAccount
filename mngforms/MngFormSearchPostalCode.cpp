#include "mngforms/MngFormSearchPostalCode.h"

MngFormSearchPostalCode::MngFormSearchPostalCode(QWidget *parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    nam = new QNetworkAccessManager(this);
    //modeltbl = new QSqlQueryModel;
    //
    //
    numbers << QString::fromUtf8("Cidade") << QString::fromUtf8("Região/Bairro") << QString::fromUtf8("Endereço") << QString::fromUtf8("Complemento") << "Cep";
    //
    //tblmodel = new QStandardItemModel(100, numbers.length(), this);
    //
    item_count = 0;
    //
    runPopulateState();
    //
    runPopulateTypeStreet();
    //
    //    
    //
    //connect(TButtonSearch, SIGNAL(clicked()), this, SLOT(runSearchZip()));
    connect(CBoxState, SIGNAL(editTextChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(CBoxTypeAddress, SIGNAL(editTextChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditCity, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditAddress, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(LEditPostalCode, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonExit, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanForm, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    connect(TButtonConfirm, SIGNAL(clicked()), this, SLOT(runConfirmDataZip()));
    //
    connect(nam, SIGNAL(finished(QNetworkReply*)), this, SLOT(finished(QNetworkReply*)));
    //
    // connect(&http, SIGNAL(responseReady()), this, SLOT(getRespToHttp()));
    // connect(LEditZipCode, SIGNAL(editingFinished()), this, SLOT(runAutoCompletePostalCode()));   
    //connect(LEditShortNameFactory, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
}

MngFormSearchPostalCode::~MngFormSearchPostalCode() {
    //  delete ui;
}

void MngFormSearchPostalCode::finished(QNetworkReply *reply) {
    //
    QList<PostalCode*> postcode_list;
   // wscli = new WSClient();

    //
    qDebug() << "Verificando Dados em QNetworkReply!!" << endl;
    //
    if (reply->error() == QNetworkReply::NoError) {

        item_count = 0;

        //Run Searching to PostalCode
        //postcode_list = wscli->getResultLogradouroForHttp(reply->readAll());
        //
        tblmodel = new QStandardItemModel(postcode_list.length(), numbers.length(), this);
        //
        populateTableView(tblmodel);
        //

        foreach(PostalCode *post, postcode_list) {
            //
            //qDebug() << "(" << post->GetStreet() << " - " << post->GetPostalcode() << ")" << endl;
            //
            tblmodel->setData(tblmodel->index(item_count, 0, QModelIndex()), post->GetCity());
            tblmodel->setData(tblmodel->index(item_count, 1, QModelIndex()), post->GetDistrict());
            tblmodel->setData(tblmodel->index(item_count, 2, QModelIndex()), post->GetStreet());
            tblmodel->setData(tblmodel->index(item_count, 3, QModelIndex()), post->GetComplement());
            tblmodel->setData(tblmodel->index(item_count, 4, QModelIndex()), post->GetPostalcode());
            //
            item_count++;
        }

    } else {
        //ui->textBrowser->setText(reply->errorString());
        ShowGuiMessage("error", "Mensagem Erro!", reply->errorString(), "");
        qDebug() << "Error:...... " << reply->errorString() << endl;
    }

    //
    /*   TableViewLocale->setModel(tblmodel);

       TableViewLocale->setSelectionMode(QAbstractItemView::ExtendedSelection);
       TableViewLocale->setDragEnabled(true);
       TableViewLocale->setAcceptDrops(true);
       TableViewLocale->setDropIndicatorShown(true);
       //
       TableViewLocale-> setColumnWidth(0, 150);
       TableViewLocale-> setColumnWidth(1, 150);
       TableViewLocale-> setColumnWidth(2, 300);
       TableViewLocale-> setColumnWidth(3, 150);
       TableViewLocale-> setColumnWidth(4, 100);
       TableViewLocale-> verticalHeader()->hide();
       TableViewLocale->setSelectionBehavior(QAbstractItemView::SelectRows);
       TableViewLocale->setSelectionMode(QAbstractItemView::SingleSelection);
       TableViewLocale->setEditTriggers(QAbstractItemView::NoEditTriggers);
     */
    //Put item count to 0, to start populate in first line after
}

void MngFormSearchPostalCode::getRespToHttp() {

}

void MngFormSearchPostalCode::runLoadToConfirm(const QItemSelection &, const QItemSelection &) {
    QVariant varState, varCity, varDistrict, varAddress, varComplement, varPostalCode;
    //get the text of the selected item

    const QModelIndex index = TableViewLocale->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = tblmodel->index(index.row(), 0, QModelIndex());
    varCity = tblmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = tblmodel->index(index.row(), 1, QModelIndex());
    varDistrict = tblmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = tblmodel->index(index.row(), 2, QModelIndex());
    varAddress = tblmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = tblmodel->index(index.row(), 3, QModelIndex());
    varComplement = tblmodel->data(seekRoot, Qt::DisplayRole);

    seekRoot = tblmodel->index(index.row(), 4, QModelIndex());
    varPostalCode = tblmodel->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    LEditCity->setText(varCity.toString());
    LEditDistrict->setText(varDistrict.toString());
    LEditAddress->setText(varAddress.toString());
    LEditComplements->setText(varComplement.toString());
    LEditPostalCode->setText(varPostalCode.toString());
    //
    /*  postalcode.SetState(CBoxState->currentText());
      postalcode.SetCity(LEditCity->text());
      postalcode.SetDistrict(LEditDistrict->text());
      postalcode.SetStreet(LEditAddress->text());
      postalcode.SetNumberStreet(LEditAddressNumber->text());
      postalcode.SetComplement(LEditComplements->text());
      postalcode.SetPostalcode(LEditPostalCode->text());
     */
}

void MngFormSearchPostalCode::runPopulateState() {
    int i = 0;
    QString state;
    QSqlTableModel *model = new QSqlTableModel(this);
    //
    //ShowMessage("Pesquisando endereco!!", COLOR_BLUE, COLOR_PINK);

    model->setTable("state");
    model->setFilter("state_country_id = 30");
    model->setSort(2, Qt::AscendingOrder);
    model->select();
    //
    CBoxState->addItem("  ");
    CBoxState->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro

    for (int j = 0; j < model->rowCount(); j++) {
        QSqlRecord record = model->record(j);
        //
        state = record.value("state_abbr").toString();
        //
        CBoxState->addItem(state);
        CBoxState->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    }

    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxState->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxState->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxState->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxState->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
}

void MngFormSearchPostalCode::runPopulateTypeStreet() {
    int i = 0;
    QList<QString> lista_str;
    lista_str << "Avenida" << "Bloco" << QString::fromUtf8("Praça") << "Quadra" << "Rua" << "Travessa";
    //    
    CBoxTypeAddress->addItem("  ");
    CBoxTypeAddress->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    //
    for (int j = 0; j < lista_str.size(); j++) {
        //
        CBoxTypeAddress->addItem(lista_str.at(j));
        CBoxTypeAddress->setItemData(i++, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    }
    //Obs: so alinha no centro se usar as tres linhas abaixo
    CBoxTypeAddress->setEditable(true); // First : Set the combobox the editable (this allows us to use the lineEdit)
    CBoxTypeAddress->lineEdit()->setReadOnly(true); // Second : Put the lineEdit in read-only mode
    CBoxTypeAddress->lineEdit()->setAlignment(Qt::AlignCenter); // Third  : Align the lineEdit to right
    // widget.cbbox_serial_ports->setFixedWidth(90);    
    CBoxTypeAddress->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole); //para alinhamento no centro
    //
}

/**
 * Method for clean form fields and table for
 * windows postalcode search.
 */
void MngFormSearchPostalCode::runCleanForm() {
    //
    //CBoxState->clearEditText();
    //LEditCity->clear();
    LEditDistrict->clear();
    CBoxTypeAddress->clearEditText();
    LEditAddress->clear();
    LEditAddressNumber->clear();
    LEditComplements->clear();
    LEditPostalCode->clear();
    //
    //
    tblmodel = new QStandardItemModel(0, numbers.length(), this);
    //
    populateTableView(tblmodel);
}


void MngFormSearchPostalCode::runSearchZip() {
//    wscli = new WSClient();
/*    PostalCode * postcode = new PostalCode();

    //
    postcode->SetState(CBoxState->currentText());
    //QString name_city = QString:://charset=ISO-8859-1
    // QTextCodec *codec = QTextCodec::codecForName("ISO-8859-1");
    // QByteArray ba = codec->fromUnicode(LEditCity->text());
    // QString vcflatin1 = ba;

    postcode->SetCity(unaccent(LEditCity->text().toUpper()));
    postcode->SetTypeStreet(unaccent(CBoxTypeAddress->currentText().toUpper()));
    postcode->SetStreet(unaccent(LEditAddress->text().toUpper()));
    postcode->SetNumberStreet(LEditAddressNumber->text());
 */
    //
/*    ShowGuiMessage("info", "Mensagem!", "Enviando: "
            + postcode->GetState() + " - "
            + postcode->GetCity() + " - "
            + postcode->GetTypeStreet() + " - "
            + postcode->GetStreet(), "");
 */ 
    //
 //   wscli->SetNam(nam);
 //   wscli->SetPostcode(postcode);
    //
 //   wscli->doHttpGetPostalCode();
}

void MngFormSearchPostalCode::runValidFillInForm() {
    //
    TButtonSearch->setEnabled(
            !CBoxState->currentText().isEmpty() &&
            !CBoxTypeAddress->currentText().isEmpty() &&
            !LEditCity->text().isEmpty() &&
            !LEditAddress->text().isEmpty());
    //
    TButtonCleanForm->setEnabled(
            !CBoxState->currentText().isEmpty() ||
            !CBoxTypeAddress->currentText().isEmpty() ||
            !LEditCity->text().isEmpty() ||
            !LEditAddress->text().isEmpty() ||
            !LEditAddressNumber->text().isEmpty() ||
            !LEditPostalCode->text().isEmpty());
    //
    TButtonConfirm->setEnabled(!LEditPostalCode->text().isEmpty());
}

/**
 * Method for get data for form and put in object 
 * postalcode for exit and return
 */
void MngFormSearchPostalCode::runConfirmDataZip() {
    int res = 0;
    QList<MsgTrans> maplist;
    addr = new Address();
    QSqlTableModel *model = new QSqlTableModel(this);

    //
//    postcode = new PostalCode();
    //
/*    postcode->SetState(CBoxState->currentText());
    postcode->SetCity(LEditCity->text());
    postcode->SetDistrict(LEditDistrict->text());
    postcode->SetStreet(LEditAddress->text());
    postcode->SetNumberStreet(LEditAddressNumber->text());
    postcode->SetComplement(LEditComplements->text());
    postcode->SetPostalcode(LEditPostalCode->text());
    //
    QString message =
            postcode->GetStreet() + " - "
            + postcode->GetState() + " - "
            + postcode->GetCity() + " - "
            + postcode->GetDistrict() + " - "
            + postcode->GetComplement() + " -"
            + postcode->GetPostalcode() + " - "
            + postcode->GetNumberStreet();
*/
    //ShowGuiMessage("info", "Mensagem", message);
    //
    maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
    maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
    maplist.append(getMsgTrans(QMessageBox::Cancel, QString::fromUtf8("Cancelar")));
    //
    QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"),
            QString::fromUtf8("Confirma os Dados do (Endereço/Cep) Para Uso Definitifo...?"),
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    //
    res = ShowGuiQuestion(qmsgb, maplist);
    //

    if (res == QMessageBox::Yes) {
        //           
        model->setTable("address");
    //    model->setFilter("addr_postalcode = '" + postcode->GetPostalcode() + "'");
        model->select();
        //
        if (model->rowCount() == 0) {
            //
         /*   addr->setAddrPostalCode(postcode->GetPostalcode());
            addr->setAddrState(postcode->GetState());
            addr->setAddrCity(postcode->GetCity());
            addr->setAddrDistrict(postcode->GetDistrict());
            addr->setAddrAddress(postcode->GetStreet());
            addr->setAddrComp(postcode->GetComplement());
            addr->setAddrCountry("BRASIL");
            addr->setAddrNotes("NOVO!");
          */ 
            //
//            if (addr->addMainAddress())
//                ShowMessage("Adicionado Novo Cep Para o Cadastro de Endereços!!, (" + postcode->GetPostalcode() + ")", COLOR_BLUE, COLOR_PINK);
        } else {
            //
 //           QString message = "O Cep Atual Já Existia na Base de Dados Principal, (" + postcode->GetPostalcode() + ")";
            //
//            ShowGuiMessage("info", "Mensagem!", QString::fromUtf8(message.toAscii()), "");
            //
        }
        //
 //       emit runSendDataAddress(postcode);
        //
        this->close(); //tambem funciona
    }
}

void MngFormSearchPostalCode::runExitWin() {
    int res = 0;

    QList<MsgTrans> maplist;
    //
    maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
    maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
    maplist.append(getMsgTrans(QMessageBox::Cancel, QString::fromUtf8("Cancelar")));
    //
    QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), "Deseja Sair...?",
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    //
    res = ShowGuiQuestion(qmsgb, maplist);
    //
    if (res == QMessageBox::Yes) {
        this->close(); //tambem funciona
    }
    //this->accept(); //tambem funciona
}

void MngFormSearchPostalCode::populateTableView(QAbstractItemModel* tblmodel) {
    int col = 0;

    foreach(QString name, numbers) {
        tblmodel->setHeaderData(col, Qt::Horizontal, name);
        col++;
    }

    TableViewLocale->setModel(tblmodel);

    TableViewLocale->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewLocale->setDragEnabled(true);
    TableViewLocale->setAcceptDrops(true);
    TableViewLocale->setDropIndicatorShown(true);
    //
    TableViewLocale-> setColumnWidth(0, 150);
    TableViewLocale-> setColumnWidth(1, 150);
    TableViewLocale-> setColumnWidth(2, 300);
    TableViewLocale-> setColumnWidth(3, 150);
    TableViewLocale-> setColumnWidth(4, 100);
    TableViewLocale-> verticalHeader()->hide();
    TableViewLocale->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewLocale->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewLocale->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //Put item count to 0, to start populate in first line after

    selectionModel = TableViewLocale->selectionModel();
    connect(selectionModel, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToConfirm(const QItemSelection &, const QItemSelection &)));

}