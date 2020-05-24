class Solution:
    def arrangeWords(self, text: str) -> str:
        l=[]
        for i in text.split(" "):
            l.append((i,len(i)))
        l.sort(key=lambda x : x[1])
        s=""
        for i in l:
            s=s+i[0].lower()+" "
        return s[0].upper()+s[1:-1]
        
        