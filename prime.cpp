#include<iostream>
#include<math.h>
using namespace  std;
int isprime(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i<(int)sqrt(n)+1;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int t,n;
    cout<<"Enter the no of the test cases:";
    cin>>t;
    while(t!=0)
    {
        cout<<"Enter the no to checked:";
        cin>>n;
        if(isprime(n))
            cout<<n<<" is a prime number"<<endl;
        else
            cout<<n<<"is not a prime number"<<endl;
        t--;
    }
    return 0;
}
