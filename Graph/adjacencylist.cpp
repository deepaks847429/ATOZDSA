#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<int> adj[n+1];
  for(int i=0; i<m; i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  // in case of directed graph we have space complexity of O(E) because we story only one node whereas in case of undirected graph we have space complexity of O(2E) because we store nodes in both directions.
  return 0;
}