class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1)>len(s2):
            return False
        s1_d=[0]*26
        for i in s1:
            s1_d[ord(i)-ord('a')]+=1
        
        s2_d=[0]*26
        left,right=0,0
        while right<len(s1):
            s2_d[ord(s2[right])-ord('a')]+=1
            right+=1
        right-=1
        while(right<len(s2)):
            if s1_d==s2_d:
                return True
            right+=1
            if right!=len(s2):
                s2_d[ord(s2[right])-ord('a')]+=1
            s2_d[ord(s2[left])-ord('a')]-=1
            left+=1
        print(s1_d,s2_d)
        return False
            
        