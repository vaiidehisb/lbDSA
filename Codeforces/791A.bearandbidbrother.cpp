#include<bits/stdc++.h>
using namespace std; 
int main() {
    int lwt,bwt;
    cin>> lwt >> bwt;
    int year =0;
    int a=3; 
    int b=2;
    
    while (lwt<=bwt) {
        year+=1; 
        lwt = lwt*a;
        bwt = bwt*b;
    } 
   cout<< year;
}


