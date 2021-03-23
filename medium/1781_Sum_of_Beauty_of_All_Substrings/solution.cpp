class Solution {
public:    
    int beautySum(string s) {
        int b = 0, j = 0, i, k, elem, count = 0, max = 0, size = s.length(), min = size;
        for(;j < size - 2; j++){ 
            vector<int> vec(26);
            i = j;
            for(;i < size; i++){  
                elem = s[i] - 'a'; 
                count = elem > count ? elem : count;
                vec[elem]++;                
                if(i-j > 1) { 
                    max = 0;
                    min = size;
                    k = 0;
                    for(;k < count+1; k++){
                        auto el = vec[k];
                        if(el != 0){
                            min = el < min  ? el : min;
                            max = el > max ? el : max; 
                        }       
                    }
                    b+= max - min;
                }
            }
        }
        return b;
    }
};
