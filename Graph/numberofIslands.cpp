#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution{
  private:
  void bfs(int row, int col, vector<vector<int>>& visited, vector<vector<char>>& grid){
    int n=grid.size();
    int m=grid[0].size();
    visited[row][col]=1;
    queue<pair<int, int>>q;
    q.push{(row, col)};
    while(q.empty()){
      int x=q.front().first;
      int y=q.front().second;
      q.pop();
      for(int delrow=-1; delroe<=-1; delrow++){
        for(int delcol=-1; delcol<=1; delcol++){
          int nrow=x+delrow;
          int ncol=y+delcol;
          if(nrow>0 && nrow<n && ncol>0 && ncol<m && !visited[nrow][ncol] && grid[nrow][ncol]=='1'){
            visited[nrow][ncol]=1;
            q.push({nrow, ncol});
          )}
          }
        }
      }
    }
  }
  public:
  int numIslands(vector<vector<int>>& grid){
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m,0));
    int count=0;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        if(!visited[i][j] && grid[i][j]){
          count++;
          bfs(i, j, visited, grid);
        }
      }
    }
    return count;
  }

};
int main(){
  return 0;
}