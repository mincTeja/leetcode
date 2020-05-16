class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int total_sum=0;
        int max_sum=INT_MIN;
        int min_sum=INT_MAX;
        int max_e=0;
        int min_e=0;
        for(auto x:A)
        {
            total_sum+=x;
            max_e=max(max_e+x,x);
            max_sum=max(max_e,max_sum);
            min_e=min(min_e+x,x);
            min_sum=min(min_e,min_sum);
        }
        if (max_sum>0)
            return max(max_sum,total_sum-min_sum);
        return max_sum; 
    }
};