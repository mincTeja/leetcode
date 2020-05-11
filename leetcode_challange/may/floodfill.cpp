class Solution {
public:
    void filling(vector<vector<int>>& img,int r,int c,int oc,int nc)
    {
        if(r<0 || c<0 || r>=img.size()|| c>=img[0].size() || img[r][c]!=oc)
            return;
        img[r][c]=nc;
        filling(img,r+1,c,oc,nc);
        filling(img,r-1,c,oc,nc);
        filling(img,r,c+1,oc,nc);
        filling(img,r,c-1,oc,nc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        filling(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};