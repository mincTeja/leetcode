class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        d={}
        ans=0
        sum=0
        for i in range(len(nums)):
            if nums[i]==0:
                sum+=-1
            else:
                sum+=1
            if sum==0:
                ans=max(ans,i+1)
            elif sum in d.keys():
                ans=max(ans,i-d[sum])
            else:
                d[sum]=i
        return ans