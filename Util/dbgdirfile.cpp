#include "dbgdirfile.h"

DbgDirFile::DbgDirFile(QObject *parent)
    : QObject(parent),
    tmu(new TimeUtil(this)),
    msg(new ShowMsg(this))
{

}

void DbgDirFile::CreateLogFile(QString filename, QString message)
{
    //seta o nome do arquivo
    // QString name_file = "LOGREAD" + sndpager.getRoom_code() + tmu.getTimeFormat("%d%m%H%M%S") + ".TXT";
    QString name_file = filename +"-"+ tmu->getTimeFormat("%d%m-%H%M%S") + ".TXT";

    msg->ShowMessage("GRAVANDO LOG, PARA: " + name_file, COLOR_BLUE, COLOR_PINK);

    QString folder_write = "/home/system/WorkSpace/QtProjects/QtAppAccount/Logs/";
    QDir directory(folder_write);
    msg->ShowMessage("Directory: " + directory.dirName(), COLOR_GREEN, COLOR_PINK);

    QString file_path = directory.filePath(name_file);
    msg->ShowMessage("Path: " + file_path, COLOR_GREEN, COLOR_PINK);

    directory.setPath(folder_write);

    /**
     * Abre o arquivo para gravacao. Caso ele exista
     * gera um novo arquivo.
     */
    QFile file(file_path);

    msg->ShowMessage("GRAVANDO PARA PASTA: " + file_path, COLOR_CIANO, COLOR_PINK);


    if (!directory.exists()) {
        msg->ShowMessage("CreateLogFile(), ERRO PASTA NAO ENCONTRADA..." + folder_write, COLOR_CIANO, COLOR_RED);

        if (!directory.mkdir(folder_write))
            msg->ShowMessage("CreateLogFile(), ERRO, NAO FOI POSSIVEL CRIAR A PASTA: " + folder_write, COLOR_CIANO, COLOR_RED);
    }

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << message.toStdString().c_str() << "\n";
        file.close();
    } else {
        msg->ShowMessage("DirFile*::CreateLogFile(), ERRO NA GRAVACAO DO ARQUIVO" + name_file, COLOR_CIANO, COLOR_RED);
    }
}

QString DbgDirFile::getLogwrite_fdname() const
{
    return logwrite_fdname;
}

void DbgDirFile::setLogwrite_fdname(const QString &newLogwrite_fdname)
{
    logwrite_fdname = newLogwrite_fdname;
}
