#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int bit,digit,num=0;
    cout<<"Enter any bits : ";
    cin>>bit;
    for(int i=0;bit!=0;i++)
    {
        digit=bit%10;
        if(digit==1)
        {
            num=num+(pow(2,i));
        }
        bit=bit/10;
    }
    cout<<"Decimal of given number is "<<num;
    return 0;
}