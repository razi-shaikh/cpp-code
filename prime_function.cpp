#include <iostream>
using namespace std;
int prime(int a)
{
    for(int i=1;i<=a/2;i++)
    {
        int b=i*i;
        if(a==b)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    bool check=prime(x);
    cout<<check;
    return 0;
}