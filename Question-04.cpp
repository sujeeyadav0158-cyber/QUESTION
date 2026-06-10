#include <iostream>
using namespace std;
class Account
{
private:
    int accNo;
    string name;
    double balance;

public:
    Account(int a, string n, double b)
    {
        accNo = a;
        name = n;
        balance = b;
    }

    void display()
    {
        cout << " \n Account Number: " << accNo << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }

    void setBalance(double b)
    {
        balance = b;
    }
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int a, string n, double b)
        : Account(a, n, b)
    {
    }

    void addInterest(double rate)
    {
        double bal = getBalance();
        bal = bal + (bal * rate / 100);
        setBalance(bal);

        cout << "\nBalance after Interest: "<< getBalance() << endl;
    }
};

class CurrentAccount : public Account
{
public:
    CurrentAccount(int a, string n, double b) : Account(a, n, b)
    {
    }

    void withdraw(double amount)
    {
        double bal = getBalance();

        if (amount <= bal)
        {
            bal = bal - amount;
            setBalance(bal);

            cout << "\nWithdrawal Successful" << endl;
            cout << "Remaining Balance: " << getBalance() << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }
};

class FixedDepositAccount : public Account
{
public:
    FixedDepositAccount(int a, string n, double b)
        : Account(a, n, b) {}

    void calculateMaturity(double rate, int years)
    {
        double maturity =
            getBalance() + (getBalance() * rate * years / 100);

        cout << "\nMaturity Amount: "<< maturity << endl;
    }
};

int main()
{
    SavingsAccount s(00001, "Sujeet", 10000);
    CurrentAccount c(00002, "Ajeet", 15000);
    FixedDepositAccount f(00003, "Sumit", 50000);

    cout << "\n Savings Account " << endl;
    s.display();
    s.addInterest(5);

    cout << "\n Current Account  " << endl;
    c.display();
    c.withdraw(3000);

    cout << " Fixed Deposit Account: " << endl;
    f.display();
    f.calculateMaturity(7, 3);

    return 0;
}
