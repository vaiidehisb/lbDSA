#include <iostream>
using namespace std;
int main() {
  
  float x, y, i, power;
  cout << "enter two number" << endl;
  cin >> x>>y;
  power = i = 1; 
  while (i<=y) {
      power = power*x;
      i++;
  } 
  cout << "power " << power <<  endl;


  return 0;
}
