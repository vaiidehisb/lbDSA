/*#include<iostream>
#include<string>
using namespace std;

int main () {
    string s[5]={1,1,3,1,3}; 
    for (int i=0; i<n-1; i++) {
        int minindex =i;
        for (int j=i+1; j<n; j++) {
            if(s[j]<s[minindex]){
                minindex=j;
            } swap(s[minindex],s[j])
        }
    } return 0;
}*/

/*#include<iostream>
#include<string>
using namespace std;

int main () {
    // Array of strings should be initialized with strings, not integers
    string s[9]={"1","+","1","+","3","+","1","+","3"};
    int n = 9; // You need to define the size of the array

    // Bubble sort implementation
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            // Compare strings using the compare function
            if (s[j].compare(s[minindex]) < 0) {
                minindex = j;
            }  
           
        }
        // Swap the elements outside the inner loop
        swap(s[minindex], s[i]);
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}*/ 

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[1001];
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='+'){
	        continue;
	    }else{
	        arr[count++]=s[i]-'0';
	    }
	}
	sort(arr,arr+count);
	for(int i=0;i<count;i++){
	    cout<<arr[i];
	    if(i==count-1){
	        break;
	    }
	    cout<<"+";
	}
	return 0;
}
