class Solution {
public:
    int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        if(n == 0 || n == 1)return n;
        int f = f0;
        for(int i = 1;i<n;++i){
            f = f0+f1;
            f0 = f1;
            f1 = f;
        }
        return f;
    }
};
