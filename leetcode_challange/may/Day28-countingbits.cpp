class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>v1;
        
       
        for(int i=0;i<=num;++i)
        {
            if(i==0 || i==1)
                v1.push_back(i);
            else{
                int val=v1[i/2]+(i%2);
            v1.push_back(val);    
            }
            
           
        }
        return v1;
        
    }
};