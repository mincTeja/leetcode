class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        
        if len(num)==k:
            return "0"
        
        l=[int(i) for i in list(num)]
        op=[]
        for i in l:
            while op and k>0 and i<op[-1]:
                op.pop(-1)
                k-=1
            if op or i!=0:
                op.append(i)
                
        while op and k>0:
            op.pop(-1)
            k-=1
        if not op:
            return "0"
        
        return "".join([str(i) for i in op])