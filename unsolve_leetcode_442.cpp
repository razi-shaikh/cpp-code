#include <iostream>
using namespace std;
int main()
{
    int nums[]={1,2,3,4,5,6,3,6};
    int size=sizeof(nums)/sizeof(nums[0]);
    int count=0,ans[size];
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(nums[i]==nums[j])
            {
                ans[count]=nums[i];
                count++;
            }
        }
    }
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
    return 0;
}