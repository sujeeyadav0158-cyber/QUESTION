#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual  void calculateFare()
    {
        cout << "Fare Calculation" << endl;
    }
};

class Bus : public Vehicle
{
 
    float fare;

public:
    void getFare()
    {
        cout << "Enter Bus Fare: ";
        cin >> fare;
    }

    void calculateFare()
    {
        cout << "Bus Fare = Rs. " << fare << endl;
    }
};

class Train : public Vehicle
{
 
    float fare;

public:
    void getFare()
    {
        cout << "Enter Train Fare: ";
        cin >> fare;
    }

    void calculateFare()
    {
        cout << "Train Fare = Rs. " << fare << endl;
    }
};

class Flight : public Vehicle
{
 
    float fare;

public:
    void getFare()
    {
        cout << "Enter Flight Fare: ";
        cin >> fare;
    }

    void calculateFare()
    {
        cout << "Flight Fare = Rs. " << fare << endl;
    }
};

int main()
{
    Vehicle *v;
    Bus b;
    Train t;
    Flight f;

    b.getFare();
    t.getFare();
    f.getFare();

    v = &b;
    v->calculateFare();

    v = &t;
    v->calculateFare();

    v = &f;
    v->calculateFare();

    return 0;
}