#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    string str="tree";
    int alpha[26]={0},index=0,ans=0,maxi=-1;
    char ch;
    for(int i=0;i<str.length();i++)
    {
        // converting uppercase to lowercase
        if(isupper(str[i]))
        str[i]=tolower(str[i]);

        index=str[i]-97;
        alpha[index]+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(maxi<alpha[i])
        {
            ans=i;
            maxi=alpha[i];
        }
    }
    ch=ans+97;
    cout<<ch;
    return 0;
}