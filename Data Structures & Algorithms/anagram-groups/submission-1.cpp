class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string,std::vector<std::string>> anagramDict;
        std::vector<vector<std::string>> results;

        for(auto str: strs){
            char key[26] = {0};
            for(auto c: str){
                key[c-'a'] += 1;
            }

            string keystr;
            for(int i = 0; i<26; i++){
                keystr = keystr +","+std::to_string(key[i]);
            }
            
            anagramDict[keystr].push_back(str);
        }

        for(const auto& [key,value] : anagramDict){
            cout<<key<<endl;
            results.push_back(value);
        }
        

        return results;
    }
};
