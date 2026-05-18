class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_map<int,int> numsDict;
        if(nums.empty())
        {
            return false;
        }

        for(int a: nums){
            cout<<a;
            if(!numsDict.count(a)){
                numsDict[a]+= 1;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};