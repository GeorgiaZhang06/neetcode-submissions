class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int range = nums.size();
        for(int i= 0; i< nums.size();i++){
            range = range ^nums[i];
            range = range ^ i;
        }
        return range;
    }
};
