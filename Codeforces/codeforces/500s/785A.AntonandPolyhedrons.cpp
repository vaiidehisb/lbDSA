#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    string desk[num];
    
    for(int i=0; i<num; i++){
        cin>>desk[i];
    }

    int sum=0;
    for(int i=0; i<num; i++){
        if(desk[i] == "Tetrahedron")
        sum += 4;
        else if(desk[i] == "Cube")
            sum += 6;
        else if(desk[i] == "Octahedron") 
            sum += 8;
        else if(desk[i] == "Dodecahedron")
            sum += 12;
        else if(desk[i] == "Icosahedron") 
            sum += 20;
    }
    cout << sum; 
    return 0;
    }
