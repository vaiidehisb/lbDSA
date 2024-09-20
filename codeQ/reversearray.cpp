
#include <iostream>
using namespace std; 

int reverse(int arr[],int n) {
    int start =0;
    int end = n-1;
    
    while (start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    } 
    return 1;
} 

void printArray(int arr[],int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    } cout <<endl;
}

int main () {
    int evenarr[6]={1,2,3,4,5,6}; 
    int oddarr[5] = {1,2,3,4,5};

    reverse(evenarr,6);
    reverse(oddarr,5);

    printArray(evenarr,6);
    printArray(oddarr,5);
    return 0;

}
  