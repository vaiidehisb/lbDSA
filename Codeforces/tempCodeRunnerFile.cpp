#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long sum=0;
    int cnt=1;
    long long a[n];
    for(int i=0; i<n-1; i+=2) {
       a[i]=cnt;
       a[i+1]=cnt+1;
       sum=sum-a[i]+a[i+1];
       cnt++;
    }
    if(n%2==1) {
        a[n-1]=cnt;
        sum+= a[n-1];
    }
    cout<<sum;
    return 0;

}

