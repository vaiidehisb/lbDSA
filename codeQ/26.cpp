#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
    float x, y;
    cout << " enter cordinate of x, y  " << endl; 
    cin >> x>>y;  
   

   if (x==0 && y==0 ) {
     cout << "it lies on origin  " << endl; 
   } 
   else if (x==0  ) {
       cout << "it lies on y axis " << endl; 
   } else if (y==0) {
       cout << "it lies on x axis " << endl;
   }  else {
       cout << "does not lise on any " << endl;
   }
       
   
 return 0;
    
}
