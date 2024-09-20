#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    double ang;
    cout << "enter the ang" << endl;
    cin >> ang;
    double sine= sin(ang);
    double cosine = cos (ang);
    if (pow(sine,2)+pow(cosine,2)==1) {
        cout << "the sum of squres of sine and cosine is equal to 1" << endl;
    } else {
        cout << "sum of sine and cosine is not equal" << endl;
    }
    
    return 0;
}
