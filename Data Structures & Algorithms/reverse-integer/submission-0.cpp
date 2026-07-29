class Solution {
public:
    int reverse(int x) {
        int lastDig = 0;
        int res = 0;
        while (x!=0){
            if (res > INT_MAX/10 || res < INT_MIN/10){
                return 0;
            }
            res = res*10;
            lastDig = x%10;
            res += lastDig;
            x = x/10;
        }
        return res;
    }
};
