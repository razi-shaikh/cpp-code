#include <iostream>
using namespace std;
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int m,s=size(arr)-1;
    cout<<"Enter any number :- ";
    cin>>m;
    int i=m,j=s;
    int mid=i+(j-i)/2;
    for(;i<=mid;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
    /*void reverseArray(vector<int> &arr , int m){
    // Write your code here
    int s=arr.size();
    int i=m+1,j=s-1;
    while(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}*/
}