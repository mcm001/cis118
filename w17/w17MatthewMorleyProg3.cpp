#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream file( "nameinput.txt" );
    string answer;
    cout << "how many names do u want to enter? " ;
    int target;
    cin >> target;
    string name;
    for(int i=0; i<target ; i++) {
        cout << "Type the name: " << endl;
        cin >> name;
        file << name << endl;  
    }
    ifstream check_file("nameinput.txt");
    if(!check_file){
        cerr << "Uh oh, Sample.dat could not be opened for reading!" << endl;
        return 1;
    }
    else {
        cout << "it worked.jpg" << endl;
        return 0;
    }
    
}