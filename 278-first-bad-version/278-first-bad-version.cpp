// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    
    // 1 2 3 4 5 6
public:
    int firstBadVersion(int n) {
        
        int low=0;
        int high=n-1;
        int ans;
        while(low<=high){
             int mid=low+(high-low)/2;
            if(isBadVersion(mid)){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};