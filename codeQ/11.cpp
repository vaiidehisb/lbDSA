
#include <bits/stdc++.h>
using namespace std;
int main() {
    double x,y;
    cout << "enter x&y corrdinate"<< endl;
    cin >> x>>y;
    

    double r =sqrt(x*x+y*y);
    double theta = atan(y/x); 

    cout << "polar corrdinate: " << r <<" " <<theta  <<endl;



   

    
      
 return 0;
}
    