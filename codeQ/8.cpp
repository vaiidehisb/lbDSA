#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num;
    int revnum=0;
    cout<< "eneter a five digit number" <<endl;
    cin>> n;
    if (n >= 10000 && n<= 99999 ) 
    { 
        while (n>0) 
        {  
            revnum = revnum*10 + n%10;
        n/=10;
        } 

        cout << "revnum is " << revnum <<endl;

    }  else {
        cout << "please enter a valid 5 digit number" <<endl;
    }

    
      
 return 0;
}
    