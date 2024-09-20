
#include <bits/stdc++.h>
using namespace std;
int main() {
 float wcf,t;  
 double v;
 
 cout << "enter values of v and t"<<endl;
 cin>> t>>v;
 
 wcf = 35.74 + 0.6215*t+ (0.4275*t-35.75)*pow(v,0.16) ;

 cout << " vale of wfc" << wcf << endl;


 return 0;
}
    