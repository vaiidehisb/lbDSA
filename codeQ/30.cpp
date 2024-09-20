#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
   char s1, s2, s3;
   cout << "enter the sides" << endl;
   cin >>s1>>s2>>s3;

   if (s1+s2>s3 && s2+s3>s1 && s3+s1>s2) {
       cout << "it is a valid triangle" << endl;
   } else {
       cout << "it is not a valid triangle" << endl;
   }
 return 0;
    
}
