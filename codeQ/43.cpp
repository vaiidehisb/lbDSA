#include <iostream>
using namespace std;
int main() {
    int asciivalue=0;
    while (asciivalue<=255) {
        cout << "ASSCII value " << asciivalue << "character" << static_cast<char>(asciivalue)<<endl; 
        ++asciivalue;
    }
}
