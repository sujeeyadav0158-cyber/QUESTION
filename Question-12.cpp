#include <iostream>

using namespace std;

int main()

{
    int units;
    float bill;

    cout << "Enter Units : ";

    cin >> units;

    if (units <= 100)

        bill = units * 3;

    else if (units <= 300)

        bill = (100 * 3) + ((units - 100) * 5);

    else

        bill = (100 * 3) + (200 * 5) + ((units - 300) * 8);

    cout << "Electricity Bill = Rs. : " << bill<<endl;

    return 0;

}