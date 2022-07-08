class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        for i in range(n):
                nums1.remove(0)
                nums1.append(nums2[i])
        nums1.sort()
