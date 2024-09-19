#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any number :- ";
    cin>>x;
    int low=1,high=x,ans=1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int sqr=mid*mid;
        if(sqr==x)
        {
            ans=mid;
            break;
        }
        else if(sqr<x)
        {
            low=mid+1;
            ans=mid;
        }
        else// if(sqr>x)
        {
            high=mid-1;
        }
    }
    cout<<"Square root of given value is "<<ans;
    return 0;
}