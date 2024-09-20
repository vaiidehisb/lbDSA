#include <iostream>
using namespace std;
int main() {
    int i, w,h, t; 
    
    cin >> w>>h;  
    cout<< "weight and height is"<< endl; 
    if (w<h);
    {
        int p;
        p=w;
        w=h;
        h=p;
    }
    for (i=0; i<9; i++) 
    { cout << "i, w, h "  << i<<"  "<< w <<"  "<< h <<"  "<<endl;
    t = w;
        w = h;
        h = t/2; 
    
    }  

    
        


    
 return 0;
}
    