// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low=0,high=n;
        long mid;
        while(low<high)
        {
            mid=(low+high)/2;
            if(isBadVersion(mid))
            {
                break;
            }
            else
                low=mid+1;
        }
        while(isBadVersion(mid))
            mid--;
        return mid+1;
    }
};