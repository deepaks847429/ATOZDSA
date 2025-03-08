#include<iostream>
#include<vector>
using namespace std;
class Solution{
  private:
  void dfs(int node, vector<int> & adjls, int visited[]){
    visited[node]=1;
    for(auto it: adjls[node]){
     if(!visited[it]){
      dfs(it, adjls, visited);
     }
    }
  }
  public:
  int numprovinces(vector<vector<int> > adj, int V){
     vector<int> adjls[V];
     for(int i=0; i<V; i++){
      for(int j=0; j<V; j++){
        if(adj[i][j]==1 && i!=j){
          adjls[i].push_back(j);
          adjls[j].push_back(i);
        }
      }
     }
     int visited[V]={0};
     int count=0;
     for(int i=0; i<V; i++){
      if(!visited[i]){
        count++;
        dfs(i, adjls, visited);
      }
     }
     return count;
    

  }
};
int main(){
  return 0;
}