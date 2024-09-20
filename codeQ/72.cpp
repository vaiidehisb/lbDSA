#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
bool validate(float, float, float);
void calarea(float, float, float, float*);

int main() {
    float a, b, c, area = 0;

    cout << "Enter sides of a triangle: " << endl;
    cin >> a >> b >> c;

    if (validate(a, b, c)) {
        calarea(a, b, c, &area);
        cout << "Area of triangle is " << area << endl;
    } else {
        cout << "Not a valid triangle." << endl;
    }

    return 0;
}

bool validate(float x, float y, float z) {
    bool flag = false;

    if (x > y && x > z) {
        flag = (x < (y + z));
    } else if (y > z) {
        flag = (y < (x + z));
    } else {
        flag = (z < (x + y));
    }

    return flag;
}

void calarea(float x, float y, float z, float* area) {
    float s;
    s = (x + y + z) / 2;
    *area = sqrt(s * (s - x) * (s - y) * (s - z));
}
