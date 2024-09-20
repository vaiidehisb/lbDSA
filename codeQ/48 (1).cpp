#include <iostream> 
#include <limits.h>
using namespace std;
int main() {
    int mini =  INT_MAX;
    int max = INT_MIN;
   int a;
   cout <<"how many numbers do you wanna enter " << endl;
   cin >> a;
    int i=0;
    while (i<a) {
      int number ;
      cout << "enter the number  " << endl;
      cin >> number;

      if (number <mini) {
          mini = number;
      } 

      if (number > max) {
          max= number;
      } 
      i++;
    }  
    cout << "range is " << max - mini << endl;
}

