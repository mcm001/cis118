#include <iostream> //Fixed include statement
using namespace std;

int main ( ) { // start program //Fixed spelling of int and loop
    // Declare and Initialize Variables //Fixed comment slashes
    int height = 0;
    int feet = 0; //Fixed semi colin
    int inches = 0;//fixed spelling

    // Prompt for height
    cout << "Enter your height in inches: ";//fixed ' charicter
    cin >> height;//Fixed height spelling

    // Calculate Height in feet and inches
    feet = height / 12 ;//reordered expression
    inches = height % 12;

    //Print out height in feet and inches //Fixed comments
    cout << "You are " << feet << " feet and " << inches << " inches"; //Fixed '' and "", Fixed <>, Fixed the spelling of cout, fixed << operator

    //system(“pause”); // Mac user comment out this line by placing // in front of it.
    // PC users -Hint replace the “ with the ones on your computer–coping code cause error, so just type it.
    return 0;
} // end of program
