/* 
 * File:   ShowMsg.cpp
 * Author: batista
 * 
 * Created on 8 de Mar�o de 2013, 20:45
 */

#include "ShowMsg.h"

ShowMsg::ShowMsg() {
}

ShowMsg::~ShowMsg() {
}

void ShowMsg::ShowMessage(QString message, int first_color, int second_color) {
    int lenght_msg, lenght, i;
    //char colors[][20] = {"\033[01;30m\033[22;47m", "\033[01;31m\033[22;47m", "\033[01;32m\033[22;47m", "\033[01;33m\033[22;47m", "\033[01;34m\033[22;47m", "\033[01;35m\033[22;47m", "\033[01;36m\033[22;47m", "\033[01;37m\033[43m", "\033[0m"};

    char colors[][20] = {"\033[02;30m", "\033[02;31m", "\033[02;32m", "\033[02;33m", "\033[02;34m", "\033[02;35m", "\033[02;36m", "\033[02;37m", "\033[0m"};
    lenght_msg = message.length() + 6; //tamanho da mensagem
    lenght = message.length(); //tamanho da mensagem

    for (i = 0; i < lenght_msg; i++)
        cout << colors[first_color] << '*';

    cout << "\n*  ";
    for (i = 0; i < lenght; i++)
        cout << " ";
    cout << "  *" << endl;
    cout << endl;
    // cout << colors[second_color] << "[" << __FILE__ << ":" << __LINE__ << "] " << colors[first_color] << endl;
    //
    cout << "   " << colors[second_color] << message.toStdString() << colors[first_color] << endl;

    cout << "\n*  ";
    for (i = 0; i < lenght; i++)
        cout << " ";
    cout << "  *" << endl;

    for (i = 0; i < lenght_msg; i++)
        cout << '*';

    cout << colors[8] << "\n\n";
}

/**
 * Show a type of message.
 * E.G. ShowGuiMessage("info", "Message", "Everything is AlRight!!");
 * @param msgtype
 * @param msgtitle
 * @param message
 */
void ShowMsg::ShowGuiMessage(QString msgtype, QString msgtitle, QString message, QString style) {

    if (msgtype == "info") {
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setWindowTitle(msgtitle);
        msgBox.setText(message);
        //
        if (!style.isEmpty()) {
            msgBox.setStyleSheet(style);
        } else {
            msgBox.setStyleSheet("QLabel{border-width: 1px; border-style: solid;"
                    "background: #FFF9EF; color:#0829FF;}");
        }
        msgBox.exec();
    } else if (msgtype == "warn") {
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle(msgtitle);
        msgBox.setText(message);
        //
        if (!style.isEmpty()) {
            msgBox.setStyleSheet(style);
        } else {
            msgBox.setStyleSheet("QLabel{border-width: 1px;border-style: solid;"
                    "background: #FFFFFF; color:#A60180;}");
        }
        //
        msgBox.exec();
    } else if (msgtype == "error") {
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setWindowTitle(msgtitle);
        msgBox.setText(message);
        //
        if (!style.isEmpty()) {
            msgBox.setStyleSheet(style);
        } else {
            msgBox.setStyleSheet("QLabel{border-width: 1px; border-style: solid;"
                    "background: #FFFFFF; color:#AF4900;}");
        }
        //
        msgBox.exec();
    }
}


