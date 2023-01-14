/*#include <iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        long long int p;
        cin>>p;
        if(p % k==0)
            count++;
    }
    cout<<count<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int A,B;
        cin>>A;
        cin>>B;
        cout<<A+B<<endl;
    }
    return 0;
}
// 3 
// 1 2
// 100 200
// 10 40
