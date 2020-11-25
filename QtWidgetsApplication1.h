#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include <qabstractsocket.h>
class QTcpSocket;
class QFile;

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);

public slots:
    void openFile();
    void send();
    void startTransfer();
    void updateClientProgress(qint64 x);
    void displayError(QAbstractSocket::SocketError);
private:
    Ui::QtWidgetsApplication1Class ui;
    QTcpSocket* tcpClient;
    QFile* localFile;
    qint64 totalBytes;
    qint64 bytesWritten;
    qint64 bytesToWrite;
    qint64 payloadSize;
    QString fileName;
    QByteArray outBlock;
};
