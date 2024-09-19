#include <iostream>
using namespace std;
bool allocate(int arr[],int n,int m,int mid)
{
    int painter=1,time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painter++;
            if(arr[i]>mid || painter>m){
                return false;
            }
            time=arr[i];
        }
    }
    return true;
}
int main()
{
    int arr[]={10,20,30};
    int ans=-1,m=2;
    int sum=0,n=size(arr);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int start=0,end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(allocate(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<"the answer is "<<ans;
    return 0;
}