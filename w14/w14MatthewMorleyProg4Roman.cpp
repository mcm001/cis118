#include <iostream>

using namespace std;

string intToNumeral ( int year ) {
    string roman;
    int workingNum = year;
    while ( workingNum >= 1000 ) {
        workingNum = workingNum - 1000;
        roman.append("M");
    }
    while ( workingNum >= 100 ) {
        workingNum = workingNum - 100;
        roman.append("C");
    }
    while ( workingNum >= 50 ) {
        workingNum = workingNum - 50;
        roman.append("L");
    }
    while ( workingNum >= 10 ) {
        workingNum = workingNum - 10;
        roman.append("X");
    }
    while ( workingNum >= 5 ) {
        workingNum = workingNum - 5;
        roman.append("V");
    }
    while ( workingNum >= 1 ) {
        workingNum = workingNum - 1;
        roman.append("I");
    }

    return roman;

}
int main() {
    cout << "what is the year? \n";
    int year;
    cin >> year;

    cout << "The year is actually " << intToNumeral(year) << endl;

    return 0;
}
