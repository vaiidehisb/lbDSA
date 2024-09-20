/*#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,k;
    cin>>n>>k;
    int arr[n];
    int arr1[e];
    int arr2[o];
    int index=0,ind1=0,ind2=0;
    
    for (int i=n-1; i>=1; n--){
      if(i%2!=0){
       arr1[ind1++]=i;
      }
      else {
        arr2[ind2++]=i;
      }
    } 
    sort(arr[e]);
    sort(arr[o]);
    arr
    cout<<arr[k-1]<<endl;
    return 0;
}*/

//4034903   Jul 7, 2013 5:22:04 PM	fuwutu	 318A - Even Odds	 GNU C++0x	Accepted	15 ms	0 KB

#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
