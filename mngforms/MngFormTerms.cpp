/*
 * File:   FormTerms.cpp
 * Author: batista
 *
 * Created on 31 de Julho de 2013, 12:28
 */

#include "MngFormTerms.h"
#include "src/Terms.h"

MngFormTerms::MngFormTerms(QDialog* parent) : QDialog(parent) {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    //
    //
    terms = new Terms();
    tmu   = new TimeUtil();
    //
    termmodelsch = new QSqlQueryModel;
    //
    termmodeltbl = new QSqlQueryModel;

    enableFillFormForAdd();
    //    
    populateTableView();
    //

    connect(RButtonForTypeCutOffDay, SIGNAL(toggled(bool)), SBoxTermsCutOffDay, SLOT(setEnabled(bool)));
    connect(RButtonTermsSubDivision, SIGNAL(toggled(bool)), SBoxTermsQuantitiesOfInstallments, SLOT(setEnabled(bool)));
    connect(RButtonTermsSubDivision, SIGNAL(toggled(bool)), SBoxTermsQuantOfDaysByInstall, SLOT(setEnabled(bool)));
    connect(LEditTermsDescrip, SIGNAL(textChanged(QString)), this, SLOT(runValidFillInForm()));
    connect(TButtonSaveTerm, SIGNAL(clicked()), this, SLOT(runAddTerms()));
    connect(TButtonRemoveTerm, SIGNAL(clicked()), this, SLOT(runRemoveTerms()));
    connect(CBoxTermsCode, SIGNAL(editTextChanged(QString)), this, SLOT(runAutoCompleteTermCode()));
    connect(TButtonExitTerm, SIGNAL(clicked()), this, SLOT(runExitWin()));
    connect(TButtonCleanForm, SIGNAL(clicked()), this, SLOT(runCleanForm()));
    //selection changes shall trigger a slot
    //QItemSelectionModel *selectionModel = TableViewTerms->selectionModel();
    connect(TableViewTerms->selectionModel(), SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)),
            this, SLOT(runLoadToChangeTerm(const QItemSelection &, const QItemSelection &)));

}

MngFormTerms::~MngFormTerms() {
}

/**
 * Method for load Factory from tableview and fill
 * form for will be changed.
 * terms_code, 
 * terms_descrip, 
 * terms_paymentexpect, 
 * terms_duedays, 
 * terms_discdays, 
 * terms_discprcnt, 
 * terms_cutoffday, 
 * terms_ap, 
 * terms_ar, 
 * terms_types, 
 * terms_active, 
 * terms_installment_quantity, 
 * terms_installmentdays) 
 * VALUES ('2-10-NET-30', '2-10-NET-30', 'D', 30, 10, 0.020000, 1, true, true, 'C', true, 0, 0);
 */
