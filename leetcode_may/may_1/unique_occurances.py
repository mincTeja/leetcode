class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        s=set(arr)
        l=[]
        for i in s:
            l.append(arr.count(i))
        print(l)
        for i in l:
            if l.count(i)>1:
                return False
        return True