class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v;
        map<char,int> m;
        for(auto x: s)
            m[x]++;
        string s1="";
        for(auto x:m)
        {
            //cout<<x.first<<"-"<<x.second<<endl;
            v.push_back(make_pair(x.second,x.first));
            
        }
        sort(v.begin(),v.end());
        
        
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second;
            s1=string(x.first,x.second)+s1;
            
        }
            
        return s1;
    }
};