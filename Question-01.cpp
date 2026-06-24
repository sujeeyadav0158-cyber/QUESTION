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
        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        Tmarks = 0;

        cout << "Enter 5 Subjects Marks:" << endl;

    for(int i = 0; i < 5; i++)
    {
    while(true)
    {
        cout << "Enter marks of subject " << i + 1 << ": ";
        
        if(cin >> marks[i] && marks[i] >= 0 && marks[i] <= 100)
        {
            Tmarks += marks[i];
            break;
        }

        cout << "Invalid Marks! Please enter marks between 0 and 100.\n";   

        cin.clear();
        cin.ignore(1000, '\n');
    }
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
        cout << "\nStudent Details :" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Total Marks: " << Tmarks << endl;
        cout << "Percentage: " << p << "%" << endl;
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