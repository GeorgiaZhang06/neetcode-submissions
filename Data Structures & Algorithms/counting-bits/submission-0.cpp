class Solution {
public:
    vector<int> countBits(int n) {
        int offset = 1;
        vector<int> result;
        for(int i = 0; i<=n; i++){
            if(offset * 2 == i){
                offset=i;
            }

            if(i == 0){
                result.push_back(0);
            } else{
                result.push_back(1 + result[i-offset]);
            }
        }
        return result;
    }
};
