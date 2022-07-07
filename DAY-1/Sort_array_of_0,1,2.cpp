class Solution {
public:
    void sortColors(vector<int>& nums) //dutch national flag algorithm
    {
        int l=0,m=0,h=nums.size()-1,t;  //3 pointers low,mid,high
        while(m<=h)                     
        {
            if(nums[m]==0)              // if mid == 0 swap a[low],a[mid] and low++,mid++
            {
                t=nums[l];
                nums[l]=nums[m];
                nums[m]=t;
                l++;
                m++;
            }
            else if(nums[m]==1)         // if mid == 1 mid++
            {
                m++;
            }
            else                        // if mid == 2 swap a[mid],a[high] and high--
            {
                t=nums[h];
                nums[h]=nums[m];
                nums[m]=t;
                h--;   
            }
        }
    }
};
