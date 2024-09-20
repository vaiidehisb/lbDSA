#include <iostream> 
#include <cctype>
using namespace std;
int main() {
    char c;
    cout << "enter charcacter" << endl;
    cin >> c;
    
    if (islower(c)) {
        cout << "the entire char is lowercase alphabate " << endl;
    } 
    else { 
        cout << " the char is not a lowercase" << endl;
    }
    
     
     
    return 0;
}
