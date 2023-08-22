#include "clot02.h"
#include "QTimer"

Clot02::Clot02(QObject *parent): QObject{parent}{}

Clot02::~Clot02()
{
    qDebug() << "Получен деструктор Signals";
}

void Clot02::SendSignal_ss()  {
    emit sig_pb_ss();
qDebug() << "Получен Signals_ss";
}
void Clot02::SendSignal_r()
{
qDebug() << "Получен Signals_r";
    emit sig_pb_r();
}
