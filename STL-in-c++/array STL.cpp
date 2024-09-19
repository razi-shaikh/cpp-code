#include <iostream>
using namespace std;
#include <array>
int main()
{
    int basic[]={1,2,3};
    array<int,3> arr={1,2,3};
    arr[0]=5;
    arr[3]=4;
    arr[4]=7;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\nfirst element is "<<arr.front();
    cout<<"\nlast element is "<<arr.back();
    cout<<"\narray element is "<<arr.empty();
    cout<<"\narray element at index is "<<arr.at(2);
    return 0;
}