class Solution {
public:
    int tribonacci(int n) {
        int t[3] = {0,1,1};
        if(n==0) return t[0];
        else if(n==1 || n==2)return 1;
        int val = 0;
        for(int i = 3;i<=n;i++){
            val = t[0] + t[1] + t[2];
            t[0] = t[1];
            t[1] = t[2];
            t[2] = val;
           
        }
        
        return val;
    }
};
