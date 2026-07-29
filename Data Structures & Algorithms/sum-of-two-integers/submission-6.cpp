class Solution {
public:
    int getSum(int a, int b) {
        int sumNoCarry = 0;
        unsigned int cout = 0;
        int sum =0;
        while (b!=0){
            sumNoCarry = a^b;
            cout = (a&b) <<1;
            a = sumNoCarry;
            b = cout;
        }
        return a;
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

a = 0011
b = 0001
s = 0100

a^b = 0010
a&b = 0001
a&b <<1 = 0010


*/
