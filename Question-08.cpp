#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void pay()
    {
        cout<<"Payment Mode:"<<endl;
    }
};

class CreditCardPayment : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using Credit Card" << endl;
    }
};

class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using UPI" << endl;
    }
};

class NetBanking : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using Net Banking" << endl;
    }
};

int main()
{
    Payment *p;

    CreditCardPayment c;
    UPI u;
    NetBanking n;

    p = &c;
    (*p).pay();

    p = &u;
    (*p).pay();

    p= &n;
    (*p).pay();

    return 0;
}