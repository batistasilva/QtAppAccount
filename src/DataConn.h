/* 
 * File:   DataConn.h
 * Author: batista
 *
 * Created on 20 de Fevereiro de 2013, 12:08
 */

#ifndef DATACONN_H
#define	DATACONN_H
#include <QString>

class DataConn {
public:
    DataConn();
    //
    virtual ~DataConn();
    //

    QString getDatabase() const {
        return database;
    }

    QString getHostname() const {
        return hostname;
    }

    QString getPort() const {
        return port;
    }

    QString getUsername() const {
        return username;
    }

    QString getPassword() const {
        return password;
    }

    void setDatabase(QString database) {
        this->database = database;
    }

    void setHostname(QString hostname) {
        this->hostname = hostname;
    }

    void setPassword(QString password) {
        this->password = password;
    }

    void setPort(QString port) {
        this->port = port;
    }

    void setUsername(QString username) {
        this->username = username;
    }

    //

private:
    QString hostname;
    QString database;
    QString port;
    QString username;
    QString password;
};

#endif	/* DATACONN_H */

