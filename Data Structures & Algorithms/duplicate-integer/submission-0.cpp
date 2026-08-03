class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashtable;
        int length = nums.size();
        for(int i = 0; i<length; i++){
            //find() function returns the index of the element in the array, end()--> one spot past the end of the array
            if(hashtable.find(nums[i])!=hashtable.end()){
                return true;
            }
            hashtable.insert(nums[i]);
        }
        return false;
    }
};