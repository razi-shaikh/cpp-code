#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
void loop(int s,array<int,10> arr)
{
    for(int i:arr)
    {
        cout<<i<<"  ";
    }
    cout<<endl<<endl;
}
int main()
{
    array<int,10> arr={1,2,3,4,5,9,8,7,6,0};
    int s=arr.size();
    cout<<"Original unsorted array\n";
    loop(s,arr);

    cout<<"rotated array\n";
    rotate(arr.begin(),arr.begin()+2,arr.end());
    loop(s,arr);

    cout<<"Sortted array\n";
    sort(arr.begin(),arr.end());
    loop(s,arr);

    cout<<"reverse array\n";int m=5;
    reverse(arr.begin()+m,arr.end());
    loop(s,arr);

    cout<<"Finding element :- "<<binary_search(arr.begin(),arr.end(),5)<<endl<<endl;

    swap(arr[1],arr[3]);
    cout<<"Swap function arr[1],arr[3] respectively :- "<<arr[1]<<" , "<<arr[3]<<endl;

    cout<<"\nLower bound :- "<<lower_bound(arr.begin(),arr.end(),4)-arr.begin()<<endl;
    cout<<"upper bound :- "<<upper_bound(arr.begin(),arr.end(),5)-arr.begin()<<endl<<endl;

    cout<<"Minimum number :- "<<min(arr[2],arr[4])<<endl;
    cout<<"Maximum number :- "<<max(arr[2],arr[4])<<endl;

    string str="gnirtS esreveR ma I";//I am Reverse String
    cout<<"\nBefore Reverse :- "<<str;
    reverse(str.begin(),str.end());
    cout<<"\nAfter Reverse  :- "<<str;
    return 0;
}