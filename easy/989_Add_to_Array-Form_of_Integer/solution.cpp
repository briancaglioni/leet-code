class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int num = 0;
        int carry = 0;
        int size = A.size();
        int i = size-1;
        for(;i > -1;i--){
            num = A[i]+K%10 + carry; 
            carry = num/10;
            A.push_back(num%10);
            K /= 10;            
        }
        while(K > 0) {
            num = K%10 + carry;
            carry = num/10;
            A.push_back(num%10);
            K /= 10;
        }
        if(carry) A.push_back(carry);
        A.erase(A.begin(), A.begin()+size);
        reverse(A.begin(), A.end());
        return A;
    }
};
