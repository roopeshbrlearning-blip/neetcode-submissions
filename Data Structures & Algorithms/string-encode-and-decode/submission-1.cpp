class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedStr;

        for(auto str: strs){
            int strLen = str.size();
            encodedStr += to_string(strLen)+'#'+str;
        }

        return encodedStr;
    }

    vector<string> decode(string s) {

        std::vector<std::string> decodedStrList;
        int length =0;
        int i =0;

        while(i < s.size()){
            int j = i;
            std::string strLen;

            while(s[j] != '#'){
                strLen += s[j];
                j++;
            }
            length  = std::stoi(strLen);
            decodedStrList.push_back(s.substr(j+1,length));
            i = j+length+1;
        }

        return decodedStrList;

    

    }
};
