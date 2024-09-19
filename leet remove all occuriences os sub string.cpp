#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{
    string str1="axxxxyyyyb";
    string str2="ab";
    // bool check=true;
        cout<<str1.find(str2)<<endl;
    while((str1.find(str2))!=-1)
    {
        str1.erase(str1.find(str2),str2.length());
    }
    // int found=str1.find(str2);
    cout<<str1;
    cout<<endl;
    return 0;
}