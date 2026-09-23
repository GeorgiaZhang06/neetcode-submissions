class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int once = nums[0];
        for (int i = 1; i < nums.size(); i++){
          once = once ^ nums[i];
        }
        return once;
    }
};
