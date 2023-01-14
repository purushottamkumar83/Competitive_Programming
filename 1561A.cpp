#include <iostream>
#include <vector>
#include <iterator>
#include <conio.h>

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n, x, count=0;
        cin>>n;
        vector<int> v;
        for (int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        while(true){
            int flag=0;
            for(vector<int>::iterator it=v.begin()+1; it!=v.end(); it++){
                if(*it < *(it-1)){
                    int tmp=*it;
                    *it=*(it-1);
                    *(it-1)=tmp;
                    flag=1;
                    ++it;
                }
            }
            // cout<<endl;
            // for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
            //     cout<<*it<<" ";
            // }
            if(flag == 0){
                cout<<"\n res: "<<count;
                break;
            }
            count++;
        }
        
    }
    return 0;
}