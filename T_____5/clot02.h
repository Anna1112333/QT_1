#ifndef CLOT02_H
#define CLOT02_H
//#include "mainwindow.h"
#include <QObject>
#include <QDebug>

class Clot02: public QObject
{
    Q_OBJECT

public:

   explicit Clot02(QObject *parent = nullptr);
    ~Clot02();
void SendSignal_ss();
void SendSignal_r();
signals:
    void sig_pb_ss();
    void sig_pb_r();
};

#endif // CLOT02_H
