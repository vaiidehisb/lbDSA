#include <iostream>
using namespace std;
int main() {
  float km, m, cm, inch, ft;
  cout << "enter the distance in kilometer"<< endl;
  cin >> km;
  m = km * 1000;
  cm = m * 100;
  inch = cm / 2.54;
  ft = inch / 12;
  cout << "distance in meter is" << m << endl;
  cout << "distance in centimeter is"<<cm << endl;
  cout << "distance in inch is"<< inch << endl;
  cout << "distance in feet is"<<ft << endl;
  return 0;
  
}