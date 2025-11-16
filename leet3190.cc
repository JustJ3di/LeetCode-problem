class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int s = 0;
        for(auto &e: nums)
            if(e%3!=0)s++;
        
        return s;
    }
};
