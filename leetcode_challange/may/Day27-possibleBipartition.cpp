class Solution {
public:
    bool helper(vector<vector<int>> &v,int n,int i,vector<int> &color)
    {
        queue<int> q;
        q.push(i);
        color[i]=1;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            for(int x:v[cur])
            {
                if(color[x]==color[cur])
                    return 0;
                if(color[x]==-1)
                {
                    color[x]=1-color[cur];
                    q.push(x);
                }
            }
            
        }
        return 1;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> v(N+1);
        for(auto x:dislikes)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        vector<int> color_track(N+1,-1);
        for(int i=1;i<=N;++i)
        {
            if(color_track[i]==-1)
                if(!helper(v,N,i,color_track))
                    return 0;
        }
        return 1;
        
    }
};