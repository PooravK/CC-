#include <iostream>
using namespace std;

int main()
{
    int num; // Target number
    int term; // Till where

    cout << "Enter a number ";
    cin >> num;
    cout << "Till which term should a table be produced? ";
    cin >> term;

    for (int i = 1; i <= term; i++)
    {
        if (i * num < 10 && i < 10)
        {
            cout << num << " x 0" << i << " = 0" << i * num << endl;
        }
        else if (i * num < 10 && i > 9)
        {
            cout << num << " x " << i << " = 0" << i * num << endl;
        }
        else if (i * num > 9 && i < 10)
        {
            cout << num << " x 0" << i << " = " << i * num << endl;
        }
        else
        {
            cout << num << " x " << i << " = " << i * num << endl;
        }
    }
    return 0;
}