#include <iostream>
#include <math.h>
using namespace std;
int power()
{
    int a,b,ans=0;
    cout<<"Enter any number : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    // for(int i=1;i<=b;i++)
    // {
    //     a=a*i;
    // }
    return ans=pow(a,b);
}
int main()
{
    int answer=power();
    cout<<"The power of given value is "<<answer;
    return 0;
}