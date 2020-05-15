class Solution:
    def diStringMatch(self, S: str) -> List[int]:
        n=len(S)
        end=n
        start=0
        op=[]
        for i in S:
            if i=="I":
                op.append(start)
                start+=1
            else:
                op.append(end)
                end-=1
           # else:
        while start <= end:
            op.append(start)
            start+=1
        return op