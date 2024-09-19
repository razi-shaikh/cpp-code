#include <iostream>
using namespace std;
int sumRow(int arr[][4])
{
    cout<<"\nSum of Row are\n";
    for(int row=0;row<4;row++)
    {
        int sumRow=0;
        for(int col=0;col<4;col++)
        {
            sumRow=sumRow+arr[row][col];
        }
        cout<<sumRow<<endl;
        sumRow=0;
    }
    return 0;
}
int sumCol(int arr[][4])
{
    cout<<"\nSum of Colum are\n";
    for(int col=0;col<4;col++)
    {
        int sumCol=0;
        for(int row=0;row<4;row++)
        {
            sumCol=sumCol+arr[row][col];
        }
        cout<<sumCol<<endl;
        sumCol=0;
    }
    return 0;
}
int main()
{
    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    int arr[4][4];
    cout<<"Enter the Element : \n";
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {
            cin>>arr[row][col];
        }
    }
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {
            // printf("[%d][%d] : %d\n",row,col,arr[row][col]);
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    sumRow(arr);
    sumCol(arr);
    return 0;
}