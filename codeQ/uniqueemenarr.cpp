#include <iostream>
using namespace std; 


int  unique (int arr[], int size) {
    int ans=0;
    for (int i=0; i<size; i++) {
        ans = ans^arr[i];
    } return ans;
} 


int main() {
 int odd[5] = {3,3,4,4,6};
int ans = unique (odd,5);
 
 cout <<ans <<endl;
 return 0;
 
} 

