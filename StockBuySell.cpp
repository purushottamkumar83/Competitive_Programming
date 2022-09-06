/*The cost of stock on each day is given in an array A[] of size N. Find all the segment of days on which you 
buy and sell the stock so that in between those days your profit is maximum.

Note: Since there can be multiple solutions, the driver code will return 1 if your answer is correct, 
otherwise, it will return 0. In case there's no profit the driver code will return the string "No Profit" 
for a correct solution.
i/p:
7
100 180 260 310 40 535 695
*/

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> x;
        for(int i=1;i<n;i++){
            if(A[i]>A[i-1]){
                x.push_back({i-1,i});
            }
        }
        return x;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends