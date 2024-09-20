
#include <bits/stdc++.h>
using namespace std;
int main() {
 float l1,l2,g1,g2,D; 
 
 cout << "enter values of l1, l2, g1, g2"<<endl;
 cin>> l1>>l2>>g1>>g2;
 
D = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)) ;

 cout << " distance " << D << endl;


 return 0;
}
    