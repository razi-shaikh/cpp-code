// leetcode 567. Permutation in String
#include <iostream>
#include <string.h>
using namespace std;
bool checkEqual(int count1[26],int count2[26])
{
    for(int i=0;i<26;i++)
    {
        if(count1[i]!=count2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1="abc",s2="dabcd";
    int count1[26]={0},count2[26]={0};
    int l1=s1.length(),l2=s2.length();
    bool ans;
    for(int i=0;i<l1;i++)
    {
        int index=s1[i]-'a';
        count1[index]+=1;
    }
    int i=0;
    while(i<l1 && i<l2)
    {
        int index=s2[i]-97;
        count2[index]+=1;
        i++;
    }
    if(checkEqual(count1,count2))
    {
        ans = true;
    }
    while (i<l2)
    {
        // new char
        int index=s2[i]-'a';
        count2[index]++;
        // old char
        index=s2[i-l1]-'a';
        count2[index]--;
        
        i++; 
        if(checkEqual(count1,count2))
        {
            ans = true;
            break;
        }
    }
    ans = false;
    if(ans == true)
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not Present";
    }
}