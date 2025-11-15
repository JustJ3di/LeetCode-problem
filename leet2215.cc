class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>table1;
        unordered_map<int,int>table2;
        for(auto &&e:nums1){
            table1[e]++;
        }
        for(auto &&e:nums2){
            table2[e]++;
        }
        unordered_set<int>n1;
        unordered_set<int>n2;
        for(auto &&e:nums1){
            if(table1.contains(e) && !table2.contains(e))
                n1.emplace(e);
        }
        for(auto &&e:nums2){
            if(!table1.contains(e) && table2.contains(e))
                n2.emplace(e);
        }
                
        return {vector<int>(n1.begin(),n1.end()),vector<int>(n2.begin(),n2.end())};
    }
};
