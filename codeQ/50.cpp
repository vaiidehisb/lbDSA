#include <iostream>
using namespace std;
int main() {
    int i=1,j; 
    float fact, sum=0;

    for (i=1; i<=7; i++) {
        fact=1;
        for (j=1; j<=i; j++) {
            fact = fact *j;
           } 
         sum = sum + i/fact;
    } 
    cout << "sum is " << sum <<endl;
     
    return 0;
} 
         
