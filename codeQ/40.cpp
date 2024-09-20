#include <iostream>
using namespace std;
int main() {
  float otpay;
  int hour, i=1;

  while (i<=10) { 
      cout << "enter no of hour worked" << endl;
      cin >> hour;
      

      if (hour>=40)  {
          otpay = (hour - 40)* 12;
      } 
      else {
          otpay = 0; 
      } 
      cout << "hour overtime pay " << hour << "  " << otpay << " ";
      i++;
  }
}
