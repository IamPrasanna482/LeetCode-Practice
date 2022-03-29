class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }
        int ans;
        for(auto it:mpp){
            if(it.second>1) {
                ans=it.first;
                break;
            }
        }
            return ans;
    }
};