void MngFormTerms::runLoadToChangeTerm(const QItemSelection&, const QItemSelection&) {
    QVariant varId, varCode, varName, varPaymentExpect, varDueDays, varDiscDays,
            varDiscPercent, varDayCutOff, varCPayable, varCReceive,
            varType, varActive, varQtyInstallm, varIntallMentDays;
    //get the text of the selected item

    const QModelIndex index = TableViewTerms->selectionModel()->currentIndex();
    //QString selectedText = index.data(Qt::DisplayRole).toString();   

    QModelIndex seekRoot = index;

    seekRoot = termmodeltbl->index(index.row(), 0, QModelIndex());
    varId = termmodeltbl->data(seekRoot, Qt::DisplayRole);


    seekRoot = termmodeltbl->index(index.row(), 1, QModelIndex());
    varCode = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 2, QModelIndex());
    varName = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 3, QModelIndex());
    varPaymentExpect = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 4, QModelIndex());
    varDueDays = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 5, QModelIndex());
    varDiscDays = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 6, QModelIndex());
    varDiscPercent = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 7, QModelIndex());
    varDayCutOff = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 8, QModelIndex());
    varCPayable = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 9, QModelIndex());
    varCReceive = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 10, QModelIndex());
    varType = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 11, QModelIndex());
    varActive = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 12, QModelIndex());
    varQtyInstallm = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    seekRoot = termmodeltbl->index(index.row(), 13, QModelIndex());
    varIntallMentDays = termmodeltbl->data(seekRoot, Qt::DisplayRole);

    //ShowGuiMessage("info", "Mensagem", QString::number(prodfac->getFactoryId()));

    CBoxTermsCode->clear();
    CBoxTermsCode->addItem(varCode.toString());
    LEditTermsID->setText(varId.toString());
    LEditTermsDescrip->setText(varName.toString());
    SBoxTermsDueDaysLimite->setValue(varDueDays.toInt());
    //
    if (varPaymentExpect.toString() == "D") {
        RButtonForTypeDueDays->setChecked(true);
        SBoxTermsCutOffDay->setEnabled(false);
    } else if (varPaymentExpect.toString() == "P") {
        RButtonForTypeCutOffDay->setChecked(true);
        SBoxTermsCutOffDay->setValue(varDayCutOff.toInt());
    }
    //
    SBoxTermsDiscountDaysLimite->setValue(varDiscDays.toInt());
    LEditTermsDiscountPercentLimite->setText(tmu->QDoubleToText((varDiscPercent.toDouble() * 100), 2.0));
    CheckBoxPayable->setChecked(varCPayable.toBool());
    CheckBoxReceivables->setChecked(varCReceive.toBool());
    //
    if (varType.toString() == "C") {
        RButtonTermsInCash->setChecked(true);
        SBoxTermsQuantOfDaysByInstall->setDisabled(true);
        SBoxTermsQuantitiesOfInstallments->setDisabled(true);
    } else if (varType.toString() == "I") {
        RButtonTermsSubDivision->setChecked(true);
        SBoxTermsQuantOfDaysByInstall->setEnabled(true);
        SBoxTermsQuantitiesOfInstallments->setEnabled(true);
    }
    //
    CheckBoxTermsStatusActive->setChecked(varActive.toBool());
    SBoxTermsQuantOfDaysByInstall->setValue(varQtyInstallm.toInt());
    SBoxTermsQuantitiesOfInstallments->setValue(varIntallMentDays.toInt());

    enableFillFormForChange();
}

/**
 * Method for add new Factory for 
 * data base
 * terms_code, 
 * terms_descrip, 
 * terms_payment_expect, 
 * terms_duedays, 
 * terms_discdays, 
 * terms_discprcnt, 
 * terms_cutoffday, 
 * terms_ap, 
 * terms_ar, 
 * terms_types, 
 * terms_active, 
 * terms_installment_quantity, 
 * terms_installmentdays
 */
