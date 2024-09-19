#include <iostream>
using namespace std;
int pgreat(int arr[],int n)
{
    int s=0,e=n-1;
    // {4, 5, 6, 7, 0, 1, 2};
    // {5, 6, 7, 8, 2, 3 ,4};
    // {10, 2, 4, 6, 8, 7, 9};
    while(s<e)
    {
        int m=s+(e-s)/2;
        if(arr[m]>arr[m+1])
        {
            return arr[m];
        }
        else if(arr[m]>arr[e])
        {
            e=m+1;
        }
        else if(arr[m]<arr[e])
        {
            e=m;
        }
    }
}
int main()
{
    int arr[]={10, 2, 4, 6, 8, 7, 9};
    int arr1[]={4, 5, 6, 7, 0, 1, 2};
    int arr2[]={5, 6, 7, 8, 2, 3 ,4};
    int arr3[]={10, 2, 4, 6, 8, 7, 9};
    int n=size(arr);
    cout<<"greatest number is "<<pgreat(arr,n)<<endl;
    cout<<"greatest number is "<<pgreat(arr1,n)<<endl;
    cout<<"greatest number is "<<pgreat(arr2,n)<<endl;
    cout<<"greatest number is "<<pgreat(arr3,n)<<endl;
    return 0;
}