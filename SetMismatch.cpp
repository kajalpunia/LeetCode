class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int total=(nums.size()*(nums.size()+1))/2;
        vector<int> arr(nums.size()+1,0); 
        int sum=0; 
        int rep;
        for(int b=0;b<nums.size();b++)
        {
            arr[nums[b]]++;
            if(arr[nums[b]]==2)
            {
                rep=nums[b];
            }
            sum+=nums[b];
        }
        vector<int> ans={rep,rep+total-sum};
        return ans;
    }
};