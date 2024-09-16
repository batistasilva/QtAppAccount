/* 
 * File:   DirFile.cpp
 * Author: batista
 * 
 * Created on 24 de Junho de 2011, 10:45
 */

#include "DirFile.h"
#include "src/ShowMsg.h"

DirFile::DirFile() {
    tmu = new TimeUtil();
}

/**
 * Valida se uma pasta existe no disco
 * @param path_name
 * @return 
 */
bool DirFile::ValidIfFolderExist(QString path_name) {
    QDir myDir(path_name);

    if (!myDir.exists()) {
        msg->ShowMessage("DirFile::ValidIfFolderExist(), NAO PODE ABRIR A PASTA: " + path_name, COLOR_GREEN, COLOR_RED);
        return false;
    }

    return true;
}

/**
 * Valida se um arquivo existe no disco
 * para o caminho e nome especificado.
 * @param name_file
 * @return 
 */
bool DirFile::ValidIfFileExist(QString name_file) {
    //QFileInfo fileinfo(name_file);
    QFile f(name_file);

    if(!f.exists()){
        msg->ShowMessage("DirFile::ValidIfFileExist(), IMPOSSIVEL ABRIR ARQUIVO: " + name_file, COLOR_GREEN, COLOR_RED);
        return false;
    }
    return true;
}



/**
 * Remove o arquivo para o nome e caminho
 * informado.
 * @param filename
 */
void DirFile::RemoveFile(QString filename) {
    QFile fitorm(filename);
    if(fitorm.remove())
       msg->ShowMessage("DirFile::RemoveFile(), REMOVIDO O ARQUIVO: " + filename, COLOR_GREEN, COLOR_PINK);

}

/**
 * Metodo responsavel por gravar arquivo de logs
 * @param QString filename, QString message
 */
void DirFile::CreateLogFile(QString filename, QString message) {
    //
    msg->ShowMessage("GRAVANDO LOG, PARA: " + filename, COLOR_BLUE, COLOR_PINK);

    //seta o nome do arquivo
    // QString name_file = "LOGREAD" + sndpager.getRoom_code() + tmu.getTimeFormat("%d%m%H%M%S") + ".TXT";
    QString name_file = filename + tmu->getTimeFormat("%d%m%H%M%S") + ".TXT";

    //Seta o caminho do arquivo com a pasta especificada e nome do arquivo
    QString pathfile = folder_write + name_file;

    msg->ShowMessage("GRAVANDO PARA PASTA: " + pathfile, COLOR_CIANO, COLOR_PINK);

    /**
     * Abre o arquivo para gravacao. Caso ele exista
     * gera um novo arquivo.
     */
    QFile file(pathfile);

    QDir dir(folder_write);

    //QDir dir("/home/bob");
    QString dirpath;

    dirpath = dir.absolutePath(); // s is "images/file.jpg"

   // msg->ShowMessage("CreateLogFile(), PATH " + dirpath, COLOR_CIANO, COLOR_RED);


    if (!dir.exists()) {
        if (!dir.mkdir(dirpath))
            //qWarning("Cannot find the example directory");
            msg->ShowMessage("CreateLogFile(), ERRO PASTA NAO ENCONTRADA, E NAO FOI POSSIVEL CRIAR" + dirpath, COLOR_CIANO, COLOR_RED);
    }

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << message.toStdString().c_str() << "\n";
        file.close();
    } else {
        msg->ShowMessage("DirFile::CreateLogFile(), ERRO NA GRAVACAO DO ARQUIVO" + pathfile, COLOR_CIANO, COLOR_RED);
    }

}

void DirFile::CreateLogCap(char str, char t, char type_write) {
    //
    //
    //seta o nome do arquivo
    QString name_file = "LOGCAP.TXT";

    QString pathfile = "./Logs/" + name_file;

    fstream file_op(pathfile.toStdString().c_str(), ios::out | ios::app);
    //cout << "Decimal: " << dec << (int) c;

    if (t == 'r') {//Para Leitura
        file_op << "-->> " << "Char: [";
        //
        if (str >= 0x20 && str <= 0x7e) {
            file_op << str;
        } else {
            file_op << '?';
        }
        //
        file_op << " ]";
        //
        //file_op << " Dec = ";
        //file_op << dec << (int) str;
        //file_op << " \t";
        //
        file_op << "Hex: [";
        file_op << hex << (int) str;
        file_op << " ]\t" << tmu->getTimeFormat("%H:%M:%S").toStdString().c_str() << '\n';
        // 
    } else if (t == 'w') {//Para gravacao
        //Se char == 's', gravar linha de inicio de processo de captura
        if (type_write == 's') {
            file_op << "\n------------------[INICIANDO PROCESSO]-------------------\n";
        } else//Se char == 'n', gravar conteudo para processo de gravacao padrao
            if (type_write == 'n') {


            file_op << "<<--" << "Char: [";
            //
            if (str >= 0x20 && str <= 0x7e) {
                file_op << str;
            } else {
                file_op << '?';
            }
            //
            file_op << " ]";
            //
            //file_op << " Dec = ";
            //file_op << dec << (int) str;
            //file_op << " \t";
            //
            file_op << "Hex: [";
            file_op << hex << (int) str;
            file_op << " ]\t" << tmu->getTimeFormat("%H:%M:%S").toStdString().c_str() << '\n';
            //
        } else //Se char == 'e', gravar linha de fim de processo de captura
            if (type_write == 'e') {
            file_op << "\n------------------[FINALIZANDO PROCESSO]-------------------\n";
        }
        //
        file_op.close();
    }
}

