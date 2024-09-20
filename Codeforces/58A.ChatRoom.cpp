#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    string hello ="hello";
    cin>>s;
    int j=0, pas=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]==hello[j]){
            j++;
            pas++;
        }
    } 

    if(pas==5){
        cout<<"Yes";
    } 
    else {
        cout<<"NO";
    }
    return 0;
}
