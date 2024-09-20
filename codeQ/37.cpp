#include <iostream> 
#include <cctype>
using namespace std;
int main() {
    int a, b, c;
    cout << "enter the number" << endl;
    cin >> a>>b>>c;
    
    if (a>=b && a>=c) {
        cout << "a is largest " << endl;
    } 
    else if (b>=a && b>= c) { 
        cout << " b is largest" << endl;
    } 
    else if (c>=a && c>=b) {
        cout << "c is largest " << endl;
    }
    
     
     
    return 0;
}
