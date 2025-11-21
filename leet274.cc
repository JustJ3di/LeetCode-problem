class Solution {
public:
    int hIndex(vector<int>& v) {
    
        sort(v.begin(), v.end(), greater<>());
        for(auto i = 0;i<v.size();i++){
            if(v[i] < i+1){
                return i;
            }
        }
        return v.size();
        
    }
};
