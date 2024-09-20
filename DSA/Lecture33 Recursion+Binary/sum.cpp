#include<iostream>
using namespace std;

int sum(int arr[], int s){
    if(s==0){
        return 0;
    }
    if(s==1){
        return arr[0];
    }
    else{
        int b=sum(arr+1,s-1);
        int a=arr[0]+b;
        
        return a;
    }
}

int main(){
    int arr[4]={1,2,3,4};
    int s=4;
    int ans=sum(arr,s);
    cout<<ans;
}