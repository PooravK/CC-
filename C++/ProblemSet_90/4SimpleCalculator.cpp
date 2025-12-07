#include <iostream>
using namespace std;

int main()
{
    int in0, in1;
    char sig;

    cout << "Enter first number: ";
    cin >> in0;
    
    cout << "Enter second number: ";
    cin >> in1;

    cout << "What action do you want to perform? ";
    cin >> sig;

    if (sig == '+')
    {
        cout << in0 + in1 << endl;
    }
    else if (sig == '-')
    {
        cout << in0 - in1 << endl;
    }
    else if (sig == '*')
    {
        cout << in0 * in1 << endl;
    }
    else if (sig == '/')
    {
        cout << in0 / in1 << endl;
    }
    else
    {
        cout << "Enter correct sign input" << endl;
    }

    return 0;
}