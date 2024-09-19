#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,1,7,6,14,9};
    int n=size(arr);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}