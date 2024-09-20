#include<iostream>
using namespace std;

bool IsSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else {
        bool b=IsSorted(arr+1,size-1);
        return b;
    }
}
int main(){
    int arr[5]={2,4,9,9,4};
    int size=5;
    bool ans = IsSorted(arr,size);
    cout<<ans;
    if(ans){
        cout<<"Array Sorted"<<endl;
    }
    else{
        cout<<" Array NOT Sorted"<<endl;
    }
    return 0;
}

/*#include<iostream>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size == 0 || size == 1 ){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else {
        bool remainingPart = isSorted(arr + 1, size - 1 );
        return remainingPart;
    }

}

int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    return 0;
}*/