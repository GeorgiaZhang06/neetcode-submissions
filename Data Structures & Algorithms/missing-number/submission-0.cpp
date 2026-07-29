class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int result = length;
        for(int i = 0; i<length; i++){
            result = result ^ i; 
            result = result ^ nums[i]; 
        }
        return result;
    }
};