void MngFormTerms::runAddTerms() {
    int item_id;

    terms = new Terms();

    if (validSaveTerms()) {
        /**
         * If LEditCodeFactory is not hidden, is because
         * is form is mode for item add.
         */
        if (CBoxTermsCode->isEnabled()) {
            //ShowGuiMessage("info", "Mensagem", "Em runAddFactory(), Conexao Aberta.. Pegando ID");
            item_id = terms->getNextIdFromTable();
            //
            if (item_id > 0) {
                //
                //ShowGuiMessage("info", "Mensagem", "Salvando Inclusão");
                //
                terms->setTermId(item_id);
                terms->setTermCode(CBoxTermsCode->currentText());
                terms->setTermDescrip(LEditTermsDescrip->text());
                //
                if (RButtonForTypeDueDays->isChecked())
                    terms->setTermPaymentExpect("D");
                if (RButtonForTypeCutOffDay->isChecked())
                    terms->setTermPaymentExpect("P");
                //
                terms->setTermDueDays(SBoxTermsDueDaysLimite->value());
                terms->setTermDiscountDays(SBoxTermsDiscountDaysLimite->value());
                terms->setTermDiscountPercent((LEditTermsDiscountPercentLimite->text().toDouble() / 100.00));
                terms->setTermCutOffDay(SBoxTermsCutOffDay->value());
                terms->setTermAccountsPayable(CheckBoxPayable->isChecked());
                terms->setTermAccountReceivable(CheckBoxReceivables->isChecked());
                //
                if (RButtonTermsInCash->isChecked()) {
                    //
                    terms->setTermTypes("C");
                    terms->setTermInstallmentQuantity(SBoxTermsQuantitiesOfInstallments->value());
                    terms->setTermInstallmentDays(SBoxTermsQuantOfDaysByInstall->value());
                    //
                } else if (RButtonTermsSubDivision->isChecked()) {
                    //
                    terms->setTermTypes("I");
                    terms->setTermInstallmentQuantity(SBoxTermsQuantitiesOfInstallments->value());
                    terms->setTermInstallmentDays(SBoxTermsQuantOfDaysByInstall->value());
                    //
                }
                //
                terms->setTermActive(CheckBoxTermsStatusActive->isChecked());

                if (terms->addNewTerm()) {
                    ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Inclusão feita com Sucesso!!"),"");
                    //
                    terms = new Terms();
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

                qDebug() << "\n\nID: " << LEditTermsID->text().toInt() << endl;

                //
                terms->setTermId(LEditTermsID->text().toInt());
                terms->setTermCode(CBoxTermsCode->currentText());
                terms->setTermDescrip(LEditTermsDescrip->text());
                //
                if (RButtonForTypeDueDays->isChecked())
                    terms->setTermPaymentExpect("D");
                if (RButtonForTypeCutOffDay->isChecked())
                    terms->setTermPaymentExpect("P");
                //
                terms->setTermDueDays(SBoxTermsDueDaysLimite->value());
                terms->setTermDiscountDays(SBoxTermsDiscountDaysLimite->value());
                terms->setTermDiscountPercent((LEditTermsDiscountPercentLimite->text().toDouble() / 100.00));
                terms->setTermCutOffDay(SBoxTermsCutOffDay->value());
                terms->setTermAccountsPayable(CheckBoxPayable->isChecked());
                terms->setTermAccountReceivable(CheckBoxReceivables->isChecked());
                //
                if (RButtonTermsInCash->isChecked()) {
                    //
                    terms->setTermTypes("C");
                    terms->setTermInstallmentQuantity(SBoxTermsQuantitiesOfInstallments->value());
                    terms->setTermInstallmentDays(SBoxTermsQuantOfDaysByInstall->value());
                    //
                } else if (RButtonTermsSubDivision->isChecked()) {
                    //
                    terms->setTermTypes("I");
                    terms->setTermInstallmentQuantity(SBoxTermsQuantitiesOfInstallments->value());
                    terms->setTermInstallmentDays(SBoxTermsQuantOfDaysByInstall->value());
                    //
                }
                //
                terms->setTermActive(CheckBoxTermsStatusActive->isChecked());

                //
                if (terms->updateTerm()) {
                    ShowGuiMessage("info", "Mensagem!", QString::fromUtf8("Alteração feita com Sucesso!!"),"");
                    //
                    terms = new Terms();
                    //
                    populateTableView();
                    //   
                }
            }
        }

        //
        runCleanForm();
    }

}

/**
 * Method for auto complete field code
 * from form.
 */
void MngFormTerms::runAutoCompleteTermCode() {
    terms = new Terms();
    //
    termmodelsch->setQuery("SELECT terms_code FROM terms ORDER BY terms_code");

    completer = new QCompleter(termmodelsch, this);

    completer->setCaseSensitivity(Qt::CaseInsensitive);

    CBoxTermsCode->setCompleter(completer);
    //
    TButtonCleanForm->setEnabled(!CBoxTermsCode->currentText().isEmpty());

}

/**
 * Method for populate table view with 
 * all actual factorys 
 * 
 * INSERT INTO "public".terms (
 * terms_code, 
 * terms_descrip, 
 * terms_type, 
 * terms_duedays, 
 * terms_discdays, 
 * terms_discprcnt, 
 * terms_cutoffday, 
 * terms_ap, 
 * terms_ar, 
 * terms_incash, 
 * terms_active, 
 * terms_installment_quantity, 
 * terms_installmentdays) 
 * VALUES ('2-10-NET-30', '2-10-NET-30', 'D', 30, 10, 0.020000, 1, true, true, NULL, NULL, NULL, NULL);
 */
void MngFormTerms::populateTableView() {
    int col = 0;
    numbers << "Id" << "Código" << "Descrição" << "Tipo" << "Dias Venc."
            << "Dias Desc." << "Percen. %" << "Dia de Corte" << "C/P" << "C/R"
            << "Avista" << "Ativa" << "Qtd. Parcelas" << "Dias Parcelas";

    termmodeltbl->setQuery("SELECT * FROM terms ORDER BY terms_code");
    //

    foreach(QString name, numbers) {
        termmodeltbl->setHeaderData(col, Qt::Horizontal, QString::fromUtf8(name.toStdString().c_str()));
        col++;
    }
    //
    TableViewTerms->setModel(termmodeltbl);

    TableViewTerms->setSelectionMode(QAbstractItemView::ExtendedSelection);
    TableViewTerms->setDragEnabled(true);
    TableViewTerms->setAcceptDrops(true);
    TableViewTerms->setDropIndicatorShown(true);
    //
    TableViewTerms->setColumnWidth(0, 40);
    TableViewTerms->setColumnWidth(1, 100);
    TableViewTerms->setColumnWidth(2, 200);
    TableViewTerms->setColumnWidth(3, 50);
    TableViewTerms->setColumnWidth(4, 100);
    TableViewTerms->setColumnWidth(5, 100);
    TableViewTerms->setColumnWidth(6, 100);
    TableViewTerms->setColumnWidth(7, 100);
    TableViewTerms->setColumnWidth(8, 100);
    TableViewTerms->setColumnWidth(9, 100);
    //
    TableViewTerms->verticalHeader()->hide();
    //TableViewTerms->horizontalScrollBar()->hide();
    TableViewTerms->setSelectionBehavior(QAbstractItemView::SelectRows);
    TableViewTerms->setSelectionMode(QAbstractItemView::SingleSelection);
    TableViewTerms->setColumnHidden(0, true);
    //TableViewItemFactory->resizeColumnsToContents();//Expande column for fill in
    // TableViewItemFactory->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

/**
 * Valid if form is prepared for save 
 * new item reg.
 */
void MngFormTerms::runValidFillInForm() {
    TButtonSaveTerm->setEnabled((!CBoxTermsCode->currentText().isEmpty() && !LEditTermsDescrip->text().isEmpty()));
    //
    TButtonCleanForm->setEnabled((!CBoxTermsCode->currentText().isEmpty() || !LEditTermsDescrip->text().isEmpty()));
}

/**
 * Enable form for fill in for will 
 * be added.
 */
void MngFormTerms::enableFillFormForAdd() {
    TButtonSaveTerm->setEnabled(false);
    TButtonCleanForm->setEnabled(false);
    TButtonRemoveTerm->setEnabled(false);
    CBoxTermsCode->setEnabled(true);
    LEditTermsDescrip->setEnabled(true);
}

/**
 * Enable form for fill in for will
 * be changed.
 */
void MngFormTerms::enableFillFormForChange() {
    TButtonSaveTerm->setEnabled(false);
    TButtonRemoveTerm->setEnabled(true);
    CBoxTermsCode->setEnabled(false);
    LEditTermsDescrip->setEnabled(true);
}

/**
 * Disable form for fill in
 */
void MngFormTerms::disableFillForm() {
    //
    CBoxTermsCode->setEnabled(false);
    CBoxTermsCode->addItem("");
    CBoxTermsCode->clear();
    //
    LEditTermsDescrip->setEnabled(true);
    LEditTermsDescrip->clear();
    //
}

/**
 * Method for clean entry from form
 */
void MngFormTerms::runCleanForm() {
    //
    LEditTermsID->clear();
    //
    CBoxTermsCode->addItem("");
    CBoxTermsCode->clear();
    LEditTermsDescrip->clear();
    //
    CheckBoxPayable->setChecked(false);
    CheckBoxReceivables->setChecked(false);
    CheckBoxTermsStatusActive->setChecked(false);
    //
    RButtonTermsInCash->setAutoExclusive(false);
    RButtonTermsInCash->setChecked(false);
    RButtonTermsInCash->setAutoExclusive(true);
    //
    RButtonTermsSubDivision->setAutoExclusive(false);
    RButtonTermsSubDivision->setChecked(false);
    RButtonTermsSubDivision->setAutoExclusive(true);
    //
    RButtonForTypeDueDays->setAutoExclusive(false);
    RButtonForTypeDueDays->setChecked(false);
    RButtonForTypeDueDays->setAutoExclusive(true);
    //
    RButtonForTypeCutOffDay->setAutoExclusive(false);
    RButtonForTypeCutOffDay->setChecked(false);
    RButtonForTypeCutOffDay->setAutoExclusive(true);
    //
    SBoxTermsQuantitiesOfInstallments->setValue(0);
    SBoxTermsQuantOfDaysByInstall->setValue(0);
    SBoxTermsDueDaysLimite->setValue(0);
    SBoxTermsCutOffDay->setValue(0);
    SBoxTermsDiscountDaysLimite->setValue(0);
    //
    LEditTermsDiscountPercentLimite->clear();
    LEditTermsDiscountPercentLimite->setInputMask("99,99");
    //
    enableFillFormForAdd();
}

/**
 * Method for valid if form data will can be
 * write for database table 
 * @return 
 */
bool MngFormTerms::validSaveTerms() {
    //
    if (!(CheckBoxPayable->isChecked() || CheckBoxReceivables->isChecked())) {
        ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                QString::fromUtf8("Você Precisa Marcar Obrigatoriamente uma das Opções, "
                "(Pagamento/Recebimento)!!"),"");
        return false;
    }

    //
    if (!(RButtonTermsInCash->isChecked() || RButtonTermsSubDivision->isChecked())) {
        ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                QString::fromUtf8("Você Precisa Marcar Obrigatoriamente uma das Opções, "
                "(Avista/Parcelado)!!"),"");
        return false;
    }

    //
    if (RButtonTermsSubDivision->isChecked()) {
        //
        if (SBoxTermsQuantitiesOfInstallments->value() < 2) {
            ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                    QString::fromUtf8("Para Parcelamento!, O Minimo de Parcelas são de Duas!!"),"");
            //
            return false;
        }
        //
        if (SBoxTermsQuantOfDaysByInstall->value() < 15) {
            ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                    QString::fromUtf8("Para Parcelamento!, A Minimo de Dias para Cada Parcela são de 15 Dias!!"),"");
            //
            return false;
        }
        //
    }

    //
    if (!(RButtonForTypeDueDays->isChecked() || RButtonForTypeCutOffDay->isChecked())) {

        ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                QString::fromUtf8("Você Precisa Marcar Obrigatoriamente uma das Opções, "
                "(Dia de Pagamento/Dia de Corte)!!"),"");
        return false;
    }

    //
    if (RButtonForTypeCutOffDay->isChecked()) {
        //
        if (SBoxTermsCutOffDay->value() < 1) {
            ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                    QString::fromUtf8("Você Precisa Selecionar um Dia Corte Maior que Zero!!"),"");
            //
            return false;
        }
    }

    if (SBoxTermsDiscountDaysLimite->value() > 0) {
        //
        if (LEditTermsDiscountPercentLimite->text().isEmpty()) {
            ShowGuiMessage(INFO, QString::fromUtf8("Informação!"),
                    QString::fromUtf8("Você Precisa Informar um Percentual(%) para Desconto Antecipado!!"),"");
            //
            return false;
        }
    }


    //
    return true;
}

