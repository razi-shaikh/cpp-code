#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int main()
{
    string str="My name is Razi";
    // str.erase(2,1);
    for(int i=0;i<str.length();i++)
    {
        // if(str[i]==' ')
        if(isspace(str[i]))
        {
            str.erase(i,1);
            str.insert(i,"@40");
        }
    }
    cout<<str;
    return 0;
}


// #include <iostream>
// #include <ctype.h>
// using namespace std;
// int main()
// {
//     string str,temp;
//     cout<<"Enter any String : ";
//     getline(cin,str);
//     for(int i=0;i<str.length();i++)
//     {
//         if(isspace(str[i]))
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     cout<<temp;
//     return 0;
// }