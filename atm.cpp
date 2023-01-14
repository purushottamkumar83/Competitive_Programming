#include<iostream>
using namespace std;
int main()
{
    int amount;
    double balance;
    cin>>amount;
    cin>>balance;
    if (amount % 5 ==0)
    {
        if((amount+0.5)<=balance)
        {
            cout<<(balance-(amount+0.5));
        }
        else
        {
            cout<<balance<<endl;
        }
    }
    else
    {
        cout<<balance<<endl;
    }
    return 0;
}