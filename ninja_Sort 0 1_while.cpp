#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,1,0,1,0,0,1,0,1};
    int left=0,right=size(arr)-1;
    while(left < right )
    {
        while(arr[left]==0)
        {
            left++;
        }
        while(arr[right]==1)
        {
            right--;
        }
        if(left < right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for (int i = 0; i < size(arr); i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}