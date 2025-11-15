class Solution {
public:

    int memo[200][200];
    int dp(int i, int j, vector <vector <int>> & grid)
    {
        if(i == 0 and j == 0)return grid[i][j];
        if(i<0)return 2000;
        if(j<0)return 2000;
    
        if(memo[i][j] != -1)return memo[i][j];
        memo[i][j] = min(dp(i-1,j,grid),dp(i,j-1,grid))+grid[i][j];
        return memo[i][j];

    }
    
    int minPathSum(vector<vector<int>>& grid) {
        memset(memo, -1, sizeof(int)*200*200);
        return dp(grid.size()-1 , grid[0].size()-1, grid);
    }
};
