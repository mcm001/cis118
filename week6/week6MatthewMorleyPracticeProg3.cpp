#include <iostream>         
using namespace std; 
 main( ) {    
	int firstNum = 0, secondNum = 0; // Declare and initialize variables 
	cout << "Enter first Number (example 69):  " << endl;   // Print prompt for first num  
	cin >> firstNum;    // stop and wait for user to enter first number  
	cout << "Enter second Number (example 42):  " << endl;   // Print prompt for second num  
	cin >> secondNum;
	if ( firstNum < secondNum ) { 
        cout << "First number is less then second number " << endl;   
	  // Print to monitor message when first num less than second num  
    } else   { 
        cout << "First number is greater than or equal to second number " << endl;   
    }  
	  // Print to monitor message when first num greater or equal to second num 
	return 0;
}
