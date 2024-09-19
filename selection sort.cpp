#include <iostream>
using namespace std;
int main()
{
    int arr[]={7,6,5,1,2,3,4,9,8};
    int n=size(arr);
    
    // first way 
    // sort(arr.begin(),arr.end());

    // second way
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}