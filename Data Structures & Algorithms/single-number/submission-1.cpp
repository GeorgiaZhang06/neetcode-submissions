class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int length = nums.size();
      int result;
      int num = nums[0];
      if(length==1){
        return nums[0];
      }
      for(int i = 1; i<length; i++){
        result = num ^ nums[i];
        num = result;
      } 
      return result;
    }
};


