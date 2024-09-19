#include <iostream>
using namespace std;
int main()
{
    int array[]={2,3,4,6,2,3,4};
    int ans=0;
    for(int i=0;i<7;i++)
    {
        ans=ans^array[i];
    }
    cout<<ans;
    return 0;
}