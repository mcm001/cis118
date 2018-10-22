#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
    int number;
    cout << "Please enter a number between 0 and 10 ";
    cin >> number;
    cout << "Checking using if statments... \n";
    if (number == 0 ) {
        cout << "NUMBER IS ZERO";
    }

    if (number == 1 ) {
        cout << "NUMBER IS ZERO";
    }

    if (number == 2 ) {
        cout << "NUMBER IS TWO";
    }

    if (number == 3 ) {
        cout << "NUMBER IS THREE";
    }

    if (number == 4 ) {
        cout << "NUMBER IS FOUR";
    }

    if (number == 5 ) {
        cout << "NUMBER IS FIVE";
    }

    if (number == 6 ) {
        cout << "NUMBER IS SIX";
    }

    if (number == 7 ) {
        cout << "NUMBER IS SEVEN";
    }

    if (number == 8 ) {
        cout << "NUMBER IS EIGHT";
    }

    if (number == 9 ) {
        cout << "NUMBER IS NINE";
    }

    if (number == 10 ) {
        cout << "NUMBER IS TEN";
    }

    cout << endl << "Now using a switch: \n";
    // Switch statment to print the text
    switch ( number ) {
        case 0:
            cout << "zero" << endl;
            break;
        case 1:
            cout << "one" << endl;

            break;
        case 2:
            cout << "two" << endl;

            break;
        case 3:
            cout << "three" << endl;

            break;
        case 4:
            cout << "four" << endl;

            break;
        case 5:
            cout << "five" << endl;

            break;
        case 6:
            cout << "six" << endl;

            break;
        case 7:
            cout << "seven" << endl;

            break;
        case 8:
            cout << "eight" << endl;

            break;
        case 9:
            cout << "nine" << endl;

            break;
        case 10:
            cout << "ten" << endl;

            break;



    }
}
