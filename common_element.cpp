// Intersection Of Two Sorted Arrays
// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149
#include <iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,8,9,9,9};
    int arr2[]={4,5,6,7,7,8,9,9};
    int n=sizeof(arr1)/sizeof(arr1[0]),m=sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    return 0;
}