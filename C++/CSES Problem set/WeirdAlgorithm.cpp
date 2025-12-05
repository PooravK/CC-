#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    do
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n/2;
        }
        else 
        {
            n = n*3 + 1;
        }
    } while (n != 1);
    cout << n << " ";
    return 0;
}