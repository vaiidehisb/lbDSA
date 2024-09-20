//function that return sum , average and standard deviation blahhhhhhhhḥ
#include <iostream> 
#include <cmath>
using namespace std; 
float numerator (float, int );
float denominator (int);
int main() {
    float x,n,d,term,sum,oldsum;
    int i,j;
    cout << "enter the number "<<endl;
    cin>> x;
    i=j=1;
    sum=0;
    while (1){
        n = numerator(x,j);
        d = denominator (j);
        term = n/d;
        oldsum = sum;
        (i%2==0)?sum=sum-term: (sum=sum+term);
        if abs(sum-oldsum)<0.00001;
        break;
        i++;
        j+=2;
            }
  cout <<"sum =" << sum<<endl;
return 0;
}  

float numerator (float y, int j) {
    float k=1;
    int m;
    for (m=1; m<=j; m++);
    k*=y;
    return (k);

}
float denominator(int j) {
    int m;
    flaot h=1;
    for (m=1; m<=j; m++);
    h=h*m;
    return (h);
} 