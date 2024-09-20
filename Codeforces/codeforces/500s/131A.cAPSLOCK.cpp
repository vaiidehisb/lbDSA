/*#include<iostream>
using namespace std;
string fixcapslock(string s){
    if(all_of(s.begin(),s.end(),::isupper)) {
        return string(s.size(),tolower(s[0]));
    }
    else if(isupper(s[0] && all_of(s.begin()+1,s.end(),::islower))) {
        s[0]=tolower(s[0]);
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    
    string corrects = fixcapslock(s);
    cout<<corrects<<endl;

}*/

#include<iostream>
using namespace std;
int main(){
   string s;
   cin>>s;
   bool cap1=true, cap2=true;
   if(s[0]>='a'){
    cap1=false;
   }
   for(int i=1; i<s.size(); i++){
     if(s[i]>='a'){
        cap2=false;
     }
   }

   if(cap1 && cap2) {
    for(int i=0; i<s.size(); i++){
        s[i]+=32;
    }
   }
   else if(cap1== false && cap2) {
    s[0]-=32;
    for(int i=0; i<s.size(); i++){
        s[i]+=32;
    }
    string output = s;
    cout <<output;
   }

   return 0;

}

