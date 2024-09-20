#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    int num, rem, oct=0,i=0;
    cout << "enter the integer number " <<endl;
    cin >> num; 
    while (num !=0) {
       rem = num%8;
       oct= oct + rem*pow(10,i);
       num = num/8;
       i++;
    } 
    cout << "octal number is " <<oct << endl;
}
    

