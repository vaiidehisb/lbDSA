#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;

    int totalcost = k * w * (w+1)/2;
 // max fun if the result is negative, it is considered as 0 
    int borrow = max(0,totalcost-n);
    
    cout<<borrow<<endl;
}