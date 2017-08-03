#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H

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
    virtual Product* createProduct() = 0;
};

class FactoryA : public Factory
{
public:
    Product* createProduct()
    {
        return new ProductA();
    }
};

class FactoryB : public Factory
{
public:
    Product* createProduct()
    {
        return new ProductB();
    }
};

#endif // FACTORYMETHOD_H

