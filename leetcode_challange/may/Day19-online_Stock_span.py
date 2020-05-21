class StockSpanner:
    
    def __init__(self):
        self.l=[]
        self.index=0
        

    def next(self, price: int) -> int:
        # self.l.append((StockSpanner.index,int(price)))
        self.index+=1
        while self.l and self.l[-1][1]<=int(price):
            self.l.pop(-1)
        print(self.l)
        if not self.l:
            self.l.append((self.index,int(price)))
            return self.index
        result=self.l[-1][0]
        
        self.l.append((self.index,int(price)))
        return self.index-result
            


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)