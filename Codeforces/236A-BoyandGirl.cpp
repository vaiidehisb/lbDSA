/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () { 
    int arr[1001];
    string s; 
    cin >>s;
    int count =0;
    int index=0;
    for (int i=0; i<s.size()-1; i++) {
       index=s[i];  
       for(int j=1; j<s.size(); j++) {
        if(index==s[j]) {
            count++;
        } 
        else {
            continue;
        }
       } 
    }  
    cout<<s.length() <<" "<<count<<endl;
    int n = s.length()-count;
    if (n%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    } 
    else {
        cout<<"IGNORE HIM!"<<endl;
    }

}

#include <iostream>
#include <string>
#include <unordered_set> // Include this header for using unordered_set
using namespace std;

int main () {
    string s;
    cin >> s;

    unordered_set<char> charSet; // Using unordered_set to store unique characters
    for(char ch : s) {
        charSet.insert(ch);
    }

    int uniqueChars = charSet.size();
    cout << s.length() << " " << uniqueChars << endl;

    if (uniqueChars % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } 
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}*/

//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    
    int ans=0;
    for(int i=1; i<s.length(); i++) {
        if(s[i]!=s[i-1]) 
        ans++;
    } 
   // cout<<s<<endl;
  //  cout<<ans<<endl;
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}

