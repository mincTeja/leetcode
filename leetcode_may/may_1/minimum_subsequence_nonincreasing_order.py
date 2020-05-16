class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        if len(nums)<=1:
            return nums
        nums.sort()
        i=len(nums)-1
        s=sum(nums)
        cs=0
        op=[]
        while i>=0:
            cs+=nums[i]
            op.append(nums[i])
            if cs>(s-cs):
                break
            i-=1
            
        return op