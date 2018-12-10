#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream file( "firstlastage.txt" );
    string line;
    string target1 = "Julie Wong 17";
    string target2 = "Joseph Anderson 23";

    cout << target1 << endl;
    cout << target2 << endl;
    // while(getline(file, line)) {
    // cout << line << '\n';
}
