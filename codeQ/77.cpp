#include <iostream>
using namespace std;
void fibo (int, int, int);
int main (){
    int old=1, int current =1;
    cout << old<<current;
    fibo (old, current,23);
    return 0;
}
void fibo (int old, int current, int terms){
    int newterm;
    if (term>=1){
        newterm = old +current;
        cout << newterm;
        term = term -1;
        fibo (current, newterm, terms);
    }
}