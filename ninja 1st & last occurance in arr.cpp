#include <iostream>
using namespace std;
int first(int arr[],int n,int key)
{
    int srt=0,end=n-1;
    int mid;
    int ans=-1;
    while(srt<=end)
    {
        mid=srt+(end-srt)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            srt=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        // mid=srt+(end-srt)/2;
    }
    return ans;
}

int last(int arr[],int n,int key)
{
    int srt=0,end=n-1;
    int mid;
    int ans=-1;
    while(srt<=end)
    {
        mid=srt+(end-srt)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            srt=mid+1;
        }
        else if(key>arr[mid])
        {
            srt=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
        // mid=srt+(end-srt)/2;
    }
    return ans;
}
int main()
{
    int key;
    cout<<"Enter any number :- ";
    cin>>key;
    int arr[]={1,1,1,2,2,2,2,2,2,2,2,3,4,5,5,5,5,7};
    int n=size(arr);
    cout<<"\nThe First Occurrence is "<<first(arr,n,key);
    cout<<"\n\nThe Last Occurrence is "<<last(arr,n,key);
    return 0;
}