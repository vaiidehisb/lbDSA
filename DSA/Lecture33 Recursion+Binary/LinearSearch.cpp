#include<iostream>
using namespace std;

int LinearS(int arr[], int s, int k){
    if(s==0){
        return false;
    }
    if(arr[0]== k){
        return true;
    }
    else {
        bool remPart=LinearS(arr+1,s-1,k);
        return remPart;
    }
}

int main(){
    int arr[6]={3,5,6,7,8,9};
    int s=6;
    int k=10;
    bool ans =LinearS(arr,s,k);
    if(ans){
        cout<<"present";
    }
    else {
        cout<<"Not Present";
    }

}