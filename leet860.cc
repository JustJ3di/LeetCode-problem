class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int money10 = 0, money5 = 0;

        for(int  m:bills){
            if(m==5){
                money5++;
            }
            else if( m == 10){
                if(money5>0){
                        money5--;
                        money10++;
                }
                else{
                    return false;
                }
            }else if(m == 20){
                if(money5>0 && money10>0)
                    {money5--;money10--;}
                else if(money5>=3)
                    {money5-=3;}
                else
                    {return false;}
            }

        }
        return true;

        
    }
};
