#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of element:";
    cin>>n;
    cout<<"Enter "<<n<<" elemenets:"<<endl;
    int x,i;
    vector<int> v;
    for(i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the element whose upper bound to be found:";
    cin>>x;
    sort(v.begin(), v.end());
    vector<int>::iterator up=upper_bound(v.begin(), v.end(), x);
    cout<<"Elements in vector:"<<endl;
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"Upper bound of "<<x<<" is: "<<*up<<endl;
    return 0;
}