#include <iostream>
using namespace std; 
int prime(int x);
int main() {
    int num;
    cout <<" enter the positive number "<<endl;
    cin>>num;
 prime ( num) ;
}

int prime (int x){
    int a;
    for (a=2; a<=x; a++) {
        if (x%a==0) {
            cout <<a<<" ";
            x=x/a;
            a--;
        }
    } 
    return a ;
} 