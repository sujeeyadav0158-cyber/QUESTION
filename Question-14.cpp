#include <iostream>
using namespace std;

class ProductB;   

class ProductA
{
private:
    int priceA;

public:
    void setPrice()
    {
        cout << "Enter Price of Product A: ";
        cin >> priceA;
    }

    friend void compare(ProductA, ProductB);
};

class ProductB
{
private:
    int priceB;

public:
    void setPrice()
    {
        cout << "Enter Price of Product B: ";
        cin >> priceB;
    }

    friend void compare(ProductA, ProductB);
};

void compare(ProductA a, ProductB b)
{
    if (a.priceA > b.priceB)
        cout << "Product A is Costlier"<<endl;
    else if (b.priceB > a.priceA)
        cout << "Product B is Costlier"<<endl;
    else
        cout << "Both Products have Same Price"<<endl;
}

int main()
{
    ProductA a;
    ProductB b;

    a.setPrice();
    b.setPrice( );

    compare(a, b);

    return 0;
}