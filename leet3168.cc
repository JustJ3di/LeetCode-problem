class Solution {
public:
    int minimumChairs(string s) {
        int m = 0;
        int c= 0;
        for(auto i = 0;i<s.size();++i){
            if(s[i] == 'E')
                c++;
            else
                c--;
            m = m>c ? m:c;
        }
        return m;
    }
};
