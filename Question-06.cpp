#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string name;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> name;
    }
    int getEmpId()
    {
        return empId;
    }
    string getName()
    {
        return name;
    }
};
class Manager : public Employee
{
private:
    float salary;

public:
    void setSalary()
    {
        cout << "Enter Manager Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nManager Details" << endl;
        cout << "ID : " << getEmpId() << endl;
        cout << "Name : " << getName() << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Developer : public Employee
{
private:
    float salary;

public:
    void setSalary()
    {
        cout << "Enter Developer Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nDeveloper Details" << endl;
        cout << "ID  : " << getEmpId() << endl;
        cout << "Name : " << getName() << endl;
        cout << "Salary : " << salary << endl;
    }
};

class Clerk : public Employee
{
private:
    float salary;

public:
    void setSalary()
    {
        cout << "Enter Clerk Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nClerk Details" << endl;
        cout << "ID     : " << getEmpId() << endl;
        cout << "Name   : " << getName() << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Manager m;
    cout << "Enter Manager Information" << endl;
    m.getData();
    m.setSalary();

    Developer d;
    cout << "\nEnter Developer Information" << endl;
    d.getData();
    d.setSalary();

    Clerk c;
    cout << "\nEnter Clerk Information" << endl;
    c.getData();
    c.setSalary();

    m.display();
    d.display();
    c.display();

    return 0;
}