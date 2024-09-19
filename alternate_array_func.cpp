#include <iostream>
using namespace std;
int alternate(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        swap(array[i],array[i+1]);
        i++;
    }
    return array[0];
}
int input(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"Enter array["<<i<<"] :- ";
        cin>>array[i];
    }

    return alternate(array,size);
}
void print(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<"array["<<i<<"] :- "<<array[i]<<endl;
    }
}
int main()
{
    int array[10];
    input(array,10);
    print(array,10);

    return 0;
}