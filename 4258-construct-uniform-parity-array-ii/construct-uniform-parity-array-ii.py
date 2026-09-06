class Solution:
    def uniformArray(self, nums1: list[int]) -> bool:
        return (min(nums1)&1)==1 or (reduce(or_, nums1)&1)==0