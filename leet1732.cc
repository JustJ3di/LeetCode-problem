class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>h;
        int current = 0;
        h.emplace_back(current);
        for(int g : gain){
            current += g;
            h.emplace_back(current);
        }
        auto i  = *(max_element(h.begin(), h.end()));
        return i;
    }
};
