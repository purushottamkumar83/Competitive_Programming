

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        set <int> s;
    for(int i = n-1;i >= 0;i--){
        auto it = s.upper_bound(arr[i]);
        s.insert(arr[i]);
        arr[i] = it != s.end()?*it:-1;
    }
    return arr;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
    cout<<"No of test cases:";
	cin>>t;
	while(t--)
	{
	    int n;
        cout<<"Size of the array:";
	    cin >> n;
	    vector<int>arr(n);
        cout<<n<<" elements of array:";
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends