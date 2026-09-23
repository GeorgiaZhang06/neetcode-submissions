class Solution {
public:
    int getSum(int a, int b) {
        while (b!=0){
            int sumNoCarry = a^b;
            int cout = (a&b)<<1;
            a = sumNoCarry;
            b = cout;
        }
    return a;
    }

};

// 001
// 010
// = 011

// 010
// 010
// = 100

// 100
// 110
// =1010

