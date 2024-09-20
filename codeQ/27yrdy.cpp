#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
    int yeargiven = 2001;
    int year;
    cout << "enter the year " << endl;
    cin >> year;

    int diffrence = year - yeargiven;
    int leapyear = diffrence/4;
    int nonleapyear = diffrence - leapyear;
    int day = (leapyear*366)+(nonleapyear*365)+1;

    if (day%7 == 0){
        cout << "sunday" << endl;
     } 
     if (day%7 == 1){
        cout << "mon" << endl;
     }
     if (day%7 == 2){
        cout << "tue" << endl;
     }
     if (day%7 == 3){
        cout << "wed" << endl;
     }
     if (day%7 == 4){
        cout << "thus" << endl;
     }
     if (day%7 == 5){
        cout << "fri" << endl;
     }
     if (day%7 == 6){
        cout << "sat" << endl;
     }
    
   
 return 0;
    
}
