class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,c=0,j=nums.size()-1;
        while(c<=j)
        {
            if(nums[c]==1)
                c++;
            else if(nums[c]==0)
            {
                int tmp=nums[i];
                nums[i]=nums[c];
                nums[c]=tmp;
                i++;
                c++;
            }
            else
            {
                int tmp=nums[j];
                nums[j]=nums[c];
                nums[c]=tmp;
                --j;
            }
        //     for(int x:nums)
        //      cout<<x<<" ";
        //     cout<<endl;
            
        }
        
        
    }
};