#include <iostream>
using namespace std;
int main() {
  
  int i, num, fact;
  cout << "enter the number" << endl;
  cin >> num;
  fact = i = 1; 
  while (i<=num) {
      fact = fact*i;
      i++;
  } 
  cout << "factorial value " << fact <<  endl;


  
}
