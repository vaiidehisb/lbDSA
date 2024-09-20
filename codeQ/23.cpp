#include<iostream>
using namespace std;

int main()
{ 
    int l, b, a, p;

   cout << "enter leanth and breath " << endl;
   cin >> l>>b;

   a = l*b;
   p = 2*l+2*b;

   if (a>p) 
   {
       cout << " area of trangle is greater than perimeter " << a<< ">"<<p <<endl;

   } else {
       cout << "area of thangle is not greater than perimeter " <<endl;
   }
    return 0;
}