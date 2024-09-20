#include <iostream>
using namespace std;
int main() { 
    int choice, num,i, fact;
    while (1) {
        cout << " 1. factorial "<<endl; 
        cout << "2. prime "<<endl;
        cout << "3. odd/even "<<endl;
        cout << "4. exit "<<endl;
        cout << "you choice?"<<endl; 
        cin>>choice; 
        switch (choice)
        { case 1:
          cout << " enter number" <<endl;
          cin>>num;
          fact =1;
          for (i=1; 1<=num; i++) {
              fact = fact * i;
              cout << "factorial value"<<fact;
              break; 

              case 2:
               cout <<"enter the number"<<endl;
               cin>>num;
               for (i=2; i<num; i++) {
                   if (num%i==0) {
                       cout <<"not a prime number " <<endl;
                   } 
                   break;
               }  }
               if (i==num) 
               cout << "prime number" <<endl;
               break; 

               case 3:
               cout << "enter number "<<endl;
               cin>>num;
               if (num%2==0) 
               cout << "even number "<<endl;
               else {
                   cout <<"odd number"<<endl;
               }  
          
          case 4:
          exit (0);
          default:
          cout <<"wrong choice ";

        }

    } return 0;
    } 
    
