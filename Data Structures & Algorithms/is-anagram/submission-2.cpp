struct Pair{
    char key;
    int value;
};

class HashMap{
    private:
    static const int SIZE = 26;
    vector<vector<Pair>> table;
    public:
    HashMap(){
        table.resize(SIZE);
    }

    int hash(char key){
        return key % SIZE;
    }

    void increment(char key){
        int index = hash(key);

        //Look for the key first
        for(int i = 0; i< table[index].size(); i++){
            if(table[index][i].key == key){
                table[index][i].value++;
                return;
            }
        }

        //if key not foudn
        Pair newPair;
        newPair.key = key;
        newPair.value = 1;
        table[index].push_back(newPair);

    }

    int get(char key){
        int index = hash(key);

        for(int i = 0; i <table[index].size(); i++){
            if(table[index][i].key == key){
                return table[index][i].value;
            }
        }
        return 0;
    }

};

class Solution{
    public:
    bool isAnagram(string s, string t){
        HashMap sMap;
        HashMap tMap;
        int sLength = s.length();
        int tLength = t.length();
        for(int i = 0; i< sLength; i++){
            sMap.increment(s[i]);
        }
        for(int i = 0; i< tLength; i++){
            tMap.increment(t[i]);
        }
        for(char c = 'a'; c<= 'z'; c++){
            if(sMap.get(c)!= tMap.get(c)){
                return false;
            }
        }
        return true;
    }
};

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         unordered_map<char,int> shashmap;
//         int slength = s.length();
//         for(int i=0; i<slength; i++){
//             shashmap[s[i]]++;
//         }
//         unordered_map<char,int> thashmap;
//         int tlength = t.length();
//         for(int i = 0; i<tlength; i++){
//             thashmap[t[i]]++;
//         }
//         if (slength != tlength){
//             return false;
//         }
//         if(shashmap!= thashmap){
//             return false;
//         }
//         return true;
//     }
// };
