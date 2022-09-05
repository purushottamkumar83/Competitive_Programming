// Given an even number N (greater than 2), return two prime numbers
// whose sum will be equal to given number. There are several 
// combinations possible. Print only the pair whose minimum value 
// is the smallest among all the minimum values of pairs and print 
// the minimum element first.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    bool isPrime(int n)
    {
        for(int i=2; i*i<=n; ++i)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    vector<int> primeDivision(int A){
        vector<int> result;
        if(A<3)
            return result;
        vector<bool> arr(A+1, 0); //vector<int> causes judge memory overflow.
    
        for (int i=2; i<=A; ++i)
        {
            if(arr[i]==0)
            {
            //prime.emplace_back(i);
                if(isPrime(A-i))
                {
                    result.emplace_back(i);
                    result.emplace_back(A-i);
                    break;
                }
                for(int j=i; i*j<=A; ++j)
                    arr[i*j] = 1;
        }   
    }
    return result;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cout<<"No of test cases:";
    cin>>t;
    while(t--){
        int N;
        cout<<"Enter the number:";
        cin>>N; 
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends