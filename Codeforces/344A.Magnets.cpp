#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    string magnet[n];
    for (int i=0; i<n; i++) {
        cin>>magnet[i];
    }  
    for(int i=0; i<n-1; i++) {
        if(magnet[i+1]!=magnet[i]){
            count++;
        }
    }
    cout<<count;
 return 0;
}