/**
 * Method for Remove a existing Factory
 * selectede from table view.
 */
void MngFormTerms::runRemoveTerms() {

    //ShowGuiMessage("info", "Mensagem", TEditIDFactory->toPlainText());

    if (!LEditTermsID->text().isEmpty()) {
        int res = 0;
        QList<MsgTrans> maplist;
        //
        maplist.append(getMsgTrans(QMessageBox::Yes, QString::fromUtf8("Sim")));
        maplist.append(getMsgTrans(QMessageBox::No, QString::fromUtf8("Não")));
        //
        QMessageBox qmsgb(QMessageBox::Information, QString::fromUtf8("Informação!!!"), QString::fromUtf8("Deseja Remover A Condição Selecionada..?"),
                QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        //
        res = ShowGuiQuestion(qmsgb, maplist);
        //
        if (res == QMessageBox::Yes) {

            terms->setTermId(LEditTermsID->text().toInt());

            if (terms->removeTerm()) {
                ShowGuiMessage(INFO, "Mensagem!", QString::fromUtf8("Remoção feita com Sucesso!!"),"");
                //
                terms = new Terms();
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
 * Method for close child window
 */
void MngFormTerms::runExitWin() {
    if (!statusCallSubWin) {
//        qobject_cast<QMdiSubWindow*>(parent())->close();
    } else {
        this->close(); //tambem funciona
    }
    //this->accept(); //tambem funciona
}
