#include "snack.h"

snack::snack(QString name,QObject *parent)
    : QObject{parent}
{
    setObjectName(name);
    qInfo()<<"snack constructor"<<this;
}
snack::~snack(){
    qInfo()<<"snack destructor"<<this;
}
