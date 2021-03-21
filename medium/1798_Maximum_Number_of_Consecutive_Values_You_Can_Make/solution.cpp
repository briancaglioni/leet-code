class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(coins.begin(), coins.end());
        int i = 0;
        int max = 1;
        for(;i<coins.size() && coins[i]<= max ;i++) {
            max += coins[i];
        }
        return max;
    }
};
