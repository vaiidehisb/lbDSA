/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]='H'||s[i]='Q'||s[i]='9'||s[i]=='+'){
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
    }
    return 0;
}*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.find_first_of("HQ9")!= string::npos) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    return 0;
}
