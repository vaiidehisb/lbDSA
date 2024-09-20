#include<bits/stdc++.h>
using namespace std;

int main (){
    int dist;
    cin>>dist;
    int steps=0;
    int arr[5]={5,4,3,2,1};
    while(dist!=0) {
        for (int i=0; i<5; i++) {
            // step will increase
            steps+=dist/arr[i]; 
            //cout<<"s"<<steps<<endl;
            dist=dist%arr[i];
           // cout<<"d"<<dist<<endl;
        } 
        cout<<steps<<endl;
    } 
    return 0;
}