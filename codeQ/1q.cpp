#include <iostream>
using namespace std;
int main() {
  float bd, da, hr, gs;
  cout << "Emter basic salary" << endl;;
  cin >> bd;
  da = 0.4 * bd;
  hr = 0.2 * bd;
  gs = bd + da + hr;
  cout << "basic salary is" << bd << endl;
  cout << "dreadness allowamce is" << da << endl;
  cout << "house rent allowance is" << hr << endl;
  cout << "gross salary is " << gs << endl;
  return 0;
};