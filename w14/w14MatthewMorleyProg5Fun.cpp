#include <iostream>
#include <cmath>
using namespace std;


int squareInt (int x) {
    return pow(x,2);
}

double squareDouble (double d) {
    return pow(d,2);
}

float squareFloat( float f) {
    return pow(f,2);
}

int main() {
    int x;
    double d;
    float f;

    cout << "What is the interger? \n";
    cin >> x;

    cout << "what is the double? \n";
    cin >> d;

    cout << "what is the float? \n";
    cin >> f;

    cout << "the interger squared is " << squareInt(x);
    cout << "the double squared is " << squareDouble(x);
    cout << "the float squared is " << squareFloat(x);

    return 0;

}

