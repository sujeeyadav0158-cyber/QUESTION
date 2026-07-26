#include <iostream>
using namespace std;

int main()
{
    int arr1[10][10], arr2[10][10], add[10][10], sub[10][10], mul[10][10];
    int r, c;

   
    while (true)
    {
        cout << "Enter number of rows and columns: ";
        cin >> r >> c;

        if (r > 0 && c > 0 && r <= 10 && c <= 10)
            break;

        cout << "Invalid Input! Please enter positive integers between 1 to ....\n";
    }

     
    cout << "\nEnter elements (Matrix-I):\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            while (true)
            {
                cin >> arr1[i][j];

                if (arr1[i][j] >= 0)
                    break;

                cout << "Invalid Input! Enter again: ";
            }
        }
    }

    cout << "\nEnter elements (Matrix-II):\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            while (true)
            {
                cin >> arr2[i][j];

                if (arr2[i][j] >= 0)
                    break;

                cout << "Invalid Input! Enter again: ";
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mul[i][j] = 0;

            for (int k = 0; k < c; k++)
            {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "\nAddition:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << add[i][j] << "\t";

        cout << endl;
    }

    cout << "\nSubtraction:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << sub[i][j] << "\t";

        cout << endl;
    }

    cout << "\nMultiplication:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << mul[i][j] << "\t";

        cout << endl;
    }

    return 0;
}