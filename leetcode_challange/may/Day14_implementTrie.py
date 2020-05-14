class Node:
    def __init__(self,v):
        self.val=v
        self.children={}
        self.end=False

class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.root=Node(None)
        

    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        head=self.root
        for i,w in enumerate(word):
            if w not in head.children:
                head.children[w]=Node(w)
            head=head.children[w]
            if i==len(word)-1:
                head.end=True
        

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        head=self.root
        for i in word:
            if i not in head.children:
                return False
            head=head.children[i]
        return head.end

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        head=self.root
        for i in prefix:
            if i not in head.children:
                return False
            head=head.children[i]
        return True


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)