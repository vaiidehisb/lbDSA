#include <iostream>
using namespace std; 

void printArray (int arr[], int size) {
    for (int i=0;i<size;i++) {
        cout << arr[i] <<" ";

    }  cout <<endl;
} 

void swapalternate (int arr[], int size) {
    for (int i = 1; i<size; i+=2){ 
        if (i+1<size) {
 swap(arr[i],arr[i+1]);
        }
       
    }
}
int main() {
 int even[6] = {22,-2,3,5,9,6};
 int odd[5] = {1,5,7,3,9};

 swapalternate (even, 6);
 printArray (even,6);

 swapalternate (odd,5);
 printArray (odd,5);
 return 0;
 
} 
/*#include <iostream>
using namespace std;

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to swap alternate elements in an array
void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if (i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {
    int even[6] = {22, -2, 3, 5, 9, 6};
    int odd[5] = {1, 5, 7, 3, 9};

    // Swap alternate elements in the even array and print
    swapAlternate(even, 6);
    printArray(even, 6);

    // Swap alternate elements in the odd array and print
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}*/

