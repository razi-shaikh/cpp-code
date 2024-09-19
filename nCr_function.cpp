#include <iostream>
using namespace std;
int factorial(int a)
{
    int val=1;
    for (int i=a;i>=1;i--)
    {
        /* code */
    val=val*i;
    }
    return val;
    
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int deno=factorial(r)*(factorial(n-r));
    return num/deno;
}
int main()
{
    int n,r;
    cout<<"enter value of N :- ";
    cin>>n;
    cout<<"enter value of R :- ";
    cin>>r;
    cout<<"the value of given 'nCr' is "<<nCr(n,r);
    return 0;
}