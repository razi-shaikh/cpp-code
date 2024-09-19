// 1047. Remove All Adjacent Duplicates In String
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s="azxxzy";
    int i=0;
    while(i<s.length())
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            i=0;
        }
        else
        i++;
    }
    cout<<s;
    return 0;
}