class Solution {
public:
    
    int merge(vector<int>& arr,int l,int q,int r)
    {
        int i=l,j=q+1;
        int k=l;
        int ans=0;
        int a[5000];
        while(i<=q && j<=r)
        {
           
            if(arr[i]<=arr[j])
            {
                a[k]=arr[i];
                i++;
                k++;
            }
            else{
                a[k]=arr[j];
                j++;
                k++;
                ans+=(q-i+1);
            }
        }
        while(i<=q)
        {
            a[k]=arr[i];
            i++;k++;
        }
        while(j<=r)
        {
            a[k]=arr[j];
            j++;k++;
        }
        for(int z=l;z<=r;++z)
        {
            arr[z]=a[z];
          
        }
        
        return ans;
    }
    int mergesort(vector<int>& arr,int l,int r)
    {
        
        if(l<r)
        {
            
            int q=(l+r)/2;
            
            int left=mergesort(arr,l,q);
            int right=mergesort(arr,q+1,r);
            int present=merge(arr,l,q,r);
            return left+right+present;
        }
        return 0;
    }
    
    bool isIdealPermutation(vector<int>& A) {
        int local_inv=0,global_inv=0;
        for(int i=0;i<A.size()-1;++i)
            if(A[i]>A[i+1])
                local_inv++;
        global_inv=mergesort(A,0,A.size()-1);
        //cout<<local_inv<<"  "<<global_inv;
        cout<<endl;
        for(int x:A)
            cout<<x<<" ";
        if(local_inv==global_inv)
            return 1;
        return 0;
        
        
    }
};