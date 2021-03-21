class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i = 1;
        int sum = nums[0];
        int max = sum;
        int size = nums.size();
        if(size == 1) return sum;
        for(;i < size; i++){
            if(nums[i-1] < nums[i])
            {
                sum += nums[i];
                if(sum > max) max = sum;
            } else {
                sum = nums[i];
            }
        }
        return max;
        
    }
};
