#include<iostream>
using namespace std;

void num(string arr[],int n){
    if(n==0)
        return ;
    
    int k=n%10;
        n=n/10;
    num(arr,n);
    cout<<arr[k]<<" ";
    
}

int main(){
    string arr[10]={"Zero","one","two","three","four",
    "five","six","Seven","Eight", "Nine"};
   int n;
   cin>>n;
   num(arr,n);
   return 0;
}

/*#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}*/