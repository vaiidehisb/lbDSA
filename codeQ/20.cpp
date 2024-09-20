#include<iostream>
using namespace std;

int main()
{
    int r, s, a;
    cout<<"Enter the ages of the children"<<endl;
    cin>>r>>a>>s;
    if (r<=s&&r<=a)
    {
        cout<<"ram is the youngest"<<endl;
    }
    else if (s<=a&&s<=r)
    {
        cout<<"Sham is the youngest"<<endl;
    }
    else
    {
        cout<<"Ajay is the youngest";
    }
    return 0;
}