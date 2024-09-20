#include<iostream>
using namespace std;

int BinaryS(int arr[],int s,int e,int k){
    if(s>e){
        return true;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return BinaryS(arr,mid+1,e,k);
    }
    else{
        return BinaryS(arr,s,mid-1,k);
    }
}

int main(){
    int arr[6]={3,5,6,7,8,9};
    int s=0;
    int e=6;
    int k=10;
    bool ans =BinaryS(arr,s,e,k);
    if(ans){
        cout<<"present";
    }
    else {
        cout<<"Not Present";
    }
}