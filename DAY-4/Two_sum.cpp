class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> res;
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j]==target)
                    {
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }
        }
        return res;
    }
};
