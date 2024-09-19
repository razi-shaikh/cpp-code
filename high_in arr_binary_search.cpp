#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,2,1};
    int n=size(arr);
    int s=0,e=n-1;
    while(s<e)
    {
        int m=s+(e-s)/2;
        if(arr[m+1]>arr[m])
        {
            s=m+1;
        }
        else //if(arr[m-1]>arr[m])
        {
            e=m;
        }
    }
    cout<<"greater number is "<<arr[s];
    return 0;
}