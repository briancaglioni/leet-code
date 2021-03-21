class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        
        int start;
        
        if(maxSum == n) return 1;
        start = max(maxSum/n - n/2, 1);
        
        int tospend = maxSum - start*n - 1;
        int right = n - index -1;;
        int spent = 0;
        int i = 1;
        
        while(tospend > 0){
            tospend -= (1 + min(index,i) + min(right, i++));
            start++;        
        }    
        return tospend == 0 ? ++start : start;
    }
};
