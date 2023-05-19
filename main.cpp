#include <QCoreApplication>
#include <QSharedPointer>
#include <vector>
#include "snack.h"
#include "cat.h"



void catGenerator(){

    std::vector<QString>snackName{"salomon","chicken,","tuna","biscuits","beef"};
    std::vector<QString>catName{"Luna","Oliwier","Bella","Milo","Willow"};
    std::vector<QSharedPointer<Cat>>Cats;

    for(size_t i=0;i<5;i++){

        Cats.push_back(QSharedPointer<Cat>(new Cat(catName[i])));
        Cats[i]->GetSnack(QSharedPointer<snack>(new snack(snackName[i])));
    }

    for(size_t i=0;i<5;i++){

        qInfo()<<"Cat "<<Cats[i]->objectName() <<" have "<<Cats[i]->getNameSnack();
    }


}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    catGenerator();


    return a.exec();
}
