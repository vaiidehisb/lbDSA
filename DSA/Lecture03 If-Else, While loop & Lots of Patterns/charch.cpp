#include<iostream>
using namespace std;
int main () {
    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z') {
        cout<<"it is lower case letter"<<endl;
    } 
    else if (ch<='A' && ch>= 'Z') {
        cout<<"its is a upper case letter";
    } 
    else {
        cout<< "its a number "<<endl;
    }
}