class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l1=len(nums)
        l=1
        for i in range(1,l1):
            if(nums[i]!=nums[i-1]):
                nums[l]=nums[i]
                l+=1
        return l
