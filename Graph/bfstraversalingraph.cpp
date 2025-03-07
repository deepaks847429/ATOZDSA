#include<bits/stdc++.h>
using namespace std;
class Solution{
  public: 
  vector<int> bfsOfGraph(vector<vector<int>> & adj){
    int v=adj.size();
    int visited[v]={0};
    vector<int>bfs;
    queue<int>q;
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
      int node=q.front();
      q.pop();
      bfs.push_back(q.front());
      for(auto it : adj[node]){
        if(!visited[it]){
          q.push(it);
          visited[it]=1;
          q.push(it);
        }
      }
    }
    return bfs;
   }
   
};

int main(){
  int tc;
  cin>>tc;
  while(tc--){
    int V, E;
    cin>>V>>E;
    vector<vector<int>> adj(V);
    for(int i=0; i<E; i++){
      int u, v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
   Solution obj;
   vector<int> ans =obj.bfsOfGraph(adj);
    for(int i=0; i<ans.size(); i++){
      cout<<ans[i]<<" ";
    }
    cout << endl;
  }
  return 0;
}


// space complexity - O(N)+O(N)+O(N) = O(N)(queue, visited array, bfs array)

// Time complexity -  o(n)+O(2E)  it means it runs for all nodes and while entering into while looop it runs for all edges(degree of nodes) so it is O(N)+O(E) = O(N+E) = O(V+E) where V is number of vertices and E is number of edges.