#include <iostream>
using namespace std;
void calc_gcd(int, int, int*);
int main() {
    int j, k, gcd;
  cout << "enter two integer "<<endl;
  cin>>j>>k;
  calc_gcd(j,k,&gcd);
  cout << "gretest common inteegr "<<gcd<<endl;
  return 0;
} 

void calc_gcd (int number, int denomi, int *gcd)
{
    int temp, num;
    if (denomi ==0)
    { *gcd = number;
    } 
    else {
        num = number / denomi ;
        temp = number - num*denomi;
        while (temp) {
            number = denomi;
            denomi = temp;
            num = number / denomi;
            temp = number - num * denomi;

        } 
        *gcd = denomi;

    }
}
