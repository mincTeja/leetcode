class Solution {
public:
    static bool sortByVal(pair<int,int> a,pair<int,int> b)
    {
        if(a.second>b.second)
            return true;
        return false;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> v1;
        for(int x:nums)
            m[x]++;
         vector<pair<int,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),sortByVal);
        
        for(int i=0;i<k;++i)
            v1.push_back(v[i].first);
            
        
        return v1;
    }
};