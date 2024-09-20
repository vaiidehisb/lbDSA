#include <iostream>
using namespace std; 
// A function that returns the index of the first or last occurrence of n in arr
// If left is true, search from the left, otherwise search from the right
// If n is not found, throw an exception
int findIndex(int arr[], int size, int n, bool left){
 int s=0, e=size-1; 
 int ans = -1;
 while (s<=e) {
     int mid = s + (e-s)/2;
     if (arr[mid]==n) {
       ans = mid;
       // Update the search range depending on the direction
       if (left) {
         e = mid - 1;
       } else {
         s = mid + 1;
       }
     } 
     else if (arr[mid]<n) {
         s = mid+1;
     } 
     else {
         e = mid-1;
     } 
 } 
 // If n is not found, throw an exception
 if (ans == -1) {
   throw runtime_error("Element not found");
 }
 return ans;
} 

int main() {
    int arr[8]={1,2,3,3,4,3,3,6};
    try {
      // Find the first and last index of 3 in the array
      int first = findIndex(arr,8,3,true); 
      int last = findIndex(arr,8,3,false); 
      int totnumocc = (last - first)+1;
      // Print the results
      cout << "The first index is " << first << endl;
      cout << "The last index is " << last << endl; 
      cout << "totla number of occurance "<<totnumocc<<endl;
    } catch (exception& e) {
      // Handle the exception
      cout << "Error: " << e.what() << endl;
    }
} 
