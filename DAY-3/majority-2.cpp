class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int> res;
        vector<int> v=nums;
        int n=nums.size()/3,temp=0;
        sort(v.begin(), v.end());
        auto last = unique(v.begin(), v.end());  
        v.erase(last, v.end());   
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
           temp=count(nums.begin(),nums.end(),v[i]);
            if(temp>n)
           {
               res.push_back(v[i]);
           }
        }
        return res;
        
    }
};
