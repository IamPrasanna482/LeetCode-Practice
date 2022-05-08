class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // for(auto it:nums){
        //     mpp[it]++;
        // }
        // int ans;
        // for(auto it:mpp){
        //     if(it.second>1) {
        //         ans=it.first;
        //         break;
        //     }
        // }
        //     return ans;
        
        //sorting
        // sort(nums.begin(),nums.end());
        // int i;
        // for( i=0;i<nums.size()-1;i++) if(nums[i]==nums[i+1]) break;
        // return nums[i];
        
        //slow and fast pointer
        
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        } while(slow!=fast);
        
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
        fast=nums[fast];
        }
   return fast;
    }
};