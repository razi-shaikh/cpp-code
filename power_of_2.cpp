#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int user;
    cout<<"Enter any number :- ";
    cin>>user;
    long long int val=2;
    bool ans=false;
    for(int i=1;i<=30;i++)
    {
        val=pow(2,i);
        if(val==user)
        {
            ans=true;
            break;
        }
    }
    cout<<ans;
    return 0;
}