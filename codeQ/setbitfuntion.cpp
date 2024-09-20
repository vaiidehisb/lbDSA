#include <iostream>
using namespace std; 

int bitcount(int n ) { 
    int count =0;
    while (n>0) {
        count = count + n%2;
        n = n/2;
        }    return count;
    
    } 
    

int main() {
    int a,b;
    cout << "enter the value of a & b"<<endl;
    cin>>a>>b; 

    int totalsetbita = bitcount(a);
    int totalsetbitb = bitcount(b);

cout << "total set bit of a "<< totalsetbita <<endl;
cout << "total set bit of b "<< totalsetbitb <<endl; 
cout << "total set bit of a and b both are " << totalsetbita+totalsetbitb;
 
 return 0;
  
}
/*#include <iostream>
using namespace std;

void onecount(int a, int b) {
    int x, y;

    while (a != 0 || b != 0) {
        x = a % 2;
        y = b % 2;
        a = a / 2;
        b = b / 2;
        cout << x << endl << y << endl;
    }
}

int main() {
    int a, b;
    cout << "enter the value of a & b" << endl;
    cin >> a >> b;
    onecount(a, b);
    return 0;
}*/

