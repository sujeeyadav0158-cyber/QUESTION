#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks[5];
    float Tmarks, p;
    char grade;

public:
    void get_data()
    {
        cout << "Enter the Student Name: ";
        cin>>name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;


        Tmarks = 0;

        cout << "Enter 5 Subjects marks:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": "<<endl;
            cin >> marks[i];
            Tmarks = Tmarks + marks[i];
        }
    }

    void calculation()
    {
    p = Tmarks / 5;

        if (p >= 90)
            grade = 'A';
        else if (p >= 80)
            grade = 'B';
        else if (p >= 60)
            grade = 'C';
        else if (p >= 33)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << " Student Details :"<<endl;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Total Marks: " << Tmarks << endl;
        cout << "Percentage : " << p  << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student s;

    s.get_data();
    s.calculation();
    s.display();

    return 0;
}