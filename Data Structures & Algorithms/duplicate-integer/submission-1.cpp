class HashTable{
    private:
    static const int SIZE = 10007;
    vector<vector<int>> table;
    public:
    HashTable(){
        table.resize(SIZE);
    }

    int hash(int key){
        return abs(key)% SIZE;
    }

    bool contains(int key){
        int index = hash(key);
        for(int i = 0; i <table[index].size(); i++){
            int num = table[index][i];
            if(num == key){
                return true;
            }
        }
        return false;
    }

    void insert(int key){
        int index = hash(key);
        table[index].push_back(key);
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int> &nums){
        HashTable hashtable;
        int length = nums.size();
        for(int i = 0; i<length; i++){
            if(hashtable.contains(nums[i])){
                return true;
            }
            hashtable.insert(nums[i]);
        }
        return false;
    }
//     bool hasDuplicate(vector<int>& nums) {
//         unordered_set<int> hashtable;
//         int length = nums.size();
//         //use: for (int num:nums), find(num)
//         for(int i = 0; i<length; i++){
//             //find() function returns the pointer to an element in the array, end()--> one spot past the end of the array
//             if(hashtable.find(nums[i])!=hashtable.end()){
//                 return true;
//             }
//             hashtable.insert(nums[i]);
//         }
//         return false;
//     }


};

