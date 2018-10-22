#include <iostream>
using namespace std;

int main(){
    string haveMoney;
    string haveTime;
    string amHungry;
    string resturauntOpen;
    string haveTransportation;
    
    cout << "Do you have money? ";
    cin >> haveMoney;

    if (haveMoney == "yes") {
        cout  << "Do you have time? ";
        cin >> haveTime;
        if (haveTime == "yes") {
            cout << "Are you hungry? ";
            cin  >> amHungry;
            if (amHungry == "yes") {
                cout << "Is the resturaunt open? ";
                cin >> resturauntOpen;
                if (resturauntOpen == "yes") {
                    cout << "Do you have transportation? ";
                    cin >> haveTransportation;
                    if (haveTransportation == "yes") {
                        cout << "Congrats! You will go to the resturaunt.";
                    }
                    else { cout << "How do you expect to get to the resturaunt, anyways?";}
                }
                else { cout << "McDonalds isn't even open :D";}

            }
            else { cout << "You aren't hungry. No eating!";}
        }
        else { cout << "You don't have enough time to eat food, kiddo";}
    }
    else { cout << "Sorry, you won't eat coz you have no money" ;}
    cout << "\n";

}
