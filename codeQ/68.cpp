//function that return sum , average and standard deviation 
#include <iostream> 
#include <cmath>
using namespace std; 
void stats(int *sum, int *avg, double *stdev);

int main() { 
    int sum, avg;
    double stdev;
    stats (&sum, &avg , &stdev); //function call by reference
    cout << "sum =" << sum <<endl<< "average = " << avg <<endl << "standard deviation ="<< stdev<<endl;
    return 0;  
    
} 
void stats( int *sum, int *avg, double *stdev) {
    int n1, n2, n3, n4, n5; 
    cout << "enter five number" <<endl; 
    cin >> n1 >>n2>>n3>>n4>>n5;
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *stdev = sqrt((pow((n1-*avg),2.0)+pow ((n2-*avg),2.0)+ pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);


}
