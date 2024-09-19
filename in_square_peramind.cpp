#include <iostream>
using namespace std;
int main()
{
    int user;
    cout<<"Enter number of rows :- ";
    cin>>user;
    for(int r=1;r<=user;r++)
    {
        // for(int c=user;c>=r;c--)
        for(int c=0;c<=user-r;c++)
        {
            cout<<c+1;
        }
        for(int c=1;c<r;c++)
        {
            cout<<"*";
        }
        for(int c=1;c<r;c++)
        {
            cout<<"*";
        }
        for(int c=user;c>=r;c--)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}