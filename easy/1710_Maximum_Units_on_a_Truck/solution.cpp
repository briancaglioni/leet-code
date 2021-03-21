class Solution {
public:
   
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            sort(boxTypes.begin(),boxTypes.end(), [](auto& i,auto& j ) { return i[1] > j[1]; });
            int output = 0;
            for (int i = 0; i < boxTypes.size() && truckSize > 0; i++)
            {
                int amount = boxTypes[i][0];
                int value = boxTypes[i][1];
                if(amount <= truckSize){
                    output += amount*value;
                    truckSize -= amount;
                    
                }
                else{
                    output += value*truckSize;
                    break;
                }
               
            }
        return output;
    }
};
