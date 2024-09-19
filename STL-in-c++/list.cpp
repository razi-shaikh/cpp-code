#include <iostream>
#include<list>
using namespace std;
void loop(list<int> arr,int s)
{
    for(int i:arr)
    {
        cout<<i<<" ";
    }
}
int main()
{
    list<int> a;
    list<int> b(5,3);
    list<int> c={1,2,3,4,5};

    cout<<"\n\nall element of list b is three by default"<<endl;
    loop(b,b.size());

    list<int> copy(b);
    cout<<"\n\nall element of list copy is"<<endl;
    loop(copy,copy.size());

    // adding element in list array
    a.push_back(1);

    a.push_back(2);

    a.push_back(3);

    a.push_back(4);

    a.push_front(5);

    cout<<"\nthe size of list is "<<a.size()<<endl;

    cout<<"\nfirst element is "<<a.front();
    cout<<"\nlast element is "<<a.back();
    cout<<"\narray element is empty or not "<<a.empty();

    cout<<"\n\nbefore erase :- ";
    loop(c,c.size());
    cout<<"\nafter erase :- ";
    c.erase(c.begin());
    loop(c,c.size());

    cout<<"\n\nprinting all element of list before pop_back"<<endl;
    loop(a,a.size());

    cout<<"\npinting all element of list after pop_back"<<endl;
    a.pop_back();
    loop(a,a.size());

    cout<<"\n\nprinting all element of list before pop_front"<<endl;
    loop(a,a.size());

    cout<<"\npinting all element of list after pop_front"<<endl;
    a.pop_front();
    loop(a,a.size());

    cout<<"\n\nbefore clear the size of list is "<<a.size()<<endl;
    a.clear();
    cout<<"\nafter clear the size of list is "<<a.size()<<endl;
    loop(a,a.size());
    return 0;
}