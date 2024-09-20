#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
    float cx, cy, r, x, y;
    cout << " enter cordinate of x, y and radius r " << endl; 
    cin >> cx>>cy>>r;  
    cout << "enetr quardinates of point x and y" << endl;
    cin >> x>>y;

    float distance = sqrt(pow(x-cx,2)+pow(y-cy,2));
   
    if (distance < r) 
    { 
     cout << "point is inside the circle  " << endl;
    } else {
        cout << "point is not inside the circle " <<endl;
    }
 return 0;
    
}
