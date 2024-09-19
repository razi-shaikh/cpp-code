#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b(5,3);
    cout<<"\n\nall element of vector b is one"<<endl;
    for(int i:b)//(int i=0;i<b.size();i++)
    {
        cout<<i<<" ";
    }

    vector<int> copy(b);
    cout<<"\n\nall element of vector copy is"<<endl;
    for(int j:copy)//(int i=0;i<b.size();i++)
    {
        cout<<j<<" ";
    }

    cout<<"\n\nthe capacity of vector is "<<a.capacity()<<endl;

    // adding element in vector array
    a.push_back(1);
    cout<<"the capacity of vector is "<<a.capacity()<<endl;

    a.push_back(2);
    cout<<"the capacity of vector is "<<a.capacity()<<endl;

    a.push_back(3);
    cout<<"the capacity of vector is "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"the capacity of vector is "<<a.capacity()<<endl;

    a.push_back(5);
    cout<<"the capacity of vector is "<<a.capacity()<<endl;
    
    cout<<"the size of vector is "<<a.size()<<endl;

    cout<<"\nfirst element is "<<a.front();
    cout<<"\nlast element is "<<a.back();
    cout<<"\narray element is "<<a.empty();
    cout<<"\narray element at index is "<<a.at(1);

    cout<<"\n\npinting all element of vector before pop_back"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\npinting all element of vector after pop_back"<<endl;
    a.pop_back();
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n\nbefore clear the size of vector is "<<a.size()<<endl;
    a.clear();
    cout<<"\n\after clear the size of vector is "<<a.size()<<endl;
    return 0;
}