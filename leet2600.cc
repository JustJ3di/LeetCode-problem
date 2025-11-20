class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(numOnes + numZeros >= k)
            return min(numOnes, k);

        return numOnes-(k-numOnes-numZeros);
    }
};
