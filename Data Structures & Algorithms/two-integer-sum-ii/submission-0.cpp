class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices = {};
        int right =numbers.size()-1;
        int left = 0;
        if (right == 0){
            return indices;
        }
        while (left<right){
            int sum = numbers[left] + numbers[right];
            if (sum == target){
                indices.push_back(left+1);
                indices.push_back(right+1);
                return indices;
            }
            if(target>sum){
                left++;
            }
            if(target<sum){
                right--;
            }
        }
        return indices;
    }
};
