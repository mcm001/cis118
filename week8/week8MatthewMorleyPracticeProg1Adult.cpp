#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
    string firstName;
    int age;

    //Get the users name
    cout << "Enter your first name, please: ";
    cin >> firstName;

    //Get the users age
    cout << "Enter your age in years, please";
    cin >> age;

    if (age >= 18) { 
        cout << firstName << ", you are an adult.";
    }
    else { 
        cout << firstName << ", you are not an adult."; 
    }
}