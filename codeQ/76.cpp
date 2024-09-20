

#include <iostream>
using namespace std;
void factorize (int,int);
int main (){
    int num;
    cout << "enter the number "<<endl;
    cin>> num;
    factorize (num,2);
    return 0;
}
void factorize (int n, int i) {
    if (i<=n){
        if (n%i==0){
            cout << i<<endl;
            n=n/i;
        }
        else i++;
        factorize(n,i);
    }
}