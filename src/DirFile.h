/* 
 * File:   DirFile.h
 * Author: batista
 *
 * Created on 24 de Junho de 2011, 10:45
 */

#ifndef DIRFILE_H
#define	DIRFILE_H
#include <vector>
#include <cstring>
#include <QString>
#include <iostream>
#include <cstdlib>
#include <fstream>	
#include <unistd.h>
#include <dirent.h>
#include <algorithm>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <cstdio>
#include <QtCore/QCoreApplication>
#include<QTextStream>
#include<QFile>
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
    vector<QString> ReadFolder();
    const char *getFileType(mode_t mode);
    bool ValidIfFolderExist(QString path_name);
    bool ValidFileExtension(QString name_file);
    bool ValidIfFileExist(QString name_file);
    void RemoveFiles(vector<QString> list_files);
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
     * Pega pasta de grava��o 
     * @return 
     */
    QString getFolder_write() const {
        return folder_write;
    }

    /**
     * Seta pasta para grava��o
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

