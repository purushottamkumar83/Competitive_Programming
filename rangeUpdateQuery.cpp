#include<iostream>
#include<vector>

using namespace std;
void queryUpdate(vector<int> &v, int l, int r, int d)
{
    v[l]+=d;
    v[r]+=d;
}

int main()
{
    vector<int> v;
    int n,x;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int l, r, d;
    cout<<"Enter the left, right index and tha value to be updated:"<<endl;
    cin>>l>>r>>d;
    cout<<"Before processing the query:"<<endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    queryUpdate(v, l, r, d);
    cout<<"\nAfter processing the query:"<<endl;
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    return 0;
}