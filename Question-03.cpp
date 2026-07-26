#include <iostream>
using namespace std;

class Employee
{
    int emp_Id;
    string emp_name;
    float salary;

public:
    
    Employee()
    {
        emp_Id = 1;
        emp_name = "Sujeet kumar";
        salary = 100000;

        cout << "Default Constructor : " << endl;
    }

     
    Employee(int id, string name, float s)
    {
        emp_Id = id;
        emp_name = name;
        salary = s;

        cout << "\n Parameterized Constructor:  " << endl;
    }

      
    Employee(const Employee &e)
    {
        emp_Id = e.emp_Id;
        emp_name = e.emp_name;
        salary = e.salary;

        cout << "\n Copy Constructor :" << endl;
    }

    void display()
    {
        cout << "Employee ID: " << emp_Id << endl;
        cout << "Employee  Name: " << emp_name << endl;
        cout << "Salary  : " << salary << endl;
    }
};

int main()
{
     
    Employee e1;
    e1.display();

     
    Employee e2(00167, "Sujeet yadav", 80000);
    e2.display();

    
    Employee e3 = e2;
    e3.display();

//     Employee e4 = e2; 
//    e4.display();

    return 0;
}