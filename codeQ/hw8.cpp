
#include<iostream>
using namespace std;

int main () {
    char ch; 
    cout <<"enter the character "<<endl;
    cin>>ch;

    if(ch>='0'&& ch<='9') {
        cout <<"its is a number "<<endl;
    } 
    else if (ch>='a' && ch<='z') {
        cout << "its a small case letter"<<endl;
    } 
    else if (ch>='A' && ch<='B'){
        cout << "its a large case letter "<<endl;
    }
} 

/*#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << "You entered a number." << endl;
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "You entered a lowercase letter." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "You entered an uppercase letter." << endl;
    } else {
        cout << "You entered a character that is not a number or a letter." << endl;
    }

    return 0;
}*/

  