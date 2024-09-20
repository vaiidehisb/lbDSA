#include <iostream> 
#include <cctype>
using namespace std;
int main() {
    char c;
    cout << "enter charcacter" << endl;
    cin >> c;
    
    if (ispunct(c)) {
        cout << "the entire char is special symbol " << endl;
    } 
    else { 
        cout << " the char is not a special symbol" << endl;
    }
    
     
     
    return 0;
}
