#include <iostream>
using namespace std;
int main() {
   int a,b;
   cout << "enter the number a and b"<<endl;
   cin>>a>>b; 

   char op;
   cout <<"enter the operator "<<endl;
   cin>>op;

   switch(op) {
     case '+' :  cout << (a+b)<<endl;
                break;
     case '-' : cout << (a-b) <<endl;
                break;
     case '*': cout << (a*b) <<endl;
                break;
     case '/': cout << (a/b) <<endl;
                break;
} } 

/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the numbers a and b: " << endl;
    cin >> a >> b;

    char op; // Use char to read the operator as a character
    cout << "Enter the operator: " << endl;
    cin >> op;

    switch (op) {
        case '+':
            cout << (a + b) << endl;
            break;
        case '-':
            cout << (a - b) << endl;
            break;
        case '*':
            cout << (a * b) << endl;
            break;
        case '/':
            if (b != 0) {
                cout << (a / b) << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        default:
          cout << "Error: Invalid operator." << endl;
    }

    return 0;
}*?/

