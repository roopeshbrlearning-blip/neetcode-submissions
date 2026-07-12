class Solution {
public:
    int characterReplacement(string s, int k) {
        
        std::unordered_map<char,int> freqmap;
        int res = 0;
        int left = 0;
        int right = 0;

        int maxFreq = 0;

        while(right < s.size()){
            freqmap[s[right]]++;

            for(auto &[key,value] : freqmap){
               maxFreq = max(maxFreq,value);
            }

            while(((right-left+1) - maxFreq) > k)
            {
                    freqmap[s[left]]--;
                    left++;
            }
            
            res = max(right-left+1, res);
            right++;
                 
        }

        return res;
    }
};
