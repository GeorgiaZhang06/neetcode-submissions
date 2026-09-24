class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        vector<int> sum;
        for(int i = 0; i<nums.size(); i++){
            int needed = target - nums[i];
            if(index.count(needed)>0){
                sum.push_back(index[needed]);
                sum.push_back(i);
                return sum;
            }
            index[nums[i]]=i;
        }
        return sum;
    }
};
