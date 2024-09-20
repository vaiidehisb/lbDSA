#include <iostream>
using namespace std;
int main() {
    int i, n=1;
    cout << "print prime number " << endl;
    for (n=1; n<=300; n++) {
        i=2;
        for (i=2; i<n; i++) {
            if (n%i==0) 
            break;
        } 
        if (i==n) 
        cout<<n<<endl;
    } 
    return 0;
} 
         
