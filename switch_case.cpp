#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int amt;
    cout<<"Enter amount :- ";
    cin>>amt;
    int hund,five,two,ten,one;
    if (amt>0)
    {
        switch (1)
        {
        case 1:
            hund=amt/100;
            amt=amt-(hund*100);
            // cout<<"amt = "<<amt<<" hund "<<hund<<endl;
        
        case 2:
            five=amt/50;
            amt=amt-(five*50);
            // cout<<"amt = "<<amt<<" five "<<five<<endl;

        case 3:
            two=amt/20;
            amt=amt-(two*20);
            // cout<<"amt = "<<amt<<" two "<<two<<endl;

        case 4:
            ten=amt/10;
            amt=amt-(ten*10);
            // cout<<"amt = "<<amt<<" ten "<<ten<<endl;

        case 5:
            one=amt;
            // cout<<"amt = "<<amt<<" one "<<one<<endl;
        }
        printf("we need no of 100 is %d\nwe need no of 50 is %d\nwe need no of 20 is %d\nwe need no of 10 is %d\nwe need no of 1 is %d\n",hund,five,two,ten,one);
    }

    else
    {
        cout<<"Amount should be greater than 0";
    }
    return 0;
}