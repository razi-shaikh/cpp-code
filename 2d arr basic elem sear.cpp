#include <iostream>
using namespace std;
bool check(int arr[][4],int key)
{
    for(int row=0;row<4;row++)
    {
        for(int col=0;col<4;col++)
        {
            if(arr[row][col]==key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[4][4];
    // taking input from user
    // for(int row=0;row<4;row++)
    // {
    //     for(int col=0;col<4;col++)
    //     {
    //         printf("Enter Element : [%d][%d] : ",row,col);
    //         cin>>arr[row][col];
    //     }
    // }
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
    cout<<"\nEnter any element : ";
    int key;
    cin>>key;
    if(check(arr,key))
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element Not Found";
    }
    return 0;
}