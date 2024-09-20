#include<iostream>
using namespace std;
int main() {
    int n,l(1),ml(1);
    cin>>n;
    int profit[1];
    for(int i=0; i<n; n++){
        cin>>profit[i];
        if(profit[i]>=profit[i-1]){
            l++;
            ml= max(ml,l);
        } 

        else {
        l=1;
        }
    }
 cout << ml << endl;
    return 0;
}