#include <iostream>
#include <cmath>

using namespace std;

float calculateArea ( float radius ) {
//    return  0;
    return M_PI * pow(radius,2);
}

float calcDiam ( float radius ) {
    return (radius * 2);
}

float calcCircum ( float radius ) {
    return M_PI * calcDiam(radius);
}

int main() {
    cout << "Pi is " << M_PI << endl;
    cout << "what is the radius?\n";
    float radius;
    cin >> radius;
    cout << "outputs: \n";
    cout << "area: " << calculateArea(radius) << endl;
    cout << "diameter: " << calcDiam (radius) << endl;
    cout << "circumference: " << calcCircum (radius) << endl;

    return 0;

}
