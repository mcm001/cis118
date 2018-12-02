// Programmer Explain the results
#include <iostream> //include libraries
using namespace std;
#include <iomanip>
int main () {
    string ForwardNames[10] = {"Fred", "Tuyet", "Annie", "Moe", "Ria",
    "Luke", "Jim",   "May",   "Rex", "Omar"};
    
    
    string BackwardNames[10];

    int x = 10;
    for (int i=0; i<10; i++) {
      x--;
      BackwardNames[i]=ForwardNames[x];
    }

    for (int i=0; i<10; i++) {
      cout << ForwardNames[i] << endl;
    }
    cout << "---------------------" << endl;
    for (int i=0; i<10; i++) {
      cout << BackwardNames[i] << endl;
    }

}