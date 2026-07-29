class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reverse = 0;
        for (int i = 0; i<32;i++){
            int lastBitN= (n>>(31-i)) & 1;
            if (lastBitN == 1){
                reverse |= (1<<i);
            } else {
                reverse |= (0<<i);
            }
        }
        return reverse;
    }
};

// class Solution {
// public:
//     uint32_t reverseBits(uint32_t n) {
//         int reverse = 0;
//         for (int i = 31; i>0;i--){
//             n = n>>i;
//             n |= 1;
//             reverse &= n;
//         }
//         return reverse;
//     }
// };
