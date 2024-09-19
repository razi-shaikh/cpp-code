#include <iostream>
using namespace std;
int main()
{
    int user,i,check=0;
    cout<<"Enter any number :- ";
    cin>>user;
    i=2;
    while(i<=user/2)
    {
        if(user%i==0)
        {
            cout<<"It's not a prime number";
            check=1;
            break;
        }
        i++;
    }
    if(check==0)
    {
        cout<<"It's a prime number";
    }
    
    return 0;
}