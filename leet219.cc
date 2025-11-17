class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> table;

        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            if (table.contains(val) && i - table[val] <= k) {
                return true;
            }
            table[val] = i;
        }

        return false;        
    }
};
