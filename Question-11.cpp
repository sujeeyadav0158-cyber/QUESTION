#include <iostream>
using namespace std;

class ATM
{
    float balance = 100000.59;

public:
    void balanceInquiry()
    {
        cout << "Current Balance = Rs. " << balance << endl;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << " Withdrawal Successful" << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
          
        }
    }

    void miniStatement()
    {
        cout << "Mini Statement" << endl;
        cout << "Available Balance: Rs. :  " << balance << endl;
    }
};

int main()
{
    ATM a;

    a.balanceInquiry();
    a.deposit();
    a.withdraw();
    a.miniStatement();

    return 0;
}