#include <iostream>
using namespace std;
int pres(int x,int p,int ans)
{
    double fact=1;
    double sol=ans;
    for(int i=0;i<p;i++)
    {
        fact=fact/10;
        for(double j=ans;j*j<x;j=j+fact)
        {
            sol=j;
            // cout<<sol;
        }
    }
    cout<<"Square root of given value in float "<<sol;
}
int main()
{
    int x;
    cout<<"Enter any number :- ";
    cin>>x;
    int low=1,high=x;
    float ans=1;
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
    cout<<"Square root of given value is "<<ans<<endl;
    pres(x,3,ans);
    return 0;
}