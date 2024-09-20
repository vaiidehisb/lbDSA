#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    int a, b, c; 
    cout << "enter sides of a triangle" <<endl;
    cin >> a>>b>>c;

    if ((a+b >c) && (b+c>a) && (c+b>a)) {
        if (a==b && b==c) {
            cout << "equilateral trianngle" <<endl;
        } 
        else if (a==b || b==c || c==a) {
            cout << "isosceles" << endl;
        } 
        else {
            cout << "scalent" << endl;
        } 
        if (pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) || pow(c,2)+pow(a,2)==pow(b,2))
        {
            cout << "right triangle" << endl;
        } else {
            cout<< "not a right triangle " << endl;  }
    } 
   else {
       cout << "not a trianglr " <<endl;
   }
}
