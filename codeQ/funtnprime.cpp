#include <iostream>
using namespace std; 
 
 bool isPrime(int n){

     for (int i=2; i<=n; i++) {
         if (n%1==0) {
             return 0;
         }
     } return 1;
 }

int main() {  
    int n;
    cin>>n;
   if( isPrime(n) ){ 
    cout << " is a prime no."<<endl;     
             } 
             else {
                 cout << "not a prime no";
             }  }


 