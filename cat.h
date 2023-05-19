#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>
#include <Qstring>
#include "snack.h"


class Cat : public QObject
{

    Q_OBJECT
public:
    explicit Cat(QString name="",QObject *parent = nullptr);
    ~Cat();

    void GetSnack(QSharedPointer<snack>s);
    QString getNameSnack(){
        return mySnack_->objectName();
    }

private:
    QSharedPointer<snack>mySnack_;



signals:
};

#endif // CAT_H
