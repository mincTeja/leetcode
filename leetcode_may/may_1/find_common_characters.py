class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        return reduce(lambda x,y : x&y,[Counter(string) for string in A]).elements()
        