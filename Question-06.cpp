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
        cout << "Enter Employee ID: "<<endl;
        cin >> empId;

        cout << "Enter Employee Name: "<<endl;
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
        salary = 80000;
    }

    void display()
    {
        cout << "\n Manager Details : " << endl;
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
        salary = 60000;
    }

    void display()
    {
        cout << "\n Developer Details: " << endl;
        cout << "ID   : " << getEmpId() << endl;
        cout << "Name : " << getName() << endl;
        cout << " : "<<salary<<endl;
    }
};

class Clerk : public Employee
{
private:
    float salary;

public:
    void setSalary()
    {
        salary = 30000;
    }

    void display()
    {
        cout << " \n Clerk Details " << endl;
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
    cout << "\n Enter Developer Information : " << endl;
    d.getData();
    d.setSalary();

    Clerk c;
    cout << "\n Enter Clerk Information: " << endl;
    c.getData();
    c.setSalary();

    m.display();
    d.display();
    c.display();

    return 0;
}