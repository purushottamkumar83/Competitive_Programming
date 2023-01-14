#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class solution{
    private:
        int n, x, target;
        vector<int> v;
    public:
        void input(){
            cin>>n;
            cout<<"enter "<<n<<" element";
            for (int i = 0; i < n; i++)
            {
                cin>>x;
                v.push_back(x);
            }
            cout<<"Enter target: ";
            cin>>target;
        }
        vector<int> pairSum(){
            int sum=0;
            vector<int> res;
            vector<int>::iterator itt;
            for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
            {
                sum=target-*it;
                itt=find(it+1, v.end(), sum);
                if(itt !=  v.end()){
                    cout<<it-v.begin()<<"iteration" <<*it<<endl;
                    res.push_back(it-v.begin());
                    res.push_back(itt-v.begin());
                    return res;
                }
            }
        }
};
int main(){
    solution s;
    s.input();
    vector<int> res;
    res=s.pairSum();
    for(vector<int>::iterator it = res.begin(); it != res.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
