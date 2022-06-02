class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mpp;
//         for(auto it:nums) mpp[it]++;
        
//         int ans;
//         for(auto it:mpp){
//             if(it.second>(nums.size()/2)){
//                 ans=it.first;
//             }
//         }
//         return ans;
        
        // moore voting algo
        int cnt=0;
        int candidate=0;
        for(auto it:nums){
            if(cnt==0) candidate=it;
            if(it==candidate) cnt++;
            else cnt--;
        }
        return candidate;
        
    }
};