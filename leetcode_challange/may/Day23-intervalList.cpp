class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> v;
        for(int i=0;i<A.size();++i)
        {
            for(int j=0;j<B.size();++j)
            {
                
                if(B[j][0]>A[i][1] || A[i][0]>B[j][1])
                    continue;
                vector<int> v1;
                v1.push_back(max(A[i][0],B[j][0]));
                v1.push_back(min(A[i][1],B[j][1]));
                v.push_back(v1);
            }
        }
        return v;
    }
};