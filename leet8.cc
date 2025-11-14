class Solution {
public:
    int myAtoi(string str) {
        int s(0);
        stringstream ss;
        ss << str;
        ss >> s;
        return s;
    }
};
