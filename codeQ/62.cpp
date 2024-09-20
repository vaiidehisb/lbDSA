#include <iostream>
using namespace std;
int main() {
    int cl, sub;
    cout << "enter the class amd number of subject failed"<<endl;
    cin>>cl,sub;

    switch (cl)
    {
        case 1:
        if (sub<=3) 
        cout << "he got grace of marks "<<s*sub<<endl;
        else 
        cout << "he didnt got any grace "<<endl;
        break;

        case 2: 
        if (sub<=2)
        cout <<"he got grace of marks" <<5*sub<<endl;
        else  
        cout << "he didnt got any grace"<<endl;
        break;

        case 3:
        if (sub<1) 
         cout << "he got grace of marks" <<5*sub<<endl;
         else 
         cout <<"he didnt got any grace"<<endl;
         break;
    }
}
