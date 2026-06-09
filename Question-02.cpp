#include <iostream>
using namespace std;

int main()
{
    int arr1[10][10], arr2[10][10], add[10][10], sub[10][10], mul[10][10];
    int r, c;

    cout << "Enter number of rows and columns: " << endl;
    cin >> r >> c;

    cout << "Enter elements  (Matrix -I) :" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "\nEnter elements  ( Matrix-II ):" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
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
                mul[i][j] = mul[i][j] + (arr1[i][k] * arr2[k][j]);
            }
        }
    }

    cout << " Addition: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << add[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Subtraction : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sub[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Multiplication: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}