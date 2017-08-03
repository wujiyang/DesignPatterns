#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H


#include <iostream>

//产品类
enum PRODUCTTYPE {A, B};
class Product
{
public:
    virtual void show() = 0;
};

class ProductA : public Product
{
public:
    void show()
    {
        std::cout << "Product_A" << std::endl;
    }
};

class ProductB : public Product
{
public:
    void show()
    {
        std::cout << "Product_B" << std::endl;
    }
};

//工厂类
class Factory
{
public:
    Product* CreateProduct(PRODUCTTYPE type)
    {
        switch (type) {
        case A:
            return new ProductA();
            break;
        case B:
            return new ProductB();
            break;
        default:
            break;
        }
    }
};



#endif // SIMPLEFACTORY_H

