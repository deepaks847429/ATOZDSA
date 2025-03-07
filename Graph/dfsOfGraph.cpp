//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<int> adj[], int visited[], vector<int> &ls){
        visited[node]=1;
        ls.push_back(node);
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it, adj, visited, ls);
            }
        }
        
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int visited[V]={0};
        int start=0;
        vector<int>ls;
        dfs(start, adj, visited, ls);
        return ls;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends