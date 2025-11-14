class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n =0;
        for(int i = 0; i < t.size()+1; ++i){
            if(s[n] == t[i]){
                n++;
            }
        }
        return (s.size()+1 == n);
        
    }
};
