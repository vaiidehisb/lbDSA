#include<iostream>
using namespace std;

int bianarySearch(int arr[],int s,int e,int key){
    if(s<e){
        return false ;
    }
    int mid = s+(e-s)/2;
    if(mid==key){
        return true;
    }
    if(arr[mid]<key){
        return bianarySearch(arr,mid+1,e,key);
    }
    else{
        return bianarySearch(arr,s,mid-1,key);
    }

}

int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 0, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}




/*#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int *arr, int s, int e , int k ) {

    
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}*/