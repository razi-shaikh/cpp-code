// leet 443 String Compression
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char chars[]={'a','a','a','b','c','c','c','c','c','c','c','c','c','c','c','c'};
    int s=size(chars),i=0;
    int index=0;
    while(i<s)
    {
        int j=i+1,count;
        while(j<s && chars[i]==chars[j])
        {
            j++;
        }
        chars[index]=chars[i];
        index++;
        count=j-i;
        if(count>1)
        {
            string numchar = to_string(count);
            for(int x=0;x<size(numchar);x++)
            {
                chars[index]=numchar[x];
                index++;
            }
        }
        i=j;
    }
    cout<<chars<<"   "<<index;
    return 0;
}