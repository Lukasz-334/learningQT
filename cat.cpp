#include "cat.h"

Cat::Cat(QString name,QObject *parent)
    : QObject{parent}
{
    setObjectName(name);
    qInfo()<<"cat constructor<<"<<this;
}

Cat::~Cat(){
    qInfo()<<"cat dekonstructor<<"<<this;
}

void Cat::GetSnack(QSharedPointer<snack> s)
{
    mySnack_.swap(s);

}





