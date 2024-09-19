#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> a;
    a.push("one");
    a.push("two");
    a.push("three");
    a.push("four");
    cout<<"Top element of queue :- "<<a.front()<<endl;
    cout<<"Size of queue :- "<<a.size()<<endl;
    a.pop();
    cout<<"Top element of queue :- "<<a.front()<<endl;
    cout<<"Size of queue :- "<<a.size()<<endl;
    a.pop();
    cout<<"Back element of queue :- "<<a.back()<<endl;
    cout<<"Size of queue :- "<<a.size()<<endl;
    cout<<"Empty or not :- "<<a.empty();
    return 0;
}