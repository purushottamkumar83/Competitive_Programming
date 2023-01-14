//The prime number indside the given range
#include<iostream>
#include<math.h>
using namespace  std;
class puru
{
    public:
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
    int segmentedSeive(int n)
    {
        int res=1;
        for(int i=2;i<=n;i++)
        {
            if(isprime(i))
                res*=i;
        }
        return res;
    }
};
int main()
{
    int t,n;
    cout<<"Enter the no of the test cases:";
    cin>>t;
    while(t!=0)
    {
        cout<<"Enter the last number:";
        cin>>n;
        puru op;
        int res=op.segmentedSeive(n);
        cout<<"Product of Prime number within the range "<<n<<" is: "<<res<<endl;
        t--;
    }
    return 0;
}