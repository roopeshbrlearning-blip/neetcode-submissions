class Solution {
public:
    bool isAnagram(string s, string t) {

        std::unordered_map<char,int> map_s;
        std::unordered_map<char,int> map_t;

        if(s.size() != t.size()){
            return false;
        }

        for(auto c: s){
            if(!map_s.count(c)){
                map_s[c] = 1;
            }
            else{
                map_s[c] += 1;
            }
        }

        for(auto c: t){
            if(!map_t.count(c)){
                map_t[c] = 1;
            }
            else{
                map_t[c] += 1;
            }
        }

        // if(map_s == map_t){
        //     return true;
        // }

        return map_s == map_t? true:false;
        
    }
};
