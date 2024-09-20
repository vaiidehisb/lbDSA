#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;

int arr[n];
int sum=0;
int p;

for(int i=0; i<n; i++) {
    cin>>p;
    arr[i]=p;
    sum+=p;
} 
double avg=static_cast<double>(sum)/n;
cout<<avg<<endl;
}