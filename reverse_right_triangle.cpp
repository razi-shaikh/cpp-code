#include <iostream>
using namespace std;
int main()
{
    int user,c,r;
    cout<<"Enter number of row :- ";
    cin>>user;
    for(r=1;r<=user;r++)
    {
        for(c=1;c<=user;c++)
        {
            if(r-1>=c)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
            cout<<endl;
    }
    return 0;
}