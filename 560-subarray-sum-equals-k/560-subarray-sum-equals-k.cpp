class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //approach1 -> O(N2) 
//         int n=nums.size();
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum==k) ans++;
//             }
            
//         }
//         return ans;
        
        // approach 2->using map
        int n=nums.size();
        if(n==0) return 0;
        unordered_map<int,int> mpp;
        //key-> prefixSum
        // value->count of prefix sum
        
        int currSum=0;
        int i=0;
        int cnt=0;
        while(i<n){
            currSum+=nums[i];
            if(currSum==k) cnt++;
            if(mpp.find(currSum-k)!=mpp.end()){
                cnt+=mpp[currSum-k];
            }
            mpp[currSum]++;
            i++;
        }
        return cnt;
    }

};