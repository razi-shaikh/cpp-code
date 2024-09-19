#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,3,6};
    int n;
    n=sizeof(arr)/4;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
                // exit(0);
            }
        }
    }
    return 0;
}