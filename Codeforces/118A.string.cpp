/*#include<iostream>
#include<string>
using namespace std;

int main () {
   string str;
   cin>>str;
  
  for (int i=0; i<str.size(); i++) {
    
    if(str[i] == 'A'||'O'||'Y'||'E'||'U'||'I'||'a'||'o'||'y'||'e'||'u'||'i') 
    str.erase(i);
  } 
  else if (str[i] != 'A'||'O'||'Y'||'E'||'U'||'I'||'a'||'o'||'y'||'e'||'u'||'i' ) {
    str[i-1]==
  } 
  else {
    
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    
  }
    cout<<str;
}

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;

    // Iterate through each character of the string
    for (int i = 0; i < str.size(); i++) {
        // Check if the current character is a vowel
        if (str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I' ||
            str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i') {
            // If it's a vowel, erase it from the string
            str.erase(i, 1);
            // After erasing a character, decrement i to handle consecutive vowels
            i--;
        } else {
            // If it's not a vowel, convert it to lowercase if it's uppercase
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    } 

    for (int i=0; i<str.size(); i++) {
        if((str[i]>='a'&& str[i]<='z') && (i == 0 || (str[i - 1] == ' ' && i > 0))) {
            str.insert(i, 1, '.');
        }
    }
    cout << str;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string result;
    for(int i=0; i<s.size(); i++){
        char ch=tolower(s[i]);
        if(ch=='a' || ch=='o' || ch=='y' || ch=='e' ||
         ch=='u' || ch=='i') {
            continue;
        } 
        else {
            cout<<"."<<ch;
        }
    } 
    cout<<result;
    return 0;
}
