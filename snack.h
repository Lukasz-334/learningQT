#ifndef SNACK_H
#define SNACK_H

#include <QObject>
#include <QDebug>
#include <Qstring>

class snack : public QObject
{
    Q_OBJECT
public:
    explicit snack(QString name="",QObject *parent = nullptr);
    ~snack();

signals:

};

#endif // SNACK_H
