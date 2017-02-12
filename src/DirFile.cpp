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
    DIR *mypath;

    mypath = opendir(path_name.toStdString().c_str());

    if (!mypath) {
        msg->ShowMessage("DirFile::ValidIfFolderExist(), NAO PODE ABRIR A PASTA: " + path_name, COLOR_GREEN, COLOR_RED);
        return false;
    }

    closedir(mypath); //fecha a abertura do diretorio

    return true;
}

/**
 * Valida se um arquivo existe no disco
 * para o caminho e nome especificado.
 * @param name_file
 * @return 
 */
bool DirFile::ValidIfFileExist(QString name_file) {
    ifstream arq;
    //
    arq.open(name_file.toStdString().c_str());

    if (arq.is_open() && arq.good()) {
        arq.close();
        return true;
    } else {
        msg->ShowMessage("DirFile::ValidIfFileExist(), IMPOSSIVEL ABRIR ARQUIVO: " + name_file, COLOR_GREEN, COLOR_RED);
        return false;
    }
}

/**
 * Metodo responsavel por fazer a leitura de 
 * uma pasta do sistema 
 * @return 
 */
vector<QString> DirFile::ReadFolder() {
    DIR *mypath;
    dirent *cd;
    struct stat statbuf;
    mode_t modes;
    vector<QString> dir_files;

    //Pega caminho com pasta
    QString strpath = system_path + folder_read;

    mypath = opendir(strpath.toStdString().c_str());

    if (!mypath) {
        msg->ShowMessage("DirFile::ReadFolder(), NAO PODE ABRIR A PASTA: " + strpath, COLOR_GREEN, COLOR_PINK);
        exit(EXIT_FAILURE);
        // return EXIT_FAILURE;
    }

    //   cout << endl;
    //Emquanto tiver arquivos coloca em (cd) 
    while ((cd = readdir(mypath))) {
        //passa o nome do arquivo para name_file
        QString name_file = cd->d_name;



//        lstat(name_file.toStdString().c_str(), &statbuf);

        // stat(name_file.c_str(), &statbuf);
        modes = statbuf.st_mode;
        msg->ShowMessage("TIPO DE ARQUIVO: " + QString(getFileType(modes)), COLOR_GREEN, COLOR_PINK);

        bool result_extension = ValidFileExtension(name_file);
        /**
         * Se n�o for "." ou "..', que s�o raiz de diretorios,
         * ou um diretorio, entra para adicionar o nome do arquivo 
         * na lista de arquivos (dir_files) 
         */
        if (!S_ISDIR(modes) || result_extension == true) {//diferente de diretorio
            msg->ShowMessage("Adicionando: " + name_file, COLOR_GREEN, COLOR_PINK);
            dir_files.push_back(name_file);
        }
    }

    //Ordena a lista de arquivos
    sort(dir_files.begin(), dir_files.end());

    closedir(mypath); //fecha a abertura do diretorio

    return dir_files;
    // return EXIT_SUCCESS;
}

/**
 * Metodo responsavel por validar a extens�o do
 * arquivo, retornando true ou false. 
 * @param name_file
 * @return true or false
 */
bool DirFile::ValidFileExtension(QString name_file) {

    if (name_file.contains('.')) {
        msg->ShowMessage("DirFile::ValidFileExtension(), EXTENSAO DO ARQUIVO: " + name_file, COLOR_GREEN, COLOR_PINK);
        return true;
    } else {
        msg->ShowMessage("DirFile::ValidFileExtension(), ARQUIVO SEM EXTENSAO!: " + name_file, COLOR_GREEN, COLOR_PINK);
        return false;
    }
}

/**
 * Metodo responsavel por verificar o tipo
 * do arquivo lido da pasta.
 * @param mode
 * @return 
 */
const char * DirFile::getFileType(mode_t mode) {
    if (S_ISBLK(mode))
        return "Block special file";
    if (S_ISCHR(mode))
        return "Character special file";
    if (S_ISDIR(mode))
        return "Directory";
    if (S_ISFIFO(mode))
        return "Pipe or FIFO special file";
    if (S_ISREG(mode))
        return "Regular file";
    return "unknown type";
}

/**
 * Metodo responsavel por Remover uma lista de arquivos 
 * @param list_files
 */
void DirFile::RemoveFiles(vector<QString> list_files) {
    unsigned int i;

    //lista os arquivos
    msg->ShowMessage("DirFile::RemoveFiles(), ARQUIVOS DISPONIVEIS NA LISTA", COLOR_GREEN, COLOR_PINK);
    //
    for (i = 0; i < list_files.size(); i++) {
        //
        QString strfiletorm = system_path + folder_read + list_files.at(i);
        //std::remove(strfiletorm.c_str());//(remove()), tambem faz remo��o
        //Remove o arquivo
        unlink(strfiletorm.toStdString().c_str());
        msg->ShowMessage("DirFile::RemoveFiles(), REMOVIDO O ARQUIVO: " + strfiletorm, COLOR_GREEN, COLOR_PINK);
    }
    //   cout << endl << endl; //dar 2 enters
}

/**
 * Remove o arquivo para o nome e caminho
 * informado.
 * @param filename
 */
void DirFile::RemoveFile(QString filename) {
    //std::remove(strfiletorm.c_str());//(remove()), tambem faz remocao
    //Remove o arquivo
    unlink(filename.toStdString().c_str());
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

    QString pathfile = "/home/multitone/sistema/Logs/" + name_file;

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

