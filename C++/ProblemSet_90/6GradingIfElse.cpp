#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks > 90)
    {
        cout << "A" << endl;
    }
    else if (marks > 50)
    {
        cout << "B" << endl;
    }
    else if (marks > 0)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "enter valid marks" << endl;
    }

    return 0;
}