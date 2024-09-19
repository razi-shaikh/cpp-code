#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{
    string str="My name is Razi.";
    // string rev;
    int start=0,end;
    for(int i=0;i<=str.length();i++)
    {
        while((isspace(str[i]))  || str[i]==NULL)
        {
            end=i-1;
            // cout<<"start is "<<start<<" end is "<<end<<endl;
            for(int i=start;start<=end;start++,end--)
            {
                swap(str[start],str[end]);
            }
            start=i+1;
            break;
        }
        // cout<<i<<endl;
    }
    cout<<str;
    return 0;
}