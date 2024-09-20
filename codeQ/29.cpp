#include <iostream> 
#include <cmath>
using namespace std;
int main() { 
   char ch;
   cout << "enter the char" << endl;
   cin >>ch;

 if (ch>=65 && ch<=90) {
     cout << " the character is upper case letter " << endl;
 }
 else if (ch>=96 && ch<=122) {
     cout << "the char is a lower case letter " << endl;
 } else if ( ch>=48 && ch<=57) {
     cout << "the char is a digit " << endl;
 } else ((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || ch>122) ;{
     cout << "the char is a special symbol"<<endl;
 }
 return 0;
    
}
