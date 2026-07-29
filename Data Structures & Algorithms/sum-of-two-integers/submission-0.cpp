class Solution {
public:
    int getSum(int a, int b) {
        int sumNoCarry = a^b;
        int cout = (a&b) <<1;
        return sumNoCarry +cout;
    }
};

/*
a = 0010
b = 0101
s = 0111 


a = 0011
b = 0010
s = 0101

a^b = 0001
a&b = 0010
a&b <<1 = 0100

*/
