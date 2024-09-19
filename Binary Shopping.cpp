#include <iostream>
#include <vector>
using namespace std;
string binaryshopping(string s,int p)
{
	// Write your code here.
    int a=s.size(),count=0;
    for(int i=a-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            if(count<2)
            {
                count++;
                s[i]='0';
            }
        }
    }
    return s;
}
int main()
{
    string s="1";
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }cout<<endl;
    s=binaryshopping(s,p);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}