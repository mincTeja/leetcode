class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1=sorted(s1)
        print(s1)
        for i in range(len(s2)-len(s1)+1):
            if s2[i] not in s1:
                continue
            else:
                if "".join(s1)=="".join(sorted(s2[i:i+len(s1)])):
                    print(i)
                    return True
        return False