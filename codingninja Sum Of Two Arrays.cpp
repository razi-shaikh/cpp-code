#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> x)
{
    int s=0,e=x.size()-1;
        while (s<=e)
        {
            swap(x[s],x[e]);
            s++;
            e--;
        }
        return x;
}
vector<int> findArraySum(vector<int> a, int n, vector<int> b, int m) {
	// Write your code here.
    vector<int> x;
    int carry=0,sum=0,ans=0;
    int i=n-1,j=m-1;
    while(i>=0 && j>=0)
    {
        sum=a[i]+b[j]+carry;
        carry=sum/10;
        ans=sum%10;
        x.push_back(ans);
        i--;
        j--;
    }
    while(i>=0)
    {
        sum=a[i]+carry;
        carry=sum/10;
        ans=sum%10;
        x.push_back(ans);
        i--;
    }
    while (j>=0)
    {
        sum=b[j]+carry;
        carry=sum/10;
        ans=sum%10;
        x.push_back(ans);
        j--;
    }
    // cout<<carry<<endl;
    if(carry!=0)
    {
        // cout<<carry<<endl;
        x.push_back(carry);
    }
    return reverse(x);
}
int main()
{
    vector<int> a={9,8};
    vector<int> b={1,1,4};
    vector<int> x;
    int n=a.size(),m=b.size();
    x=findArraySum(a,n,b,m);
    for (int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    
    return 0;
}