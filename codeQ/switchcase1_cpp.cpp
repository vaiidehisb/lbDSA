#include <iostream>
using namespace std;
int main() {
   int a,b;
   cout << "enter the number a and b"<<endl;
   cin>>a>>b; 

   int op;
   cout <<"enter the operator "<<endl;
   cin>>op;

   switch(op) {
     case '+' :  cout << a+b <<endl;
                break;
     case '-' : cout << a-b <<endl;
                break;
     case '*': cout << a*b <<endl;
                break;
     case '/': cout << a/b <<endl;
                break;
} }
