#include <iostream>
#include <cmath>
using namespace std;

float calcArea ( int radius ) {
    return radius * radius;
}

float calcDiameter ( int radius ) {
    return radius * sqrt(2);
}

float calcCircum ( int radius ) {
    return radius * 4;
}

int main() {
    cout << "what is the length of one side of the square?" << endl;
    float side;
    cin >> side;

    cout << "the area is " << calcArea(side):
    cout << "the diameter is " << calcDiameter(side);
    cout << "the circumference is " << calcCircum(side);

    return 0;
}