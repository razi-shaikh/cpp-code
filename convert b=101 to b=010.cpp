#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int value;
    if (n==0)
    value=1;
    else
    {
        int copy=n,i=0,mask=0;
        while(copy!=0)
        {
            copy=copy>>1;
            i++;
        }
        while(i!=0)
        {
            mask=(mask<<1)|1;
            i--;
        }
        n=~n;
        value=n&mask;
    }

    cout<<"reverse value is "<<value;
    return 0;
}