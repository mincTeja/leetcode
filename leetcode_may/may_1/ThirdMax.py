class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        if len(set(nums))<3:
            return max(nums)
        nums=list(set(nums))
        a=-float("inf")
        b=-float("inf")
        c=-float("inf")
        for i in range(0,len(nums)):
            
            if a<=nums[i]:
                a,b,c=nums[i],a,b
            elif b<=nums[i]:
                b,c=nums[i],b
            elif c<=nums[i]:
                c=nums[i]
            else:
                continue
            print(a,b,c)
        return c
            
        