#include <iostream>
using namespace std;
int main () { //Changed to int from interger and added curley bracket dood
    // Converts grade Points into a Letter grade.

    int gradePoints = 0; //Changed fixed operator and value

    cout << "Enter Grade Points: "; //Fixed >> things
    cin >> gradePoints;

    if ( gradePoints >= 90) { cout << "Grade = A"; } //Fixed condition value
    else if ( gradePoints >= 80 ) { cout << "Grade = B"; } //Fixed operator spelling error
    else if ( gradePoints >= 70 ) { cout << "Grade = C"; } //Fixed ;
    else if ( gradePoints >= 60 ) { cout << "Grade = D"; }
    else { cout << "Grade = F"; } //Changed A to F

    cout << endl;
    // system ( "pause");
    return 0;
}
