#include <iostream>
using namespace std;
int main()
{
    int age = 0;
    cout << "Enter age to see ticket price: ";
    cin >> age;
    switch (age) {
        case 0 ... 5:
            cout << "$0.00" << endl << endl;
            break;
        case 6 ... 12:
            cout << "$10.00" << endl;
            break;
        case 13 ... 26:
            cout << "$18.00" << endl;
            break;
        default:
            cout << "$15.00" << endl;
            break;
        
    }
    return 0;

}
