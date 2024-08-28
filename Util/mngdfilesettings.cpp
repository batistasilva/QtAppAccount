#include "mngdfilesettings.h"

MngDFileSettings::MngDFileSettings(QObject *parent)
    : QObject(parent)
#ifndef WITH_PORTABLE_MODE
    , m_settings(new QSettings(this))
#else
    , m_settings(QFile::exists(AppSettings::portableConfigName()) ? new QSettings(AppSettings::portableConfigName(), QSettings::IniFormat, this) : new QSettings(this))
#endif
{

}

void MngDFileSettings::loadSettings()
{

}

void MngDFileSettings::setPathLog(QString m_pahtlog)
{
    m_settings->setValue("Log Path Folder", m_pahtlog);
}

QString MngDFileSettings::getPathLog() const
{
  return m_settings->value("Log Path Folder", defaultPathLog()).toString();
}

QString MngDFileSettings::defaultPathLog()
{
#ifdef Q_OS_LINUX
    return "/home/";
#endif
    return "C:";
}


