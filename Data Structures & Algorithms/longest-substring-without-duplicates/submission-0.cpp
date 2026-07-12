class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0;
        int right = 0;
        std::unordered_set<char> substr;
        int res = 0;
        
        int maxSubstr;
        while(right < s.size()){
            if(!substr.count(s[right])) {
                substr.insert(s[right]);
                right++;
            }
            else{
                while(substr.count(s[right])){
                    substr.erase(s[left]);
                    left++;
                }
            }

            res = max(res, (right - left) );
        }

        return res;
    }
};
