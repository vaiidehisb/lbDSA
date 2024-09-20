#include<iostream>
using namespace std;

int main()
{
    int a, b, c,l;
    cout<<"Enter the angle of the triangle"<<endl;
    cin>>a>>b>>c;
    l=180;
    if (a+b+c==l) {
        cout << "triangle is valid " << endl;
    } 
    else {
        cout << "its not a valid traingle " << endl;
    }
    return 0;
}