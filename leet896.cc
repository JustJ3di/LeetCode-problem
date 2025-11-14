class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc = true;
        bool desc = true;

        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i])asc=false;
            if(nums[i+1]<nums[i])desc = false;
        }

        return asc||desc;
    }
};
