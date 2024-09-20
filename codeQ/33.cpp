#include <iostream>
using namespace std;
int main() {
    double hardness, carboncontent, tensilestrength;
    cout << "enter value" << endl; 
    char c1,c2,c3;
    cin >> hardness>>carboncontent>>tensilestrength;
    
    c1= hardness >50;
    c2= carboncontent <0.7 ;
    c3= tensilestrength >5600;

    if (c1 && c2 && c3) {
        cout << "grad eod steel is 10 "<<endl;
    } 
    else if (c1 && c2) {
        cout << "grad eod steel is 9 "<<endl;
    }
    else if ( c2 && c3) {
        cout << "grad eod steel is  8"<<endl;
    }
    else if (c1 && c3) {
        cout << "grad eod steel is 7 "<<endl;
    }
    else if (c1 || c2 || c3) {
        cout << "grad eod steel is  6 "<<endl;
    }
    else  {
        cout << "grad eod steel is 5 "<<endl;
    }
   
    return 0;
}
