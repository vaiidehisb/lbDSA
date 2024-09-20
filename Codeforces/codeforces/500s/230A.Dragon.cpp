#include<iostream>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;

    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        if(s>a){
            s=s+b;
        }
        else {
            cout<<"NO";
            break;
        } 
    }   
} 