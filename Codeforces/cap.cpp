#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char ch[200];
    cin>>ch;
    if(ch[0]>='a' && ch[0]<='z') {
        cout<<ch[0];
    } 
    else {
        char temp = ch[0]- 'a' + 'A'; 
        cout<<temp;
    }
      
    for (int i=1; i<strlen(ch); i++) {
        cout<<ch[i];
    } 
    return 0;
} 
