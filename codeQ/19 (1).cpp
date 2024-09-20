#include <iostream>
using namespace std;
int main() {
    int n,revno=0, rem, nn; 
    cout <<  "enter five digit number " << endl;
    cin >> n;  
    nn = n; 
    rem = n;
     
    while(nn!=0)  { 
    rem = nn%10;
    revno = revno*10 + rem;
      nn= nn/10;
      }
    if (n == revno) 
    {  cout << "the original number " << revno << endl;
    } 
    else 
    { cout << "the original number  are not equal "<< revno << endl;}
     return 0;  
}
