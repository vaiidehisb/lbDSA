#include <iostream>
using namespace std; 
/* calulate factorial value entered through keyboard */ 
int fact(int) ;

int main() {  
    int num;
    int factorial;
    cout << "enter a number" <<endl;
    cin >> num;
    factorial = fact(num);
    cout << "factorial of a number is " << factorial<<endl;
    return 0;
    }
 int fact (int num) {
     int i;
     int factorial =1;
     for (i=1; i<=num; i++) 
     factorial = factorial *i;
     return (factorial);
 }