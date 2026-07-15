class Solution {
private:
    int binarySearch(int l, int r, vector<int>& nums, int target){

        if(l > r) return -1;

        int mid = l + ((r - l)+1)/2;
        int result = 0;

        if(target > nums[mid]){
            l = mid+1;
            result = binarySearch(l, r, nums, target);
        }
        else if(target < nums[mid])
        {
            r = mid -1;
            result = binarySearch(l, r, nums, target);
        }
        else
        {
            result = mid;   
        }

        return result;
    }

public:
    int search(vector<int>& nums, int target) {

        int l = 0;
        int r = nums.size()-1;

        int result = binarySearch(l, r, nums, target);

        return result;
        
    }
};
