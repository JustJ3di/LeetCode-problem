class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector <int> r(size);
        vector <int> l(size);
        int m = 0;
        for(int i = 0;i<size;i++)
        {
            l[i] = max(height[i],m);
            m = l[i];
        }        
        m = 0;
        for(int i = size-1;i>=0;i--)
        {
            r[i] = max(m,height[i]);
            m = r[i];
        }
        int sum = 0;
        for(int i = 0;i<size;i++)
        {
            sum+=min(l[i],r[i])-height[i];
        }
        return sum;
    }
};
