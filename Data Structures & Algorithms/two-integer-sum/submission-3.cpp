class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> nums_map;
        std::vector<int> result;

        for(int i = 0; i<nums.size()-1; i++){

            int balance = target - nums[i];
            if(nums_map.count(balance)){
                
                result.push_back(nums_map[balance]);
                result.push_back(i);
                return result;
            }else{
                nums_map[nums[i]] = i;
            }
        }
        
    }
};
