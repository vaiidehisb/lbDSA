=#include <iostream>
using namespace std;
int main() { 
    char c,ch;
    int i,j,k,space=1; 
    for (i=6; i>=0; i--) {
        for (j=0; j<=i; j++) { 
            c=j+65;
            cout << c;
        }   
        if (i!=6) { 
        for (j=1; j<=space; j++) {
            cout << " ";
        } 
        space=space+2; 
        }
        if (i==6) {
            c=c-1; 
            j=1;
             }  
        else { j=0;
                  }
         for (; j<=i; j++) {
            cout << c; 
            c=c-1;
        }
        cout <<endl;
    }
} 








#include <iostream>
using namespace std;
int main() { 
    int n=5;
    for (int i=1; i<=n; i++) { 
        int coef =1;
        for (int k=n-i; k>0; k--) {
            cout << " ";
        } 
        for (int j=1; j<=i; j++ ) {
            cout << coef << " ";
           coef = coef*(i-j)/j;
        } cout <<endl;
}
    } 
    
