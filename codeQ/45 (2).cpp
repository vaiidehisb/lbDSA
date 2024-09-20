/*#include <iostream> 
#include <cmath>
using namespace std;
int main() {
 int tmatstic=21; 

 while (1 ) {
     cout << "total matchstick"  << tmatstic << endl;
     int pick; 
     cout << "you pick" << endl;
     cin>> pick; 

     if (pick >1 && pick <4) {
         continue ;
     } 
     cout << "computers turn" << endl;
     int computer = 5 - pick;

     cout << "computer picked " << computer << endl;
     tmatstic = tmatstic -5; 

     if (tmatstic == 1) {
         cout << "total number of matsticks left are " << endl; 
         break;
     }
 }  
 return 0;

 } */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tmatstic = 21;

    while (1) {
        cout << "total matchstick: " << tmatstic << endl;
        int pick;
        cout << "you pick: ";
        cin >> pick;

        if (pick <= 1 || pick >= 4) { 
            cout << "enter correct input between 1 to  4" << endl;
            continue;
        }

        cout << "computer's turn" << endl;
        int computer = 5 - pick;

        cout << "computer picked: " << computer << endl;
        tmatstic -= 5;

        if (tmatstic == 1) {
            cout << "total number of matchsticks left is 1." << endl;
            break; // Exit the loop when there is only 1 matchstick left.
        }
    }
 return 0;
}
