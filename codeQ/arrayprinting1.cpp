
#include <iostream>
using namespace std;

int main () {
    int array[6];
    int value =41;

    for (int i=0; i<6; i++) {
        array[i]=value;
    } 

    for (int i=0; i<6; i++){
        cout << array[i]<<" ";
    } return 0;
}