class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int j=0,c=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]==0)
           c++;
           else
           nums[j++]=nums[i];
        }
        n=n-1;
        while(c--)
       {
          nums[n--]=0;
       }
       return ;
    }
};