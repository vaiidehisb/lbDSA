
#include <bits/stdc++.h>
using namespace std;
int main() { 
    double angle;

    
    cout << "Enter the angle in degrees: ";
    cin >> angle;

    double angleInRadians = angle * M_PI / 180.0;

    
    cout << "Trigonometric Ratios for angle " << angle << " degrees:" << endl;
    cout << "Sin(" << angle << ") = " << sin(angleInRadians) << endl;
    cout << "Cos(" << angle << ") = " << cos(angleInRadians) << endl;

    
    if (fmod(angle, 180.0) != 90.0) {
        cout << "Tan(" << angle << ") = " << tan(angleInRadians) << endl;
    } else {
        cout << "Tan(" << angle << ") is undefined (division by zero)." << endl;
    }

}
    