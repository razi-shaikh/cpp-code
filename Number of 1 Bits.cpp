#include <iostream>
using namespace std;
int main()
{
    int user,bin,count=0;
    cout<<"enter any number : ";
    cin>>user;
    while(user>0)
    {
        bin=user%2;
        if(bin==1)
        count++;
        user=user/2;
    }
    cout<<"number of n is "<<count;
    return 0;
}