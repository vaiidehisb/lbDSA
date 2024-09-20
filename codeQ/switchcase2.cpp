#include <iostream>
using namespace std;
int main() {
   int amt=1330;
   
   
   int notes100= amt/100;
   int notes20 = (amt-notes100)/20;
   int coin1 = (amt - notes20)/1;
 int amtt;
     cin>>amtt;
   switch (amtt) {
       case (100):
       cout << "notes of 100 is "<<notes100<<endl; 
       break;
       case (20):
       cout << "notes of 20 is "<<notes20<<endl; 
       break;
       case (1):
       cout << "coin of 1 is "<<coin1<<endl; 
       break;
   }    } 

#include <iostream>
using namespace std;

int main() {
    int amt = 1330; // Assuming you want to use a predefined amount

    int notes100 = amt / 100;
    int remainingAmountAfter100s = amt % 100;

    int notes20 = remainingAmountAfter100s / 20;
    int coin1 = remainingAmountAfter100s % 20;

    cout << "For the predefined amount of 1330:" << endl;
    cout << "Notes of 100: " << notes100 << endl;
    cout << "Notes of 20: " << notes20 << endl;
    cout << "Coins of 1: " << coin1 << endl;

    // Now let's get user input
    int amtt;
    cout << "Enter the amount: ";
    cin >> amtt;

    int notes100User = amtt / 100;
    int remainingAmountAfter100sUser = amtt % 100;

    int notes20User = remainingAmountAfter100sUser / 20;
    int coin1User = remainingAmountAfter100sUser % 20;

    switch (amtt) {
        case 100:
            cout << "Notes of 100 is " << notes100User << endl;
            break;
        case 20:
            cout << "Notes of 20 is " << notes20User << endl;
            break;
        case 1:
            cout << "Coins of 1 is " << coin1User << endl;
            break;
        default:
            cout << "Invalid amount for switch case." << endl;
    }

    return 0;
}
