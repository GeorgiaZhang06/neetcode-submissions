class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //in hashmap first int is the key(number), second int is the value(index)
        unordered_map<int, int> hashmap;
        int length = nums.size();
        for(int i = 0; i<length; i++){
            int needed = target - nums[i];
            if(hashmap.find(needed) != hashmap.end()){
                vector<int> result;
                //always search past array indices
                result.push_back(hashmap[needed]);
                result.push_back(i);
                return result;
            }
            hashmap[nums[i]] = i; //rumber that number nums [i] appeared at index i
        }
        return {};
    }
};
