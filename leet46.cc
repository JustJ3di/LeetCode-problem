class Solution {
public:
    void comb(vector<int>nums, vector<vector<int>> &ans,int index){
        if(index==nums.size()) {
            ans.emplace_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            comb(nums,ans,index+1);
            swap(nums[index],nums[i]);
        }
            
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        comb(nums, ans, 0);
        return ans;
    }
};
