#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    int a,b,c; 
    
    for (a=1; a<=30; a++) {
    for (b=1; b<=30; b++ ) {
         for (c=1; c<=30; c++) {
             if (c*c== b*b + a*a){
            cout << a <<" " << b << " " <<c << " "<<endl;
             }
             
         }

    
          }                         
         }
     
    return 0;
}
