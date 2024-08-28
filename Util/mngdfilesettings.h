#ifndef MNGDFILESETTINGS_H
#define MNGDFILESETTINGS_H

#include <QSettings>
#include <QApplication>
#include <QObject>
#include "TimeUtil.h"
#include "Util/ShowMsg.h"


class QSettings;
class TimeUtil;
class ShowMsg;
class MngDFileSettings : public QObject
{
    Q_OBJECT
public:
    explicit MngDFileSettings(QObject *parent = nullptr);
    void loadSettings();
    //
    //For Path
    void setPathLog(QString m_pahtlog);
    QString getPathLog() const;
    static QString defaultPathLog();

signals:

private:
    QSettings * m_settings;
    QString m_setting_file;
    //
    TimeUtil *tmu;
    ShowMsg  *msg;
};

#endif // MNGDFILESETTINGS_H
