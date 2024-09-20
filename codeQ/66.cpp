#include <iostream>
#include <vector>
using namespace std;

void leap(int yr);

int main() {
   int yr;
   cout << "enter the year "<<endl;
   cin >> yr; 
   leap (yr); 
}  

void leap (int yr) {
    if (yr%400==0) {
        cout << "leap yr"<<endl;
    } 
    else if (yr%100==0) {
        cout << "npt s leap yr"<<yr<<endl;
    }  
    else if (yr%4==0) {
        cout << "leap yr" <<endl;

    } 
    else 
    {
        cout << "not a leap yr"<<endl;
    } 
}