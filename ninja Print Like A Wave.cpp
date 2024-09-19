#include <iostream>
using namespace std;
int main()
{
    int nRows=3,mCols=4;
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {0,0,0,0}
        };
    int i=0,j=0;
    while(j<mCols)
    {
        while(i>=0 && i<nRows)
        {
            cout<<arr[i][j]<<" ";
            i++;
        }
        j++;
        while(i<=nRows && i>0)
        {
            i--;
            cout<<arr[i][j]<<" ";
        }
        j++;
    }
    return 0;
}