class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
//         unordered_map<int,int> mpp;
//         for(auto it:nums) mpp[it]++;
        
//         vector<int> ans;
//         for(auto it:mpp){
//             if(it.second==2){
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
        
        vector<int> ans;
        for(auto it:nums){
            int indexToGo=abs(it);
            if(nums[indexToGo-1]>0) nums[indexToGo-1]*=-1;
            else ans.push_back(indexToGo);
        }   
        return ans;
    }
};