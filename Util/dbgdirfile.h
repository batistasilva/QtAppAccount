#ifndef DBGDIRFILE_H
#define DBGDIRFILE_H

#include <QObject>
#include<QTextStream>
#include<QFile>
#include <QDir>
#include <QString>
#include "mngdfilesettings.h"

class MngDFileSettings;
class TimeUtil;
class ShowMsg;
class DbgDirFile : public QObject
{
    Q_OBJECT
public:
    explicit DbgDirFile(QObject *parent = nullptr);

    void CreateLogFile(QString filename, QString message);

    QString getLogwrite_fdname() const;
    void setLogwrite_fdname(const QString &newLogwrite_fdname);

signals:

private:
    QString system_path;
    QString logwrite_fdname;
    //
    TimeUtil *tmu;
    ShowMsg  *msg;
};

#endif // DBGDIRFILE_H
