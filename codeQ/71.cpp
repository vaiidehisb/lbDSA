#include <iostream>
#include <cmath>
using namespace std;

// Function declaration with void return type
void shift_right(int*, int*, int*);

int main() {
    int x, y, z;
    cout << "Enter values of three numbers: " << endl;
    cin >> x >> y >> z;

    cout << "Before shifting: " << " x = " << x << " y = " << y << " z = " << z << endl;
    
    // Function call
    shift_right(&x, &y, &z);

    cout << "After shifting: " << " x = " << x << " y = " << y << " z = " << z << endl;
    return 0;
}

// Function definition
void shift_right(int* a, int* b, int* c) {
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}