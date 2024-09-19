#include <iostream>
using namespace std;
int main()
{
    int array[]={1,1,1,2,2,3};
    bool found[6];
    int check[10];

    for(int i=0;i<6;i++)
    {
        int count=1;
        for(int j=i+1;j<6;j++)
        {
            if(array[i]==array[j])
            {
                found[i]=true;
                found[j]=true;
                count++;
                
            }
        }
        check[i]=count;
        // cout<<array[i];
    }
    for(int i=0;i<6;i++)
    {
        cout<<check[i];
    }
    return 0;
}