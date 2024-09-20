/* calulate calculate power of a value */ 
#include <iostream> 
#include <cmath>
using namespace std; 

float power(float,int) ;

int main() {  
    int y; 
    float x,result;
    
    cout << "enter two numbers" <<endl;
    cin >> x>>y;
    result =power (x,y);
    cout << "power of a number  " << result  <<endl;
    return 0;
    }
  
  float power (float x,int y)
  {
      int i;
      float p=1;
      for (i=1; i<=y; i++) 
      p=p*x;
      return (p);
  }