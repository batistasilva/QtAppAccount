/* 
 * File:   MngFormConfig.cpp
 * Author: batista
 * 
 * Created on 21 de Fevereiro de 2013, 09:06
 */

#include "MngFormConfig.h"

MngFormConfig::MngFormConfig() {
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    
    //
    connect(TButtonTestConn, SIGNAL(clicked()), this, SLOT(runTestConf()));
    connect(TButtonConfigDbSave, SIGNAL(clicked()), this, SLOT(runSaveConf()));
    connect(TButtonConfigDbExit, SIGNAL(clicked()), this, SLOT(runClose()));
}

MngFormConfig::~MngFormConfig() {
    runClose();
}

/**
 * Metodo responsavel por validar 
 * preenchimento do formulário.
 * @return 
 */
bool MngFormConfig::VlFillForm() {
    if (ConfigLEDbName->text().isEmpty()) {
        QMessageBox::warning(this, tr("Mensagem!"), tr("Preencha o Campo (Nome do Banco)!!"));
        return false;
    }
    //
    if (ConfigLEDbHost->text().isEmpty()) {
        QMessageBox::warning(this, tr("Mensagem!"), QString::fromUtf8("Preencha o Campo (Endereço do Banco)!!"));
        return false;
    }
    //
    if (ConfigLEDbPort->text().isEmpty()) {
        QMessageBox::warning(this, tr("Mensagem!"), tr("Preencha o Campo (Porta do Banco)!!"));
        return false;
    }
    //
    if (ConfigLEDbUser->text().isEmpty()) {
        QMessageBox::warning(this, tr("Mensagem!"), QString::fromUtf8("Preencha o Campo (Usuário do Banco)!!"));
        return false;
    }
    //
    if (ConfigLEDbPass->text().isEmpty()) {
        QMessageBox::warning(this, tr("Mensagem!"), tr("Preencha o Campo (Senha do Banco)!!"));
        return false;
    }
    //
    return true;
}

/**
 * Metodo responsavel por chamar metodo
 * de gravação dos dados do formulário.
 */
void MngFormConfig::runSaveConf() {

    if (VlFillForm() == true) {
        /**
         * seta os dados para o objeto, para que
         * sejam salvos para o arquivo xml
         */
        confconn.setDatabase(ConfigLEDbName->text());
        confconn.setHostname(ConfigLEDbHost->text());
        confconn.setPort(ConfigLEDbPort->text());
        confconn.setUsername(ConfigLEDbUser->text());
        confconn.setPassword(ConfigLEDbPass->text());
        //
        if (confconn.writeFile("Xml/ConfigConn.xml")) {
            ConfigLEDbTestResult->setStyleSheet(QString("QLineEdit { color: blue }"));
            ConfigLEDbTestResult->setText("Arquivo gerado com sucesso!!");
        }
    }

}

/**
 * Metodo responsavel por chamar metodo
 * de teste para os dados informados
 * no formulário.
 */
void MngFormConfig::runTestConf() {
    //
    if (VlFillForm() == true) {
        dbconn.setDatabase(ConfigLEDbName->text());
        dbconn.setHostname(ConfigLEDbHost->text());
        dbconn.setPort(ConfigLEDbPort->text());
        dbconn.setUsername(ConfigLEDbUser->text());
        dbconn.setPassword(ConfigLEDbPass->text());
        //
        if(dbconn.openConnInPGree()){
           ConfigLEDbTestResult->setStyleSheet(QString("QLineEdit { color: green }")); 
           ConfigLEDbTestResult->setText(QString::fromUtf8("Conexão feita com sucesso!!")); 
        }
    }
    //
}

/**
 * Metodo responsavel por fechar janela
 * de formulário aberta
 */
void MngFormConfig::runClose() {
       // qApp->quit();
//   qobject_cast<QMdiSubWindow*>(parent())->close();
    //this->accept();
   //this->close();
}
