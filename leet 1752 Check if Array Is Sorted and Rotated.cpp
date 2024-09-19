#include <iostream>
using namespace std;
bool check(int nums[],int n)
{
    int pair=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i-1]>nums[i])
        {
            pair++;
        }
    }
    if(nums[0]<nums[n-1])
    {
        pair++;
    }
    if (pair<=1)
    return true;
    else 
    return false;
}
int main()
{
    int nums1[]={1,2,3,4,5,6,7,8,9};
    int nums2[]={9,1,2,3,4,5,6};
    int nums3[]={9,1,2,3,4,11,6,12};
    int nums4[]={3,4,5,1,6};

    cout<<"nums1[] = True Or False :- "<<check(nums1,size(nums1))<<endl;
    cout<<"nums2[] = True Or False :- "<<check(nums2,size(nums2))<<endl;
    cout<<"nums3[] = True Or False :- "<<check(nums3,size(nums3))<<endl;
    cout<<"nums4[] = True Or False :- "<<check(nums4,size(nums4))<<endl;
    return 0;
}