// Pair Sum
// https://www.codingninjas.com/studio/problems/pair-sum_1171154
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,-4,5,6,7,8,9};
    int i,j,target=5;
    for(i=0;i<size(arr);i++)
    {
        for(j=i+1;j<size(arr);j++)
        {
            if((arr[i]+arr[j])==target)
            {
                cout<<" (i,j) = ( "<<arr[i]<<" , "<<arr[j]<<" )\n";
            }
        }
    }
    return 0;
}