/**
 *
QMessageBox::Ok              0x00000400         An "OK" button defined with the AcceptRole.
QMessageBox::Open            0x00002000         A "Open" button defined with the AcceptRole.
QMessageBox::Save            0x00000800         A "Save" button defined with the AcceptRole.
QMessageBox::Cancel          0x00400000         A "Cancel" button defined with the RejectRole.
QMessageBox::Close           0x00200000         A "Close" button defined with the RejectRole.
QMessageBox::Discard         0x00800000         A "Discard" or "Don't Save" button, depending on the platform, defined with the DestructiveRole.
QMessageBox::Apply           0x02000000         An "Apply" button defined with the ApplyRole.
QMessageBox::Reset           0x04000000         A "Reset" button defined with the ResetRole.
QMessageBox::RestoreDefaults 0x08000000         A "Restore Defaults" button defined with the ResetRole.
QMessageBox::Help            0x01000000         A "Help" button defined with the HelpRole.
QMessageBox::SaveAll         0x00001000         A "Save All" button defined with the AcceptRole.
QMessageBox::Yes             0x00004000         A "Yes" button defined with the YesRole.
QMessageBox::YesToAll        0x00008000         A "Yes to All" button defined with the YesRole.
QMessageBox::No              0x00010000         A "No" button defined with the NoRole.
QMessageBox::NoToAll         0x00020000         A "No to All" button defined with the NoRole.
QMessageBox::Abort           0x00040000         An "Abort" button defined with the RejectRole.
QMessageBox::Retry           0x00080000         A "Retry" button defined with the AcceptRole.
QMessageBox::Ignore          0x00100000         An "Ignore" button defined with the AcceptRole.
QMessageBox::NoButton        0x00000000 	An invalid button.
 
 * @return 
 */
