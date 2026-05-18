class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> numIndexMap;

        for(int i = 0; i<nums.size(); i++){

            int balance  = target - nums[i];
            
            if(!numIndexMap.count(balance)){

                numIndexMap[nums[i]] = i;
            }
            else{
                return {numIndexMap[balance],i};
            }
            
        }
        return {};
    }    
};
