#include <iostream>
using namespace std;
int setbit(int x)
{
    int m,count=0;
    while(x!=0)
    {
        m=x&1;
        if(m==1)
        {
            count++;
        }
        x=x>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cout<<"Enter any number (A) :- ";
    cin>>a;
    cout<<"Enter any number (B) :- ";
    cin>>b;
    cout<<setbit(a)+setbit(b);
    return 0;
}