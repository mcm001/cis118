#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream file( "firstlastage.txt" );
    string line;
    while(getline(file, line)) {
    cout << line << '\n';
    }
    
}