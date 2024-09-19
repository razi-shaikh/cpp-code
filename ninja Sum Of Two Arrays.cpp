#include <iostream>
using namespace std;
int main()
{
    int a[]={9,8};
    int b[]={1,1,4};
    int m=size(a),n=size(b);
    int sumA=0,sumB=0,sumC;
    for(int i=0;i<m;i++)
    {
        sumA=sumA*10;
        sumA=sumA+a[i];
    }
    for(int i=0;i<n;i++)
    {
        sumB=sumB*10;
        sumB=sumB+b[i];
    }
    sumC=sumA+sumB;
    cout<<sumC<<endl;
    int i,copy=sumC;
    for(i=0;copy!=0;i++)
    {
        copy=copy/10;
    }
    copy=i;
    int c[copy];
    for(int i=0;i<copy;i++)
    {
        int rem=sumC%10;
        c[i]=rem;
        sumC=sumC/10;
    }
    for(int i=0;i<copy;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl<<copy<<endl;
    for(int i=0,j=copy-1;i<=j;i++,j--)
    {
        // cout<<c[j]<<" ";
        swap(c[i],c[j]);
    }
    for(int i=0;i<copy;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}











#include <bits/stdc++.h> 
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
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
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