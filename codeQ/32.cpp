#include <iostream>
using namespace std;
int main() {
    int red, green, blue;  
    double r, g, b, white, cyan, magenta, yellow, black;
    cout << "enter rbc value" << endl;
    cin >> red>>green>>blue;

    r = red/255;
    g = green/255;
 b = blue/255;

 white = max(r, g, b);
 cyan = (white - r)/white;
 magenta = (white -g)/white;
 yellow = (white - b)/white;
 black = 1 - white;

 cout << "cmyk value" << cyan <<" "<< magenta << " "<<yellow << " " << black <<endl;



}
