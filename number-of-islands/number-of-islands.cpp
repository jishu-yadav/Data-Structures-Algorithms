class Solution {
public:
    void dfs(vector<vector<char>>&grid, vector<vector<int>>&vis, int i,int j){
        int m = grid.size(),n = grid[0].size();
        vis[i][j]=1;
        vector<int>dx = {0,1,0,-1};
        vector<int>dy = {-1,0,1,0};
        for(int k=0;k<4;k++){
            int i_nbr = i+dx[k],j_nbr = j + dy[k];
            if(i_nbr>=0 && i_nbr<m && j_nbr>=0 && j_nbr<n&& grid[i_nbr][j_nbr]=='1'&&vis[i_nbr][j_nbr]==0)
                dfs(grid,vis,i_nbr,j_nbr);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int c = 0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    c++;  
                    dfs(grid,vis,i,j);
                    
                }
            }
        }
        
        return c;
    }
};