#include <iostream> //Fixed include statement
using namespace std;

int main () {
  while (1) {
    string roomclean;
    string homework;
    string day;

    cout << "\nWhat day is it? ";
    cin >> day;

    cout << "Is your room clean? ";
    cin >> roomclean;

    cout << "Do your homework? ";
    cin >> homework;

    if ((day == "monday" || day == "tuesday" || day == "wednesday" ) && (roomclean == "yes" && homework == "yes")) {
      cout << "You can go and play.";
    }
    else if ((day == "thursday" || day == "friday" || day == "saturday" || day == "sunday") && (roomclean == "yes" || homework == "yes")) {
      cout << "You can go and play.";
    }
    else {
      cout << "NO PLAY!";
    }
    
    
  }
}