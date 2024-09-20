#include <iostream>
using namespace std;
int main() { 
    float x1, x2, y1, y2, x3, y3;
    cout << "enter quardinates " << endl; 
    cin >> x1>>y1>>x2>>y2>>x3>>y3; 
   float sloap1 = (y2-y1)/(x2-x1);
   float sloap2 = (y3-y2)/(x3-x2);
    if (sloap1== sloap2) 
    { 
     cout << "falls on one straight line " << endl;
    } else {
        cout << "does not fall on a straight line" <<endl;
    }
 return 0;
    
}
