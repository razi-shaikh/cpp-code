#include <iostream>
using namespace std;
int main()
{
    int arr[]={12,14,16,19,2,4,6,8,10};
    int n=size(arr);
    int left=0,right = n-1;
    int user,ans=-1;
    cout<<"Enter any key :- ";
    cin>>user;
    // founding center
    while(left<right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]<arr[right])
        {
            right=mid;
        }
        else if(arr[mid]>=arr[left])
        {
            left=mid+1;
        }
    }
    int min=right;
    // {
    //     cout<<"right side start value is "<<arr[min]<<endl;
    //     cout<<"right side end value is "<<arr[n-1]<<endl;
    //     cout<<"user value is "<<user<<endl;
    //     cout<<"left side start value is "<<arr[0]<<endl;
    //     cout<<"left side end value is "<<arr[min-1]<<endl;
    // }
    // Founding side
    if(user>=arr[min] && user<=arr[n-1])
    {
        // cout<<"right side";
        left=min;
        right=n-1;
    }
    else if(user>=arr[0] && user<=arr[min-1])
    {
        // cout<<"left side";
        left=0;
        right=min-1;
    }
    // founding value
    while(left<=right)
    {
        // {12,14,16,18,20};
        int mid=left+(right-left)/2;
        if(arr[mid]==user)
        {
            ans=mid;
            break;
        }
        else if(user>arr[mid])
        {
            left=mid+1;
        }
        else if(user<arr[mid])
        {
            right=mid-1;
        }
    }
    if(ans!=-1)
    {
        cout<<"position is "<<ans<<" and value is "<<arr[ans];
    }
    else if(ans==-1)
    {
        cout<<"not found";
    }
    return 0;
}