#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
 
    int grade;
    cout << "What is your grade? \n";
    cin >> grade;

    if (grade < 60) { cout << "You failed and got less than 60 percent. "; }

    else {
        if (grade < 70) { 
            cout << "You got a D." ;
        }

        else {
            if (grade < 80) { 
                cout << "You got a C.";
            }

            else {
                if ( grade < 90 ) { 
                    cout << "You got a B.";
                }

                else {
                    if ( grade < 100 )  { 
                        cout << "You got an A."; 
                    }

                    else {
                        if ( grade == 100 ) { 
                            cout << "You got a 100. Congrats.";
                        }
                    }
                }
            }
        } 
    }
}
