class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0;
        int size = flowerbed.size();
        if(size < 1) return false;
        if(size < 2) return (flowerbed[0] == 0 || n == 0);
        if(n > 0){
           for(;i < size-1;i++) {
            if(i == 0) {
                if(flowerbed[0] == 0 && flowerbed[1] == 0) {
                    flowerbed[0] = 1;
                    n--;
                }
            } else {
                if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0) {
                     flowerbed[i] = 1;
                     n--;
                }
               
            }
            
        }
        if(flowerbed[i-1] == 0 && flowerbed[i] == 0){
            flowerbed[i] = 1;
            n--;
        }
        }

        return (n < 1);
    }
};
