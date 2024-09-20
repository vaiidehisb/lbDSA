//function that return sum , average and standard deviation 
#include <iostream> 
#include <cmath>
using namespace std; 
void result (int, int, int, float*, float*);

int main() { 
   float avg, per;
   int m1, m2, m3;
   cout << "enter Marks in 3 subject "<<endl;
   cin>> m1>>m2>>m3;
   result (m2,m2,m3,&avg,&per);
   cout << "average ="<<avg <<endl<< "percentage ="<<per <<endl;
   return 0;

} 
void result (int m1, int m2, int m3, float *a, float *p)
{
    *p=*a=(m1+m2+m3)/3.0;
}


