#include <iostream>
using namespace std;

int main()
{
    int in0;
    cout << "Enter a number: ";
    cin >> in0;

    if (in0 > 0)
    {
        cout << "Positive" << endl;
    }
    if (in0 < 0)
    {
        cout << "Negative" << endl;
    }
    if (in0 == 0)
    {
        cout << "Zero" << endl;
    }
    if (in0 % 2 == 0)
    {
        if (in0 == 0)
        {

        }
        else
        {
            cout << "Even" << endl;
        }
    }
    else 
    {
        cout << "Odd" << endl;
    }
    return 0;
}