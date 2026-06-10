#include <iostream>
using namespace std;

class Insurance
{
public:
    virtual void calculatePremium()
    {
        cout << "Insurance Premium : " << endl;
    }
};

class HealthInsurance : public Insurance
{
public:
    void calculatePremium()
    {
        cout << "Health Insurance Premium = Rs. 10000" << endl;
    }
};

class VehicleInsurance : public Insurance
{
public:
    void calculatePremium()
    {
        cout << "Vehicle Insurance Premium = Rs. 8000" << endl;
    }
};

class LifeInsurance : public Insurance
{
public:
    void calculatePremium()
    {
        cout << "Life Insurance Premium = Rs. 9000" << endl;
    }
};

int main()
{
    Insurance *i;

    HealthInsurance h;
    VehicleInsurance v;
    LifeInsurance l;

    i = &h;
    (*i).calculatePremium();

    i = &v;
    (*i).calculatePremium();

    i = &l;
    (*i).calculatePremium();

    return 0;
}