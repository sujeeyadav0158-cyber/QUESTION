#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter Real and Imaginary Part: ";
        cin >> real >> imag;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter First Complex Number:\n";
    c1.getData();

    cout << "Enter Second Complex Number:\n";
    c2.getData();

    c3 = c1 + c2;

    cout << "Sum = ";
    c3.display();

    return 0;
}