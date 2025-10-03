#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Taking the input
    int n, m;
    cin >> n >> m;
    
    // adjacency list for undirected graph
    vector<int> adj[n+1];
    
    // Add the edges to the list
    for(int i = 0; i < m; i++) {
        
        // Taking the input
        int u, v;
        cin >> u >> v;
        
        // Adding the edges
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}