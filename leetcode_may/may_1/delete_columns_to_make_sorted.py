class Solution:
    def minDeletionSize(self, A: List[str]) -> int:
        op=[]
        for i in range(len(A[0])):
            for j in range(len(A)-1):
                if A[j][i]>A[j+1][i]:
                    op.append(i)
                    break
        return len(op)