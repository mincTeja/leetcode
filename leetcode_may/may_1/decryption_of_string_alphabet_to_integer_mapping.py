class Solution:
    def freqAlphabets(self, s: str) -> str:
        ans=""
        i=0
        while i<len(s)-2:
            if s[i+2]=='#':
                ans+= chr(int(s[i:i+2])+ord('a')-1)
                i+=2
            elif s[i]=='#':
                i+=1
            else:
                ans+= chr(int(s[i])+ord('a')-1)
                i+=1
            print(i,s[i],ans)
        if s[i]=='#':
            i+=1
        while i<len(s):
            ans+= chr(int(s[i])+ord('a')-1)
            i+=1
        return ans
                
            
                
                