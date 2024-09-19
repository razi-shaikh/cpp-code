#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> a;
    a.push("one");
    a.push("two");
    a.push("three");
    a.push("four");
    cout<<"Top element of stack :- "<<a.top()<<endl;
    cout<<"Size of stack :- "<<a.size()<<endl;
    a.pop();
    cout<<"Top element of stack :- "<<a.top()<<endl;
    cout<<"Size of stack :- "<<a.size()<<endl;
    a.pop();
    cout<<"Top element of stack :- "<<a.top()<<endl;
    cout<<"Size of stack :- "<<a.size()<<endl;
    cout<<"Empty or not :- "<<a.empty();
    return 0;
}