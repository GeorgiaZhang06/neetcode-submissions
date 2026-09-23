class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverseN = 0;
        int bitIndex=0;
        while (n!=0){
            if ((n&1) ==1){
                n= n>>1;
                reverseN |= (1 << (31-bitIndex));
                bitIndex++;
            }
            else{
                n = n>>1;
                bitIndex++;
            }
        }
        return reverseN;
    }
};
