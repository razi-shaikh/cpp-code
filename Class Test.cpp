#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int test(int n,vector<int> a, int k)
{
	// Write your code here.
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int ans=a[n-k-1];
    cout<<endl<<a[n-k];
    return ans;
}
int main()
{
    vector<int> a={20,9};
    int n=a.size(),k=1;
    test(n,a,k);
    return 0;
}