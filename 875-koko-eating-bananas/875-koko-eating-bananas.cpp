class Solution {
private: 
    int check(int perhr,vector<int> & v,int h){
        int cnt=0;
        for(auto &it:v){
            cnt+=it/perhr;
            if(it%perhr) cnt+=1;
        }
        return cnt<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=piles[0];
        for(auto &it:piles) maxi=max(maxi,it);
        int low=1;
        int high=maxi;
        int ans=high;
        while(low<=high){
            int mid=(low+high) >> 1;
            if(check(mid,piles,h)) {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};