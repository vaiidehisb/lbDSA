#include <iostream> 
#include <cmath>
using namespace std;
int main() {
 int i=1;
 while (i<=500 ) {
     int num =i;
     int orinum = num; 
     int sum = 0;

     while (num>0) {
         int rem = num%10;
         sum = sum + (rem*rem*rem);
         num = num/10;
     } 
     if (orinum == sum) {
         cout << "arstrom num " << sum << endl;

     }
  i++;
 } 
 return 0;
}
