/* Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.
i/p:
3 4
3 0
1 0
2 0 */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>indeg(V);
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        for(auto to:adj[i])indeg[to]++;
	    }
	    for(int i=0;i<V;i++)if(indeg[i]==0)q.push(i);
	    vector<int>order;
	    while(!q.empty()){
	        int cur=q.front();
	        q.pop();
	        order.push_back(cur);
	        for(auto to:adj[cur]){
	            indeg[to]--;
	            if(indeg[to]==0)q.push(to);
	        }
	    }
	    return order;
	}
};



int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends