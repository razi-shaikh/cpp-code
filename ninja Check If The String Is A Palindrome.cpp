#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char ch[]="race a car";
    int i=0,j=size(ch)-2;
    cout<<j<<endl;
    bool ans=true;
    while(i<=j)
    {
        if((isalnum(ch[i])) && (isalnum(ch[j])))
        {
            if(isupper(ch[i]))
            {
                ch[i]=ch[i]-'A'+'a';
            }
            if(isupper(ch[j]))
            {
                ch[j]=ch[j]-'A'+'a';
            }
            // Best alternative of above code
            // if((isupper(ch[i])) || (isupper(ch[j])))
            // {
            //     ch[i]=tolower(ch[i]);
            //     ch[j]=tolower(ch[j]);
            // }
            if(ch[i]!=ch[j])
            {
                ans=false;
                break;
            }
            i++;
            j--;
        }
        else if(false==(isalnum(ch[i])))
        {
            i++;
        }
        else if(false==(isalnum(ch[j])))
        {
            j--;
        }
    }
    if(ans==true)
    cout<<"String '"<<ch<<"' is a Palidrome";
    else
    cout<<"String '"<<ch<<"' is not a Palidrome";
    return 0;
}