#include <iostream>
using namespace std;
int main()
{
    int user,r,c;
    cout<<"Enter number of rows :- ";
    cin>>user;
    for (r=1;r<=user;r++)
    {
        // space
        for (int space=1;space<=user-r;space++)
        {
            cout<<" ";
        }
        // left triangle
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        // right triangle
        for(c=r-1;c>=1;c--)
        {
            cout<<c;
        }
        cout<<endl;
        
    }
    
    return 0;
}