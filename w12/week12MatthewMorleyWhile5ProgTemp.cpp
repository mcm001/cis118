#include <iostream> //Fixed include statement
#include <iomanip>
using namespace std;

int main ( ) {
    int again = 0;
    int choice;
    float tempIn;
    float tempOut;
    do {
    //Prompt user for choice
    cout << "What do you want to convert? (1) Centigrade to Fahrenheit, or (2) F to C? \n";
    cin >> choice;

    //Fancy print statments
    if (choice == 1) { cout << "How many degrees C is the temperature? "; }
    else if (choice == 2) { cout << "How many degrees F is the temperature? "; }
    else {
        cout << "Sorry I don't understand that choice.";
        return 0;
    }
    cin >> tempIn;

    //tempIn = float(tempIn);
    cout << "tempIn: " << tempIn << "\n";

    if (choice == 1) { tempOut = (tempIn * (1.8)) + 32 ; }
    else { tempOut = (tempIn-32) /( 1.8 );}
    
    if (choice == 1) {
        cout << tempIn << " degrees C converts to " << tempOut << " degrees F.\n";
    }
    
    if (choice == 2) {
        cout << tempIn << " degrees F converts to " << tempOut << " degrees C.\n";
    }
        cout << "\nAgain? (1 for yes, 0 for no.)\n";
    cin >> again;
  } while (again == 1);
}
