#include <iostream>
using namespace std;
int main()
{
    int user;
    cout<<"Enter any number :- ";
    cin>>user;
    int i=0;
    while(i*i<=user)
    {
        i++;
    }
    i=i-1;
    if(i*i==user)
    cout<<"Perfect Square root of "<<user<<" is "<<i;
    else
    cout<<"Square root of "<<user<<" is "<<i<<"._ _";
    return 0;
}