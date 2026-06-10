#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void calculateFare()
    {
        cout << " Fare Calculation : " << endl;
    }
};

class Bus : public Vehicle
{
public:
    void calculateFare()
    {
        cout << "Bus Fare = Rs. 500" << endl;
    }
};

class Train : public Vehicle
{
public:
    void calculateFare()
    {
        cout << "Train Fare = Rs. 1000" << endl;
    }
};

class Flight : public Vehicle
{
public:
    void calculateFare()
    {
        cout << "Flight Fare = Rs. 5000" << endl;
    }
};

int main()
{
    Vehicle *v;
    Bus b;
    Train t;
    Flight f;

    v = &b;
    (*v).calculateFare();

    v = &t;
    (*v).calculateFare();

    v = &f;
    (*v).calculateFare();

    return 0;
}