class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int e1 = edges[0][0];
        int e2 = edges[0][1];
        int e3 = edges[1][0];
        int e4 = edges[1][1];
        if(e1 == e3 || e1 == e4)return e1;
        return e2;
    }
};
