class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        x=[]
        for i in range(len(paths)):
            x.append(paths[i][0])
            
        for i in range(len(paths)):
            if paths[i][1] not in x:
                return paths[i][1]