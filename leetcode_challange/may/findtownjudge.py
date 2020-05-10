class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        
        l=[0]* (N+1)
        for i in trust:
            l[i[0]]-=1
            l[i[1]]+=1
        
        for i in range(1,len(l)):
            if l[i]==N-1:
                return i
        return -1
        