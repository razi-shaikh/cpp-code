#include <iostream>
using namespace std;
int main()
{
    int user,c,r;
    cout<<"Enter number of row :- ";
    cin>>user;
    for(r=1;r<=user;r++)
    {
        for(c=user-r+1;c>=1;c--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}