#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    int p, yrs;
    float rate, ci, amt; 
    cout <<"enter  the principle amount " <<endl;
    cin >> p;

    cout << "enter the number of years " <<endl;
    cin >> yrs;

    cout << "enter rate of intrest " <<endl;
    cin >> rate;
 
    amt = p*pow((1+rate/100),yrs);
    ci = amt-p;

    cout << ci <<endl;
    cout << amt <<endl;


    
}
