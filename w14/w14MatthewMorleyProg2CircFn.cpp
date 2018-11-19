#include <iostream>
#include <cmath>

using namespace std;

float clacArea ( int radius ) {
    return M_PI * pow(radius,2);
}

float calcDiam ( int radius ) {
    return radius * 2;
}

float calcCircum ( int radius ) {
    return M_PI * calcDiam(radius);
}

int main() {
    cout << "Pi is " << M_PI << endl;
    cout << "what is the radius?\n";
    int radius;
    cin >> radius;
    cout << "area: " << calcArea(radius) << endl;
    cout << "diameter: " << calcDiam(radius) << endl;
    cout << "circumference: " << calcCircum(radius) << endl;
}