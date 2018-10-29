#include <iostream> //Fixed include statement
using namespace std;

int main () {
  while (1) {
    string hungry;
    string money;
    string transit;
    string open;
    string time;

    cout << "are you hungry? ";
    cin >> hungry;

    cout << "do you have money? ";
    cin >> money;

    cout << "do you have transit? ";
    cin >> transit;

    cout << "is mcdonalds open? ";
    cin >> open;

    cout << "do you have time? ";
    cin >> time;

    if ( (hungry == "yes")  && (money == "yes")  && (transit == "yes")  && (open == "yes")  && (time == "yes"))  {

      cout << "You are going to mcdonalds.";
    }
    else {
      cout << "you are not going to mcdonalds.";
    }
  }
}