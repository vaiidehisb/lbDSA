#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
   int yr;
   cout << "enter the year rn" << endl;
   cin >>yr;

   if (yr%400==0 || yr%100!=0 && yr%4==0) {
       cout << "leap year" << endl;
   } else {
       cout << "not a leap year " << endl;
   }
 
 return 0;
    
}
