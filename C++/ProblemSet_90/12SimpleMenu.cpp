#include <iostream>
using namespace std;

int main ()
{
    int user_input;
    bool TRUE_FLAG = true;

    while (TRUE_FLAG)
    {
        cout << "\n---------- MENU ----------\nWhat action do you want to perform?\n1) Say Hello\n2) Say Konnichiwa\n3) Exit\nEnter option choice: ";
        cin >> user_input;

        switch (user_input)
        {
            case 1:
                cout << "\nHello" << endl;
                break;
            case 2:
                cout << "\nKonnichiwa" << endl;
                break;
            case 3:
                TRUE_FLAG = false;
            default:
                cout << "\nEnter a valid choice" << endl;
                break;
        }
    }
    return 0;
}