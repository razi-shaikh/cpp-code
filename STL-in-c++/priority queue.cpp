#include <iostream>
#include<queue>
using namespace std;

int main()
{
    // maximum
    priority_queue<int> maxi;
    // minimum
    priority_queue< int,vector<int>,greater <int> > mini;
    cout<<"Maximum"<<endl;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    int maxiSize=maxi.size();
    for(int i=0;i<maxiSize;i++)
    {
        cout<<"Size of priority_queue :- "<<maxi.size()<<endl;
        cout<<"Highest element :- "<<maxi.top()<<endl;
        maxi.pop();
        cout<<"Empty or not :- "<<maxi.empty()<<endl<<endl;
    }

    cout<<endl<<"Minimum"<<endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    int miniSize=mini.size();
    for(int i=0;i<miniSize;i++)
    {
        cout<<"Size of priority_queue :- "<<mini.size()<<endl;
        cout<<"Highest element :- "<<mini.top()<<endl;
        mini.pop();
        cout<<"Empty or not :- "<<mini.empty()<<endl<<endl;
    }
    return 0;
}