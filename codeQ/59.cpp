#include <iostream>
using namespace std;
int main() {
   int i;
   for (i=0; i<=23; i++) {
       if (i==0) {
           cout <<  "12 midnight " <<endl;
       } 
       else if (i!=0 && i<12) {
           cout << i << " A.M" <<endl; 
       } 
       else if (i==12)  {
           cout <<  "12 noon" <<endl;
       } 
       else {
           cout << i%12 << "P.M" << endl;
       }
   }
       
  
   return 0;
}
