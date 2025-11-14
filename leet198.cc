class Solution {
public:
    int memo[101];
    int dp(int i,vector<int>&nums){
        if(i<0)
            return 0;
        if(memo[i] != -1)
            return memo[i];
        else
           return  memo[i] = max(dp(i-1,nums), nums[i] + dp(i-2,nums));

    }
    int rob(vector<int>& nums) {
        memset(memo,-1,sizeof(int)*101);
        return dp(nums.size()-1,nums);
    }
};
