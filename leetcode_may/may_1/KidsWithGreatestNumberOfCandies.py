class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m=max(candies)
        op=[]
        for i in candies:
            if i+extraCandies>=m:
                op.append(True)
            else:
                op.append(False)
        return op