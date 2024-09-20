#include <iostream>
using namespace std;
int main() {
    int cp, sp, p, l; 
    cout <<  "enter selling price and cost price" << endl;
    cin >> cp>>sp;

    p = sp-cp;
    l = cp-sp;

    if (p>0) 
    cout<< "selller has made a profit of Rs" << p<< endl;
    if (p<0)  
    cout << "seller has made a loss of Rs" << l << endl;
    if (p==0) 
    cout << "there is no loss no profit " << endl;

    return 0;
}
