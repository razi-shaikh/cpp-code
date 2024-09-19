#include <iostream>
using namespace std;
int main()
{
    int arr[]={7,6,5,1,2,3,4,9,8,0};
    int n=size(arr);
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];//6=1 //5=2
        int j=i-1;//j=0 //j=1
        for(;j>=0;j--)//0>=0 //1>=0
        {
            if(arr[j]>temp)//7>6 //6>5
            {
                arr[j+1]=arr[j];//0+1=6==7 //1+1=5==6 
                //0+1=6==

            }
            else
            {
                break;
            }
        }

        arr[j+1]=temp;//0+1=6 == 6
    }

    // printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}