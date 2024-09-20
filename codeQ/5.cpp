#include <iostream>
using namespace std;
int main() {
    int l,b,r,A,P;
    float a,c;
    
    cout<< "leangth, breath and radius of a rectangle" <<endl;
    cin>> l>>b>>r;
    A = l*b;
    P = 2*l+2*b;
    a = 3.14*r*r;
    c = 2*3.14*r;
        cout<< "Area of rectangle is"<< A <<endl;
        cout<< "Perimeter of rectangle is"<< P <<endl;
        cout<< "area of a circle is"<< a <<endl;
        cout<< " cercumference of a circle"<< c <<endl; 
        return 0;
    

}
