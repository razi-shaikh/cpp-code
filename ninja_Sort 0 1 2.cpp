#include <iostream>
using namespace std;
int main()
{
    int arr[]={0,2,1,1,0,0,2,1,2,2,1,0,1,0,1,0,2,0,0,2,0,1,1};
    int low=0,mid=0,high=size(arr)-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }
    for (int i = 0; i < size(arr); i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}