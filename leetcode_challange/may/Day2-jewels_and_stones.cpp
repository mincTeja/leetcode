class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count=0;
        for(auto x:S)
        {
            for(auto y:J)
            {
                if(x==y)
                    count++;
            }
                
        }
        return count;
    }
};