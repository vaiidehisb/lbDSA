

#include <iostream>
using namespace std;
int rsum(int n);
int main() { 
    int num, sum;
    int n;
    cout << "enter number  "<<endl;
    cin>> num;
    sum = rsum( num );
    cout << "sum of digits "<<sum<<endl;
    return 0;
   
}
int rsum (int n) {
    int s, rem;
    if (n!=0) 
{
    rem = n%10;
    s = rem + rsum(n/10);
    } 
    else 
    return 0;
    return s;
}