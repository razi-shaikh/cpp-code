#include <iostream>
using namespace std;
int main()
{   
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8};
    int s1=size(arr1),s2=size(arr2);
    int h,l;
    int arr3[1];
    int x=0;
    for(int i=0;i<s1+s2;i++)
    {
        arr3[i]=arr1[i];
        if(i>=s1)
        {
            arr3[i]=arr2[x];
            x++;
        }
    }

    for(int i=0;i<s1+s2;i++)
    {
        cout<<arr3[i]<<"  ";
    }
    return 0;
}