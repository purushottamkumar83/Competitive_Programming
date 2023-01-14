//The prime number indside the given range
#include<iostream>
#include<math.h>
#include<vector>
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
    vector<int> seiveOfEratosthenes(int n)
    {
        vector<int> res;
        for(int i=2;i<=n;i++)
        {
            if(isprime(i))
                res.push_back(i);
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
        vector<int> res=op.seiveOfEratosthenes(n);
        cout<<"Prime number within the range 0 to"<<n<<" are:"<<endl;
        for(vector<int>::iterator it=res.begin();it!=res.end();it++)
            cout<<*it<<" ";
        t--;
    }
    return 0;
}