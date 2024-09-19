#include <iostream>
#include<deque>
using namespace std;
void loop(deque<int> arr,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    deque<int> a;
    deque<int> b(5,3);
    deque<int> c={1,2,3,4,5};

    cout<<"\n\nall element of deque b is three by default"<<endl;
    loop(b,b.size());

    deque<int> copy(b);
    cout<<"\n\nall element of deque copy is"<<endl;
    loop(copy,copy.size());

    // adding element in deque array
    a.push_back(1);

    a.push_back(2);

    a.push_back(3);

    a.push_back(4);

    a.push_front(5);

    cout<<"\nthe size of deque is "<<a.size()<<endl;

    cout<<"\nfirst element is "<<a.front();
    cout<<"\nlast element is "<<a.back();
    cout<<"\narray element is empty or not "<<a.empty();
    cout<<"\narray element at index is "<<a.at(1);

    cout<<"\n\nbefore erase :- ";
    loop(c,c.size());
    cout<<"\nafter erase :- ";
    c.erase(c.begin(),c.begin()+3);
    loop(c,c.size());

    cout<<"\n\nprinting all element of deque before pop_back"<<endl;
    loop(a,a.size());

    cout<<"\npinting all element of deque after pop_back"<<endl;
    a.pop_back();
    loop(a,a.size());

    cout<<"\n\nprinting all element of deque before pop_front"<<endl;
    loop(a,a.size());

    cout<<"\npinting all element of deque after pop_front"<<endl;
    a.pop_front();
    loop(a,a.size());

    cout<<"\n\nbefore clear the size of deque is "<<a.size()<<endl;
    a.clear();
    cout<<"\nafter clear the size of deque is "<<a.size()<<endl;
    loop(a,a.size());
    return 0;
}