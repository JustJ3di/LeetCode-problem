class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children)return -1;
        money -= children;
        int res{};
        while(money>=7 && children>0){
            money -= 7;
            res++;
            children--;
        }
        if(res == 0)return res;
        if((children == 0 && money > 0) || (children == 1 && money == 3)) res -= 1;

        return res;
    }
};
