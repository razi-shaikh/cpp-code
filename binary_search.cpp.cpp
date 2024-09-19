#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,12,16};
    int key,s=size(arr);
    cout<<"Enter any number :- ";
    cin>>key;
    int srt=0,end=s-1;
    int mid;
    int found=-1;
    while(srt<=end)
    {
        mid=srt/2+end/2;
        if(arr[mid]==key)
        {
            found=mid;
            break;
        }
        else if(key>arr[mid])
        {
            srt=mid+1;
        }
        else if(key<arr[mid])
        {
            end=mid-1;
        }
    }
    if(found!=-1)
    {
        cout<<"the index value is "<<found;
    }
    else
    {
        cout<<"value not found "<<found;
    }
    return 0;
}