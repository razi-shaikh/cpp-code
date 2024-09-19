#include <iostream>
using namespace std;
int main()
{
    int user,bin;
    cout<<"enter any number : ";
    cin>>user;
    cout<<"Binary number is : ";
    while(user>0)
    {
        bin=user%2;
        cout<<bin;
        user/=2;
    }
    // while(user!=0)
    // {
    //     if(user&1)
    //     count++;

    //     user=user>>1;
    // }
    // cout<<"number of n is "<<count;
}