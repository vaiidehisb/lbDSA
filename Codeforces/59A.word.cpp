#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int uc=0;
    int lc=0;
    cin>>s;
    for (int i=0; i<s.size(); i++) {
        if(s[i]>='A'&& s[i]<='Z') {
            uc+=1;
        }
        else if (s[i] >= 'a' && s[i] <= 'z') {
            lc+=1;
        }
    } 

    if(uc>lc){
        for(int j=0; j<s.size(); j++) {
            s[j]=towupper(s[j]);
        }
    } 
    else if(lc>uc){
        for(int j=0; j<s.size(); j++) {
            s[j]=towlower(s[j]);
        }
    } 
    else {
        for(int j=0; j<s.size(); j++) {
            s[j]=towlower(s[j]);
        }
    } 
    cout<<s;
    return 0;
}