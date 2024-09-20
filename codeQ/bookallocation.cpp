/*#include<iostream>
using namespace std; 

bool isPossible(arr[],int n,int m,int mid) {
    int srudenetCount = 1;
    int pageSum =0;

    for(int i=0; i<n; i++) {
        if (pageSum + arr[i]<=mid) {
            pagrSum += arr[i];
        } 
        else {
            studentcount++;
            if (studentCount>m || arr[i]>mid) {
                return false;
            } 
            pagesum = arr[i];
        }
    } return true;
}
int main () {
    int arr[4]={10,20,30,40};
    int s=0;
    int sum =0;
    for (int i=0; i<n; i++) {
        sum +=arr[i];
    } 
    int e=sum;
    int ans= -1;
    int mid = s + (e-s)/2;

    while (s<=e) {
        if (isPossible(arr[],n,m,mid)) {
            ans = mid;
            e=mid-1;
        } 
        else {
            s = mid +1;
        } 
        mid = s + (e-s)/2;
    } return ans;
}*/
  
   #include <iostream>
#include <vector>

using namespace std;

bool isPossible(const vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(const vector<int>& arr, int n, int m) {
    int s = 0;
    int sumOfPages = 0;
    for (int i = 0; i < n; i++) {
        sumOfPages += arr[i];
    }
    int e = sumOfPages;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int m = 2;  // Number of students
    int n = arr.size();  // Number of books

    int result = findPages(arr, n, m);
    cout << "Minimum number of pages a student can have: " << result << endl;

    return 0;
}
