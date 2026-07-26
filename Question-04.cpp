#include <iostream>
using namespace std;

class Account
{
protected:
    int accNo;
    string name;
    double balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void showData()
    {
        cout << "Account Number = " << accNo << endl;
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance << endl;
    }
};
class SavingsAccount : public Account
{
    float interest;

public:
    void calculateInterest()
    {
        interest = balance * 0.05;

        cout << "Interest = " << interest << endl;
    }
};

class CurrentAccount : public Account
{
    float overdraft;

public:
    void checkOverdraft()
    {
        overdraft = 5000;

        cout << "Overdraft Limit = " << overdraft << endl;
    }
};

class FixedDepositAccount : public Account
{
    float rate;
    float maturity;

public:
    void calculateMaturity()
    {
        rate = 0.07;

        maturity = balance + (balance * rate);

        cout << "Maturity Amount = " << maturity << endl;
    }
};
int main()
{
    SavingsAccount s;
    cout << "\nSavings Account" << endl;
    s.getData();
    s.showData();
    s.calculateInterest();

    CurrentAccount c;
    cout << "\nCurrent Account" << endl;
    c.getData();
    c.showData();
    c.checkOverdraft();

    FixedDepositAccount f;

    cout << "\nFixed Deposit Account" << endl;
    f.getData();
    f.showData();
    f.calculateMaturity();

    return 0;
}
