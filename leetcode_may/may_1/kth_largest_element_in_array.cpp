class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> v;
        for(auto x:nums)
        {
            v.push(x);
        }
        int ans;
        while(k>1)
        {
            v.pop();
            k--;
        }
        return v.top();
    }
};