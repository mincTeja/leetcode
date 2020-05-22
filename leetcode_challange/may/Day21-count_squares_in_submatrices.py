class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        res=0
        if len(matrix)==0:
            return 0
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==1:
                    
                    if i==0 or j==0:
                        res+=1
                    else:
                        m=min(matrix[i-1][j-1],matrix[i-1][j],matrix[i][j-1])
                        matrix[i][j]=m+1
                        res+=matrix[i][j]
        return res
                    
        