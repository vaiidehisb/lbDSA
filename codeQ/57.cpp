#include <iostream>
using namespace std;
int main() {
   float  p, yr, inc;
  p=100000; 
  
   inc = p*0.1;
   
   for (yr=1; yr<=10; yr++) {
       p = p + inc;
       cout << "population " << p <<endl;
   } 
   return 0;
}
