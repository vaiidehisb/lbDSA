/*
//Array Reverse Using an Extra Array (Non In-place)
//Time Complexity: O(n)
//Copying elements to a new array is a linear operation.
//Auxiliary Space Complexity: O(n)
//Additional space is used to store the new array.
#include<iostream>
using namespace std;

int RevArr(int Arr[],int size){
    int RArr[size];
    for (int i=0; i<size; i++){
        RArr[i]=Arr[size-i-1];
    }
    cout<<"Reversed Array"<<" ";
    for (int i=0; i<size;i++){
        cout<<RArr[i]<<" ";
    }
}

int main(){
    int Arr[]={2,5,6,3,4,6};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    RevArr(Arr,size);
}
*/

/*
//Array Reverse Using a Loop (In-place):
//Time Complexity: O(n)
//The loop runs through half of the array, 
//so it’s linear with respect to the array size.
//Auxiliary Space Complexity: O(1)
//In-place reversal, meaning it doesn’t use additional space.

#include<iostream>
using namespace std;

void RevArr(int RArr[],int start, int end){
    while(start<end){
        //swap(RArr[start],RArr[end]);
        int temp = RArr[start];
        RArr[start] = RArr[end];
        RArr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main(){
    int Arr[]={1,2,3,4,5};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    RevArr(Arr,0,size-1);
    cout << "Reversed array is" << endl;
    printArray(Arr, size);
}
*/
/*
//Array Reverse Inbuilt Methods (Non In-place):
//Time Complexity: O(n) The reverse method
// typically has linear time complexity.
//Auxiliary Space Complexity: O(n)
//Additional space is used to store the reversed array.

#include<iostream>
using namespace std;

int main(){
    int Arr[]={1,2,3,4,5};
    int size=sizeof(Arr)/sizeof(Arr[0]);
    reverse(Arr, Arr + size); 
    for (int i = 0; i < size; i++) {
        std::cout << Arr[i] << " ";
    }

    return 0;
}
*/
/*
//Array Reverse Recursion (In-place or Non In-place)
//Time Complexity: O(n). The recursion goes through 
//each element once, so it’s linear.
//Auxiliary Space Complexity: O(n) for non in-place, 
//O(log n) for in-place (due to recursion stack).
// Recursive C++ program to reverse an array
#include <bits/stdc++.h>;
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    reverseArray(arr, start + 1, end - 1);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    // To print original array
    printArray(arr, 6);

    // Function calling
    reverseArray(arr, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 6);

    return 0;
}
*/

//Array Reverse Stack (Non In-place):
//Time Complexity: O(n)
//Pushing and popping each element onto/from the stack requires linear time.
//Auxiliary Space Complexity: O(n)
//Additional space is used to store the stack.

#include <iostream>;
#include <stack>;
#include <vector>;
void reverseArrayUsingStack(int arr[], int size)
{
    std::stack<int> stack;

    // Push elements onto the stack
    for (int i = 0; i < size; i++) {
        stack.push(arr[i]);
    }

    // Pop elements from the stack to reverse the array
    for (int i = 0; i < size; i++) {
        arr[i] = stack.top();
        stack.pop();
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArrayUsingStack(arr, size);

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}





