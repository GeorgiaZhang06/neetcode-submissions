class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ones= 0;
        int bitIndex = 32;
        while(bitIndex>0){
            if ((n & 1) != 0){
                ones++;
                bitIndex--;
                n = n >>1;
            }
            else{
                bitIndex--;
                n = n>>1;
            }
        }
        return ones;
    }
};
