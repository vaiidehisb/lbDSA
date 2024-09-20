#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;  
    int sum = 0;

    cout << "enter the five digits number " << endl;
    cin>> n;

    if (n>=10000 && n<=99999)
    { while (n>0) 
       sum = sum * n%10;
       n = n/10;
    } 
   

    
      
 return 0;
}
    