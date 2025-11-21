class Solution {
public:
    bool isCircularSentence(string sentence) {
        int size = sentence.size();
        for(auto i = 0;i < sentence.size(); ++i){
            if(sentence[i] == ' ' &&  sentence[i+1] != sentence[i-1])
                return false;
        }
        if(*sentence.begin() != *(sentence.end()-1))return false;
        return true;
    }
};
