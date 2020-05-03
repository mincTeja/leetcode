class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        mag={}
        for i in magazine:
            if i in mag.keys():
                mag[i]+=1
            else:
                mag[i]=1
                
        
        for i in ransomNote:
            if i in mag.keys():
                if mag[i]>0:
                    mag[i]-=1
                    
                else:
                    return False
            else:
                return False
        
        return True