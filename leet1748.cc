class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        array<int,101>m = {};
        for(auto &e:nums){
            m[e]++;
        }
        int sum = 0;
        for(auto &e:nums){
            if(1 == m[e]){
                sum+=e;
            }
        }
        return sum;
    }
};