int ShowMsg::ShowGuiQuestion(QMessageBox& qmsgb, QList<MsgTrans> maplist) {

    foreach(MsgTrans op, maplist) {
        //
        switch (op.typemsg) {
            case QMessageBox::Ok:
                qmsgb.button(QMessageBox::Ok)->setText(op.msg);
                //                qDebug() << "OK Selected" << op.msg;
                break;
            case QMessageBox::Open:
                qmsgb.button(QMessageBox::Open)->setText(op.msg);
                //                qDebug() << "Open Selected" << op.msg;
                break;

            case QMessageBox::Save:
                qmsgb.button(QMessageBox::Save)->setText(op.msg);
                //                qDebug() << "Save Selected" << op.msg;
                break;

            case QMessageBox::Cancel:
                qmsgb.button(QMessageBox::Cancel)->setText(op.msg);
                //                qDebug() << "Cancel Selected" << op.msg;
                break;

            case QMessageBox::Close:
                qmsgb.button(QMessageBox::Close)->setText(op.msg);
                //                qDebug() << "Close Selected" << op.msg;
                break;

            case QMessageBox::Discard:
                qmsgb.button(QMessageBox::Discard)->setText(op.msg);
                //                qDebug() << "Discard Selected" << op.msg;
                break;

            case QMessageBox::Apply:
                qmsgb.button(QMessageBox::Apply)->setText(op.msg);
                //                qDebug() << "Apply Selected" << op.msg;
                break;

            case QMessageBox::Reset:
                qmsgb.button(QMessageBox::Reset)->setText(op.msg);
                //                qDebug() << "Reset Selected" << op.msg;
                break;

            case QMessageBox::RestoreDefaults:
                qmsgb.button(QMessageBox::RestoreDefaults)->setText(op.msg);
                //                qDebug() << "Restore Defaults Selected" << op.msg;
                break;

            case QMessageBox::Help:
                qmsgb.button(QMessageBox::Help)->setText(op.msg);
                //                qDebug() << "Help Selected" << op.msg;
                break;

            case QMessageBox::SaveAll:
                qmsgb.button(QMessageBox::SaveAll)->setText(op.msg);
                //                qDebug() << "SaveAll Selected" << op.msg;
                break;

            case QMessageBox::Yes:
                qmsgb.button(QMessageBox::Yes)->setText(op.msg);
                // qmsgb.button(QMessageBox::Yes)->setStyleSheet("QButton{color:blue}");
                //                qDebug() << "Yes Selected" << op.msg;
                break;

            case QMessageBox::YesToAll:
                qmsgb.button(QMessageBox::YesToAll)->setText(op.msg);
                //                qDebug() << "YesToAll Selected" << op.msg;
                break;

            case QMessageBox::No:
                qmsgb.button(QMessageBox::No)->setText(op.msg);
                //                qDebug() << "No Selected" << op.msg;
                break;

            case QMessageBox::NoToAll:
                qmsgb.button(QMessageBox::NoToAll)->setText(op.msg);
                //                qDebug() << "NoToAll Selected" << op.msg;
                break;

            case QMessageBox::Abort:
                qmsgb.button(QMessageBox::Abort)->setText(op.msg);
                //                qDebug() << "Abort Selected" << op.msg;
                break;

            case QMessageBox::Retry:
                qmsgb.button(QMessageBox::Retry)->setText(op.msg);
                //                qDebug() << "Retry Selected" << op.msg;
                break;

            case QMessageBox::Ignore:
                qmsgb.button(QMessageBox::Ignore)->setText(op.msg);
                //                qDebug() << "Ignore Selected" << op.msg;
                break;

            case QMessageBox::NoButton:
                qmsgb.button(QMessageBox::NoButton)->setText(op.msg);
                //                qDebug() << "NoButton Selected" << op.msg;
                break;

            default:
                //                qDebug() << "Action Not defined!" << op.msg;
                // should never be reached
                break;
        }
    }


    switch (qmsgb.exec()) {
        case QMessageBox::Ok:
            //            qDebug() << "OK Clicked";
            return QMessageBox::Ok;

        case QMessageBox::Open:
            qDebug() << "Open Clicked";
            return QMessageBox::Open;

        case QMessageBox::Save:
            //            qDebug() << "Save Clicked";
            return QMessageBox::Save;

        case QMessageBox::Cancel:
            //            qDebug() << "Cancel Clicked";
            return QMessageBox::Cancel;

        case QMessageBox::Close:
            //            qDebug() << "Close Clicked";
            return QMessageBox::Close;

        case QMessageBox::Discard:
            //            qDebug() << "Discard Clicked";
            return QMessageBox::Discard;

        case QMessageBox::Apply:
            //            qDebug() << "Apply Clicked";
            return QMessageBox::Apply;

        case QMessageBox::Reset:
            //            qDebug() << "Reset Clicked";
            return QMessageBox::Reset;

        case QMessageBox::RestoreDefaults:
            //            qDebug() << "Restore Defaults Clicked";
            return QMessageBox::RestoreDefaults;

        case QMessageBox::Help:
            //            qDebug() << "Help Clicked";
            return QMessageBox::Help;

        case QMessageBox::SaveAll:
            //            qDebug() << "SaveAll Clicked";
            return QMessageBox::SaveAll;

        case QMessageBox::Yes:
            //            qDebug() << "Yes Clicked";
            return QMessageBox::Yes;

        case QMessageBox::YesToAll:
            //            qDebug() << "YesToAll Clicked";
            return QMessageBox::YesToAll;

        case QMessageBox::No:
            //            qDebug() << "No Clicked";
            return QMessageBox::No;

        case QMessageBox::NoToAll:
            //            qDebug() << "NoToAll Clicked";
            return QMessageBox::NoToAll;

        case QMessageBox::Abort:
            //            qDebug() << "Abort Clicked";
            return QMessageBox::Abort;

        case QMessageBox::Retry:
            //            qDebug() << "Retry Clicked";
            return QMessageBox::Retry;

        case QMessageBox::Ignore:
            //            qDebug() << "Ignore Clicked";
            return QMessageBox::Ignore;

        case QMessageBox::NoButton:
            //            qDebug() << "NoButton Clicked";
            return QMessageBox::NoButton;

        default:
            //            qDebug() << "Action Not defined!";
            // should never be reached
            break;
    }
    //
    return -1;
}

/**
 * Method for add button to translate
 * for message gui.
 * @param numbt
 * @param button
 * @return 
 */
MsgTrans ShowMsg::getMsgTrans(int numbt, const QString msg) {
    MsgTrans msgt;
    //
    msgt.typemsg = numbt;
    msgt.msg = msg;
    //
    return msgt;
}