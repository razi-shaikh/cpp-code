// Pair Sum
// https://www.codingninjas.com/studio/problems/pair-sum_1171154
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,-4,5,6,7,8,9};
    int target=5;
    for(int i=0;i<size(arr);i++)
    {
        for(int j=i+1;j<size(arr);j++)
        {
            for(int k=j+1;k<size(arr);k++)
            {
                if((arr[i]+arr[j]+arr[k])==target)
                {
                    cout<<" (i,j,k) = ( "<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<" )\n";
                }
            }
        }
    }
    return 0;
}