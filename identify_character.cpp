#include <iostream>
using namespace std;
int main()
{
   int user,sum=0;
   int i=0;
   cout<<"Enter any number : ";
   cin>>user;
   while (i<=user)
   {
      if(i%2==0)
      {
         sum=sum+i;
      }
      i++;
   }
   cout<<"Sum of given range is "<<sum;
   return 0;
}