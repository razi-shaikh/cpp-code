#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,string> m;
    //  map<float,string> m;
    m[1] = "one";
    m[-2] = "nagative two";
    m[3] = "three";
    m[1.1] = "decimal one";
    m[0]= "alphabate";

    cout<<"before erase\n";
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"\nafter erase\n";
    m.erase(1.1);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding element :- ";
    auto f=m.find(-2);
    for(auto i=f;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    // present or not
    cout<<"\nelement present or not :- "<<m.count(3);
    return 0;
}