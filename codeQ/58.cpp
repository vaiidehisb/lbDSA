#include <iostream>
using namespace std;
int main() {
   int a,b,c;
   for (a=1; a<=30; a++) {
       for (b=1; b<=30; b++) {
           for (c=1; c<=30; c++) {
               for (int d=1; d<=30; d++) { 

                   if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) { 

                       int left = a*a*a + b*b*b;
                       int right = c*c*c + d*d*d;

                       if (left == right ) { 
                       cout << a << " " << b << " " << c << " "<< d <<endl; 
                       }
                   }
               }
           }
       }
   }
   return 0;
}
