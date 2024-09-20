/*
//Maximum and minimum of an array :
//Time Complexity: O(N) and Auxiliary Space: O(1)
#include<iostream>
using namespace std;

int Setmini(int Arr[], int N){
    int mini=INT_MAX;
    for(int i=0; i<N; i++){
        if(Arr[i]<mini){
            mini = Arr[i];
        }
    }
    return mini;
}

int Setmaxi(int Arr[], int N){
    int maxi= INT_MIN;
    for(int i=0; i<N; i++){
        if(Arr[i]>maxi){
            maxi = Arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[] = {4,5,6,3,6,4};
    int N=6;
    cout<<"Minimum element is: "<<Setmini(arr,N)<<endl;
    cout<<"Minimum element is: "<<Setmaxi(arr,N)<<endl;
}
*/

//Maximum and minimum of an array using Sorting:
//Time Complexity: O(nlogN) and Auxiliary Space: O(1)
#include<iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[],int n){
    Pair minmax;
    sort(arr, arr+n);
    minmax.min = arr[0];
    minmax.max = arr[n - 1];

    return minmax;
}
int main(){
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    Pair minmax = getMinMax(arr, arr_size);
    cout<<"Maximun element is "<<minmax.max<<endl;
    cout<<"Minimum element is "<<minmax.min<<endl;
} 


