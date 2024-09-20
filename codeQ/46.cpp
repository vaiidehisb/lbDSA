#include <iostream>
using namespace std;
int main() {
    int positive =0, negative =0, zeroes = 0, num;  
    char ch;
    while (true ) {
        cout << " Do you wanna give an input in y or Y i.e yes" << endl;
        cin >> ch;

        if (ch=='y' || ch=='Y') {
            cout << "input your number " <<endl;
            cin >>num;
            if (num>0) 
              positive++;
           else if (num<0) 
            negative++;
            else 
            zeroes++ ;
        } 
        else 
        break; 
    } 
    cout << "positive count : " << positive <<endl; 
    cout << "negative count : " << negative <<endl;
cout << "zero count : " << zeroes <<endl;
}

