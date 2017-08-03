#include "abstractfactory.h"

int main()
{
    FactoryA *factory_a = new FactoryA();
    factory_a->createProduct1()->show();
    factory_a->createProduct2()->show();

    FactoryB *factory_b = new FactoryB();
    factory_b->createProduct1()->show();
    factory_b->createProduct2()->show();

    delete factory_a;
    delete factory_b;

    return 0;
}
