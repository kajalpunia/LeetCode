class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int l = 0;
        int r = nums.size()-1; 
        while (nums[l] + nums[r] != target and l <= r){
            if (nums[l] + nums[r] > target) r--;
            else if (nums[l] + nums[r] < target) l++;
        }
        return {l+1, r+1};
    }
};