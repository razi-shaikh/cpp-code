#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,11,12,2,3,4,15};
    // int arr[]={16,18,19,3,4,6};
    int n=size(arr);
    int s=0,e=n-1;
    while(s<e)
    {
        int m=s+(e-s)/2;
        if(arr[m]>=arr[0])
        {
            s=m+1;
        }
        else// if(arr[m]<arr[e])
        {
            e=m;
        }
    }
    cout<<s;
    return 0;
}