#include <iostream>
using namespace std;
int main() {
    int m1, m2, m3, m4, m5, aggr;
    float per;
    cout<< "enter marks in 5 subject" <<endl;
    cin>> m1>>m2>>m3>>m4>>m5;
    aggr = m1+m2+m3+m4+m5;
    per = aggr/5;
    cout<< "aggregate marks ="<< aggr <<endl;
    cout<< "percentage marks=" << per <<endl;

}
