#include <iostream> 
#include <cctype>
using namespace std;
int main() {
    int yr;
    cout << "enter yr" << endl;
    cin >> yr;
    
    if (yr%400 && yr%100 || yr%4) {
        cout << "the entire char is leap year " << endl;
    } 
    else { 
        cout << " the char is not a leap year" << endl;
    }
    
     
     
    return 0;
}
