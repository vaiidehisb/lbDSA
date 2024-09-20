#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sx=0,sy=0,sz=0;
    while (n!=0) { 
        int x,y,z;
      cin>>x>>y>>z; 
      sx+=x;
      sy+=y;
      sz+=y;
      n--;
    } 
    if(sx==0 && sy==0 && sz==0) {
        cout<<"YES";
    } 
    else {
        cout<<"NO";
    }
}

