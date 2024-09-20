#include <iostream>
using namespace std; 


int  duplicate (int arr[], int size) {
    int ans=0;
    for (int i=0; i<size; i++) {
        ans = ans^arr[i];
    }  
    for (int i=1; i<size; i++) {
   ans = ans^i;  
     } 
     return ans;
} 


int main() {
 int odd[5] = {1,2,3,3,4};
int ans = duplicate(odd,5);
 
 cout <<ans <<endl;
 return 0;
 
} 

