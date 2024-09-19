#include <iostream>
using namespace std;
bool allocate(int arr[],int mid,int NoOfBook,int student)
{
    int pagesum=0,studentCount=1;
    for(int i=0;i<NoOfBook;i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum+=arr[i];
        }
        else
        {
            studentCount++;
            if(arr[i]>mid || studentCount>student)
            {
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[]={10,20,30};
    int student=2;

    int NoOfBook=size(arr);

    int sum=0,start=0;
    for(int i=0;i<NoOfBook;i++)
    {
        sum+=arr[i];
    }
    int ans=-1;
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(allocate(arr,mid,NoOfBook,student))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<"the answer is "<<ans;
    return 0;
}