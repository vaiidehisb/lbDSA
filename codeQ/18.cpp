#include <iostream>
using namespace std;
int main() {
    int yr; 
    cout <<  "enter any year:" << endl;
    cin >> yr;


    if (yr%100==0)  
    {   if (yr%400==0) 
        cout<< "leap year  " << endl;
    else  
    cout << "not a leap year "  << endl; 
     }
     else 
     { if (yr%4==0) 
     cout << "leap year " << endl;
     
     else 
     cout << "not a leap year "<< endl;}

    return 0;
}
