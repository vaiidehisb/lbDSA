#include<iostream>
#include<string>
using namespace std;

void reverse(string& s, int i, int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}

int main(){
    int i=0, j=3;
  string s="abcd";
  reverse(s,0,s.length()-1);
  
  cout<<s;
}