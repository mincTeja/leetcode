class Solution:
    def judgeCircle(self, moves: str) -> bool:
        l=[0,0]
        for i in moves:
            if i=="U":
                l[1]+=1
            if i=="D":
                l[1]-=1
            if i=="L":
                l[0]-=1
            if i=="R":
                l[0]+=1
        
        if l[0]==0 and l[1]==0:
            return True
        return False