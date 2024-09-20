#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main() {
    float  a,b,c,sp,area,k; 
  cout<<  "enter sides of trangle" <<endl;
  cin>> a>>b>>c; 
   sp= (a+b+c)/2;
   
   area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
   cout<< "area of triangle is " << area << endl;


    
      
 return 0;
}
    