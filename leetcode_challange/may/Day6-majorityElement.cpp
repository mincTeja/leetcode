class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,m;
        for(auto x:nums)
        {
            if(cnt==0)
            {
                m=x;
                cnt++;
            }
            else
            {
                if(x==m)
                    cnt++;
                else
                    cnt--;
            }
        }
        cnt=0;
        for(auto x:nums)
        {
            if(x==m)
                cnt++;
        }
        if(cnt>nums.size()/2)
            return m;
        return NULL;
    }
};