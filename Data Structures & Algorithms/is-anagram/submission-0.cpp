class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> shashmap;
        int slength = s.length();
        for(int i=0; i<slength; i++){
            shashmap[s[i]]++;
        }
        unordered_map<char,int> thashmap;
        int tlength = t.length();
        for(int i = 0; i<tlength; i++){
            thashmap[t[i]]++;
        }
        if (slength != tlength){
            return false;
        }
        if(shashmap!= thashmap){
            return false;
        }
        return true;
    }
};
