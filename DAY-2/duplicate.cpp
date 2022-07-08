class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int i;
        if(nums.size()==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                break;
            }
        }
        return nums[i];
    }
    
};

