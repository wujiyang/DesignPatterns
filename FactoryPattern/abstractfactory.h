#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <iostream>
//产品类
class Product1
{
public:
    virtual void show() = 0;
};

class ProductA1 : public Product1
{
public:
    void show()
    {
        std::cout << "Product_A1" << std::endl;
    }
};

class ProductB1 : public Product1
{
public:
    void show()
    {
        std::cout << "Product_B1" << std::endl;
    }
};


class Product2
{
public:
    virtual void show() = 0;
};

class ProductA2 : public Product2
{
public:
    void show()
    {
        std::cout << "Product_A2" << std::endl;
    }
};

class ProductB2 : public Product2
{
public:
    void show()
    {
        std::cout << "Product_B2" << std::endl;
    }
};

//工厂类
class Factory
{
public:
    virtual Product1* createProduct1() = 0;
    virtual Product2* createProduct2() = 0;
};

class FactoryA : public Factory
{
public:
    Product1* createProduct1(){ return new ProductA1(); }
    Product2* createProduct2(){ return new ProductA2(); }
};

class FactoryB : public Factory
{
public:
    Product1* createProduct1(){ return new ProductB1(); }
    Product2* createProduct2(){ return new ProductB2(); }

};

#endif // ABSTRACTFACTORY_H

