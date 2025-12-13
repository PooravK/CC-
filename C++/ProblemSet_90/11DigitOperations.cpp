#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int count = 0;
    int immediate = n;
    int sum = 0;
    int new_num = 0;

    while (immediate != 0)
    {
        sum = sum + (immediate % 10);
        new_num = (immediate % 10) + (new_num * 10);
        immediate = immediate/10;
        count++;
    }

    cout << count << endl;
    cout << sum << endl;
    cout << new_num << endl;
    return 0;
}