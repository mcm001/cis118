#include <iostream> //Fixed include statement
using namespace std;

int main ( ) {
    //Define variables
    double a = 18;
    double b = 6;
    double c = 3;

    cout << "--------------" << endl;
    cout << "This one outputs a + (b/c)" << endl;
    cout << a + b / c  << endl;
    cout << "This outputs (a+b) divided by c" << endl;
    cout << ( a + b ) / c  << endl;
    cout << "this one outputs a plus (b/c)" << endl;
    cout << a + ( b / c ) << endl;
    cout << "Order of operations!" << endl;
    
}   