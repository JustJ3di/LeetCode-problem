class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> letter;
        for(auto e: s){
            letter[e]++;
        }
        for( auto e: t){
            letter[e]--;
        }
        bool flag = true;
        for(auto e:letter){
            if(e.second!=0){
                flag = false;
            }
        }
        return flag;
    }
};
