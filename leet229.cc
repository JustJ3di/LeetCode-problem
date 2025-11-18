class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto &e:nums){
            m[e]++;
        }
        vector<int>ret;
        for(auto &[key,value]:m){
            if(value > nums.size()/3)
                ret.emplace_back(key);
        }

        return ret;
    }
};
