#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int score = 0;

    void login()
    {
        cout << "Enter Student Name: ";
        cin >> name;
    }

    void startExam()
    {
        char ans;

        cout << "\nQ1. C++ was developed by?\n";
        cout << "a) James Gosling\n b) Bjarne Stroustrup\n c) Dennis Ritchie\n d) None \n";
        cin >> ans;
        if(ans == 'b') 
        score++;

        cout << "\nQ2. C++ is ?\n";
        cout << "a) Programming Language\n b)  Normal Language\n";
        cin >> ans;
        if(ans == 'a') 
        score++;
    }

    void showResult()
    {
        cout << "\nStudent: " << name;
        cout << "\nMarks Obtained: " << score << "/2" << endl;
    }
};

int main()
{
    Student s;

    s.login();
    s.startExam();
    s.showResult();

    return 0;
}