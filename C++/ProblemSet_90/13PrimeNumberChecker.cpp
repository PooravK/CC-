#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cout << "enter a number: ";
    cin >> user_input;
    int div_true = 0;

    if (user_input < 2)
    {
        cout << "Not a prime number\n";
    }
    else if (user_input == 2)
    {
        cout << "It is a prime nunmber\n";
    }
    else
    {
        for (int i = 2; i < user_input; i++)
        {
            if (user_input % i == 0)
            {
                div_true = 1;
                break;
            }
        }
        if (div_true == 1)
        {
            cout << "Not a prime number\n";
        }
        else
        {
            cout << "It is a prime number\n";
        }
    }

    return 0;
}