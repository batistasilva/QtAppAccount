/* 
 * File:   DirFile.h
 * Author: batista
 *
 * Created on 24 de Junho de 2011, 10:45
 */

#ifndef DIRFILE_H
#define	DIRFILE_H

#include <QString>
#include <QtCore/QCoreApplication>
#include <QTextStream>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QString>
#include "TimeUtil.h"
#include "ShowMsg.h"
//
using namespace std;
using std::string;

class DirFile {
public:
    DirFile();
    bool ValidIfFolderExist(QString path_name);
    bool ValidIfFileExist(QString name_file);
    void RemoveFile(QString filename);
    void CreateLogFile(QString filename, QString message);
    void CreateLogCap(char c, char t, char type_write);

    /**
     * Pega pasta de leitura
     */
    QString getFolder_read() const {
        return folder_read;
    }

    /**
     * Seta pasta para leitura
     * @param folder_read
     */
    void setFolder_read(QString folder_read) {
        this->folder_read = folder_read;
    }

    /**
     * Pega pasta de gravação
     * @return 
     */
    QString getFolder_write() const {
        return folder_write;
    }

    /**
     * Seta pasta para gravação
     * @param folder_write
     */
    void setFolder_write(QString folder_write) {
        this->folder_write = folder_write;
    }

    /**
     * Pega caminho do sistema
     * @return 
     */
    QString getSystem_path() const {
        return system_path;
    }

    /**
     * Seta caminho do sistema
     * @param system_path
     */
    void setSystem_path(QString system_path) {
        this->system_path = system_path;
    }

private:
    QString system_path;
    QString folder_read;
    QString folder_write;
    //
    TimeUtil *tmu;
    ShowMsg  *msg;
};

#endif	/* DIRFILE_H */

