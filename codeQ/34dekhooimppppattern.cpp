
#include<iostream>
using namespace std;

int main () {
  int n;
  cin>>n;

  int i=1; 
  
  while (i<=n) {
      int j=1; 
       int value =1;
      while (j<=n-i+1) { 
         
          cout<<value ; 
          value = value +1;
          j=j+1;
      }  
      int star=i-1;
      while (star) {
          cout<<"*";
          star = star - 1;
      } 
      int star2 = i-1;
      while (star2){
          cout << "*";
          star2 = star2-1;
      } 
      int k=n-i+1;  
      
      while (k>=1) { 
          
          cout << k;
          k=k-1;
      }
      cout <<endl;
      i=i+1;
  }
}
 
     
/* #include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while (i <= n) {
        int j = 1;
        int value = 1;

        // Print increasing numbers
        while (j <= n - i + 1) {
            cout << value;
            value = value + 1;
            j = j + 1;
        }

        // Print asterisks
        int star = i - 1;
        while (star > 0) {
            cout << "*";
            star = star - 1;
        }

        // Print second set of asterisks
        int star2 = i - 1;
        while (star2 > 0) {
            cout << "*";
            star2 = star2 - 1;
        }

        // Print increasing numbers in reverse order
        int k = n - i + 1;
        while (k >= 1) {
            cout << k;
            k = k - 1;
        }

        cout << endl;
        i = i + 1;
    }

    return 0; // Indicate successful program execution
}*/
