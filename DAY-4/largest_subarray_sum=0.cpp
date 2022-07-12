class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int i,count=1,flag=0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()==0)
            return 0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                count+=1;
            }
            else
            {   
                flag=max(flag,count);
                count=1;
            }
        }
         return max(flag,count);
    }
   
};
