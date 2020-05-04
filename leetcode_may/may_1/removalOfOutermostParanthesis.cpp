class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans;
        int o=0;
        for(char i:S)
        {
            if(i=='(')
            {
             if(o++ >0) ans+=i;   
            }
            if(i==')')
            {
                if(o-- >1) ans+=i;
            }
        }
        return ans;
    }
};