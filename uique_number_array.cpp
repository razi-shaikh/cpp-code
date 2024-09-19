#include <iostream>
using namespace std;
int main() {
    int array[] = {1, 2, 3, 4, 5, 1, 2, 3};
    int i,j;
    bool found[8];
    for(i=0;i<8;i++)
    {
        found[i]=false;
    }
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(array[i]==array[j])
            {
                found[i]=true;
                found[j]=true;
                break;
            }
        }
    }
    for(i=0;i<8;i++)
    {
        if(!found[i])
        {
            cout<<" "<<array[i]<<" ";
        }
    }
    return 0;
}
