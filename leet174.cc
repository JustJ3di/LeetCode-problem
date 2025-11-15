class Solution {
public:
    int memo[201][201];
    int dp(vector <vector<int>> & M,int i=0,int j=0)
    {
        int n = M.size();
        int m = M[0].size();    
        
        if(i == n || j == m)return 1e9; 
        
        if(i == n-1 and j == m-1)
            return (M[i][j] <= 0) ? -M[i][j] + 1 : 1;
        
        if( memo[i][j] != -1)
            return memo[i][j];
        
        int min_healt =  min(dp(M,  i , j+1),dp(M, i+1 , j)) -M[i][j];

        memo[i][j] = ( min_healt <= 0 ) ? 1 : min_healt;      
        return memo[i][j];

    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        memset(memo,-1,sizeof memo);

        return dp(dungeon);
    }
};
