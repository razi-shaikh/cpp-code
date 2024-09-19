#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,1,0,1,1,1,1,0,1,0,1,0,0,0,0,1,0,1,1};
    for (int i=0,j=size(arr)-1;i<=j;)
    {
        // cout<<j;
        if(arr[i]==0 && arr[j]==1)
        {
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
        else if(arr[i]==1 && arr[j]==1)
        {
            j--;
        }
        else if(arr[i]==0 && arr[j]==0)
        {
            i++;
        }
    }
    for (int i = 0; i < size(arr); i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}