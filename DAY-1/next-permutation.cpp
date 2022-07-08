class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i,k;
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i-1]<nums[i])
            {
                break;
            } 
        }
        if(i<1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(k=nums.size()-1;k>i-1;k--)
            {
                if(nums[k]>nums[i-1])
                {
                    break;
                }
            }
            swap(nums[k],nums[i-1]);
            reverse(nums.begin()+i,nums.end());
        }
    }
};
