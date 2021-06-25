class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int mid, start=0, end=(nums.size()-1);
        if(nums[end]<target)
        {
            return end+1;
        }
        if(nums[start]>target)
        {
            return 0;
        }
        while(start<=end)
        {
            mid= (end+start)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                start= mid+1;
                mid= mid+1;
            }
            else
            {
                end= mid-1;
            }
        }
        return mid;
    }
};