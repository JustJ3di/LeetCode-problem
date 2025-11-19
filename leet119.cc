class Solution {
public:
    vector<int> getRow(int rowIndex) {
    int reflect = (rowIndex + 1) - (rowIndex + 1) / 2;
    
    int index = (rowIndex + 1) / 2 - 1;
    
    long temp = 1;
    
    vector<int> output;
    
    for(int i = 0; i <= rowIndex; i++)
    {
        if(i < reflect)
        {
            if(i != 0)
            {
                temp = temp * (rowIndex - i + 1) / i;
            }
            output.push_back(temp);
        }else{
            output.push_back(output[index]);
            index--;
        }
    }
    
    return output;
    
    }
};
