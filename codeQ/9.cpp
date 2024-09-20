#include <iostream> 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int amt, one,two,five, ten, fif, hun, total;
    cout << "enter the amount" << endl;
    cin >> amt;
    hun = amt/100;
    amt = amt%100;
    fif = amt/50;
    amt= amt%50;
    ten = amt/10;
    amt = amt %10;
    five = amt/5;
    amt = amt%5;
    two = amt/2;
    amt = amt%2; 
    one = amt/1;
    amt = amt%1; 
    total = hun + fif + ten + five + two + one;
    cout << "smallets number of notes is " << total << endl;
    


    
      
 return 0;
}
    