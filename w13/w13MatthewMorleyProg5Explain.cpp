// Programmer Explain the results
#include <iostream> //include libraries
using namespace std;
#include <cmath>
#include <iomanip>
int main ()
{
int arrayIntegers[50] = {0}; //init an array of size 50 ints to 0
int i = 0; //set i to 0
cout << fixed; //print stuff
cout << setprecision(0); //print stuff
cout << setw(50); //setup whitespace
cout << right; //more prints
for (i = 0 ; i < 50 ; i++ ) { //for luop, runs 50x
cout << " ------------------------------------------- " << endl; //print a line
cout << " 2 ^ " << i << " = " << pow(2.0,i) << endl;; //prints 2 to power i is (math)
arrayIntegers[i] = pow(2.0,i); //set array index i to the math
cout << " 2 ^ " << i << " = " << arrayIntegers[i] << endl; //print out more stuff
}
system ("pause"); //end
 return 0;
}