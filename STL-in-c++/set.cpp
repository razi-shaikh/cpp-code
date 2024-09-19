#include <iostream>
#include<set>
using namespace std;
void loop(int s,set<int> arr)
{
    for(int i:arr)
    {
        cout<<i<<"  ";
    }
    cout<<endl;
}
int main()
{
    set<int> a;
    a.insert(6);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(1);
    a.insert(-2);
    a.insert(6);
    cout<<"All the element of set is\n";
    loop(a.size(),a);

    cout<<"check number is present or not :- ";
    int y;cin>>y;
    cout<<"present or not :- "<<a.count(y)<<endl;
    
    cout<<"Find element in set :- "<<endl;
    set<int>::iterator f=a.find(y);
    cout<<"present at :- "<<*f<<endl;
    
    set<int>::iterator x=a.begin();
    x++;
    cout<<"erase first element\n";
    a.erase(x);
    loop(a.size(),a);
    return 0;
}