#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    float BMI, wt, h;
    cout << "enter wt and h" << endl;
    cin >> wt>>h;
    
    BMI = wt/pow(h,2);
     
     if (BMI<15) {
         cout << "starving" <<endl;
     } 
     else if (15.1<BMI<17.5) {
         cout << "anorexic" <<endl;
     }
     else if (17.6<BMI<18.5) {
         cout << "underweight " <<endl;
     }
     else if (18.6<BMI<24.9) {
         cout << "ideAL" <<endl;
     }
     else if (25<BMI<25.9) {
         cout << "overweight" <<endl;
     } 
     else if (30<BMI<30.9) {
         cout << "obese" <<endl;
     }
     else (BMI>=40) {
         cout << "morbidly obese" <<endl;
     }
     
    return 0;
}
