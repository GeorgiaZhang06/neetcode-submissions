class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> count = {};
        if (n==0){
            count.push_back(0);
            return count;
        }
        //must use a temp as to not corrupt the outer loop (at end of for loop u use i++)
        for (int i = 0; i<=n; i++){
            int ones = 0;
            int temp = i;
            while (temp!=0){
                if ((temp&1)==1){
                    ones++;
                    temp = temp>>1;
                }
                else{
                    temp = temp>>1;
                }
            }
            count.push_back(ones);
        }
        return count;
    }
};
