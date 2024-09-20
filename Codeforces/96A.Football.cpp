#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int condition =1;
    for(int i=0; i<s.size()-1; i++) {
        if(s[i]==s[i+1]) {
            condition++; 
            if(condition == 7) {
                cout<<"YES"<<endl;
                return 0;
            } 
        } 
        else {
            condition=1;
        } 
    }  
    cout<<"NO"<<endl;
    return 0;
}