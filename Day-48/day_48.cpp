class Solution {
public:

    void dfs(vector<vector<char>>& grid, int i , int j, int m, int n){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0' || grid[i][j]=='$'){
            return ;
        }
        
        if(grid[i][j] == '-') {
            return;
        }

        grid[i][j] = '$';

        //for up
        dfs(grid, i-1, j, m, n);
        //for down
        dfs(grid, i+1, j, m, n);
        //for left
        dfs(grid, i, j-1, m, n);
        //for right
        dfs(grid, i, j+1, m, n);
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();
        if (n == 0) return 0;

        int count = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,m,n);
                    count++;
                }
            }
        }

        return count;
    }
};
