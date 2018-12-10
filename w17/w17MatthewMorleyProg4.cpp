#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ofstream file( "w17MatthewMorleyProg4lib.txt" );
    string answer;
    cout << "Enter 10 test scores:\n" ;
    // int target;
    // cin >> target;
    float score;
    int scorearr[9];
    for(int i=1; i<=10 ; i++) {
        cout << "Test score " << i << ": " << endl;
        cin >> score;
        file << score << endl;
        scorearr[i-1] = score;

    }

    file.close();

    float minimum = 100;
    float maximum;
    float sum;
    float average;
    for ( int i=0 ; i < 10; i++ ) {
        if ( scorearr[i] < minimum ) { minimum = scorearr[i]; }
        if ( scorearr[i] > maximum ) { maximum = scorearr[i]; }
        sum += scorearr[i];

    }
    average = sum / 10;
    cout << " min: " << minimum << " max: " << maximum << " average: " << average << endl;

    
}